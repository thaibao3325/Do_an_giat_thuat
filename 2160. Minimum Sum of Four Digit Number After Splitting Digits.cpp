class Solution {
public:
    int minimumSum(int num) {
        // Extract digits
        vector<int> digits;
        while (num > 0) {
            digits.push_back(num % 10);
            num /= 10;
        }
        
        // Sort digits ascending
        sort(digits.begin(), digits.end());
        
        // Build two numbers by alternating digits
        int new1 = 0, new2 = 0;
        for (int i = 0; i < digits.size(); i++) {
            if (i % 2 == 0) {
                new1 = new1 * 10 + digits[i];
            } else {
                new2 = new2 * 10 + digits[i];
            }
        }
        
        return new1 + new2;
    }
};
