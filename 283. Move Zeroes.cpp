class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int insertPos = 0;
        
        // Move non-zero elements forward
        for (int num : nums) {
            if (num != 0) {
                nums[insertPos++] = num;
            }
        }
        
        // Fill remaining positions with zeros
        while (insertPos < nums.size()) {
            nums[insertPos++] = 0;
        }
    }
};
