class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string, int> count1, count2;
        
        // Count frequencies in words1
        for (auto &w : words1) {
            count1[w]++;
        }
        // Count frequencies in words2
        for (auto &w : words2) {
            count2[w]++;
        }
        
        int result = 0;
        // Check words that appear exactly once in both
        for (auto &[word, freq] : count1) {
            if (freq == 1 && count2[word] == 1) {
                result++;
            }
        }
        return result;
    }
};