class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int, int> freq;
        
        // Count frequency of each number
        for (int n : nums) {
            freq[n]++;
        }
        
        // Check if all counts are even
        for (auto &p : freq) {
            if (p.second % 2 != 0) {
                return false;
            }
        }
        
        return true;
    }
};
