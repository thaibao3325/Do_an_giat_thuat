class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> count(26, 0);

        // Bước 1: đếm
        for (char c : s) {
            count[c - 'a']++;
        }

        // Bước 2: tìm ký tự đầu tiên có count = 1
        for (int i = 0; i < s.size(); i++) {
            if (count[s[i] - 'a'] == 1) {
                return i;
            }
        }

        return -1;
    }
};