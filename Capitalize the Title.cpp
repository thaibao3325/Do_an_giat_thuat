class Solution {
public:
    string capitalizeTitle(string title) {
        stringstream ss(title);
        string word;
        string result;
        
        while (ss >> word) {
            // If word length <= 2 → lowercase
            if (word.size() <= 2) {
                for (auto &c : word) c = tolower(c);
            } else {
                // First letter uppercase, rest lowercase
                word[0] = tolower(word[0]); // reset first to lowercase first
                word[0] = toupper(word[0]); // then uppercase
                for (int i = 1; i < word.size(); i++) {
                    word[i] = tolower(word[i]);
                }
            }
            
            if (!result.empty()) result += " ";
            result += word;
        }
        
        return result;
    }
};
