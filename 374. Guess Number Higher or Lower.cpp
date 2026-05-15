// The guess API is already defined for you.
// int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        int low = 1, high = n;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            int res = guess(mid);
            
            if (res == 0) {
                return mid; // found the number
            } else if (res < 0) {
                high = mid - 1; // number is lower
            } else {
                low = mid + 1; // number is higher
            }
        }
        
        return -1; // should never happen
    }
};
