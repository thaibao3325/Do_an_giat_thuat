class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2,
                     vector<int>& nums3, vector<int>& nums4) {
        
        unordered_map<int, int> mp;

        // Tính nums1 + nums2
        for (int a : nums1) {
            for (int b : nums2) {
                mp[a + b]++;
            }
        }

        int count = 0;

        // Tìm nums3 + nums4
        for (int c : nums3) {
            for (int d : nums4) {
                int target = -(c + d);
                if (mp.count(target)) {
                    count += mp[target];
                }
            }
        }

        return count;
    }
};