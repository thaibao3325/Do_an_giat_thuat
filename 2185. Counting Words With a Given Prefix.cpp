class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count = 0;
        for (auto &w : words) {
            // check if pref is a prefix of w
            if (w.size() >= pref.size() && w.substr(0, pref.size()) == pref) {
                count++;
            }
        }
        return count;
    }
};
