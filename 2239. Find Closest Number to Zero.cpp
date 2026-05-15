class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int closest = nums[0];
        
        for (int n : nums) {
            if (abs(n) < abs(closest)) {
                closest = n;
            } else if (abs(n) == abs(closest) && n > closest) {
                closest = n;
            }
        }
        
        return closest;
    }
};
