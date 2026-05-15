class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<long long> pq;
        
        // Build max-heap
        for (int g : gifts) {
            pq.push(g);
        }
        
        // Perform k operations
        for (int i = 0; i < k; i++) {
            long long top = pq.top();
            pq.pop();
            pq.push((long long)floor(sqrt(top)));
        }
        
        // Sum remaining gifts
        long long total = 0;
        while (!pq.empty()) {
            total += pq.top();
            pq.pop();
        }
        
        return total;
    }
};