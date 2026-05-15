class Solution {
public:
    int countEven(int num) {
        int count = 0;
        
        for (int i = 1; i <= num; i++) {
            int sum = 0, x = i;
            
            // compute digit sum
            while (x > 0) {
                sum += x % 10;
                x /= 10;
            }
            
            // check if digit sum is even
            if (sum % 2 == 0) {
                count++;
            }
        }
        
        return count;
    }
};
