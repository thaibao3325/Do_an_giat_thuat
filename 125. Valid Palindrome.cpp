class Solution {
public:
    bool isPalindrome(string s) {
        string filtered;
        
        // Keep only alphanumeric characters, convert to lowercase
        for (char c : s) {
            if (isalnum(c)) {
                filtered.push_back(tolower(c));
            }
        }
        
        // Two-pointer check
        int left = 0, right = filtered.size() - 1;
        while (left < right) {
            if (filtered[left] != filtered[right]) {
                return false;
            }
            left++;