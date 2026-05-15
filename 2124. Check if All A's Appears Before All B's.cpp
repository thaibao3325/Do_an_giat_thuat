class Solution {
public:
    bool checkString(string s) {
        // Traverse the string
        for (int i = 0; i < s.size() - 1; i++) {
            // If we ever see "ba", it's invalid
            if (s[i] == 'b' && s[i+1] == 'a') {
                return false;
            }
        }
        return true;
    }
};
