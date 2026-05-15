class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2,
                     vector<int>& nums3, vector<int>& nums4) {
        unordered_map<int, int> sumCount;
        
        // Step 1: Store sums of nums1 + nums2
        for (int a : nums1) {
            for (int b : nums2) {
                sumCount[a + b]++;
            }
        }
        
        int result = 0;
        // Step 2: Check sums of nums3 + nums4
        for (int c : nums3) {
            for (int d : nums4) {
                int target = -(c + d);
                if (sumCount.find(target) != sumCount.end()) {
                    result += sumCount[target];
                }
            }
        }
        
        return result;
    }
};
