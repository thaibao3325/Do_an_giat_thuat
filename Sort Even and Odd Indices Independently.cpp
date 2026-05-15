class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> even, odd;
        
        // Separate even and odd index values
        for (int i = 0; i < nums.size(); i++) {
            if (i % 2 == 0) even.push_back(nums[i]);
            else odd.push_back(nums[i]);
        }
        
        // Sort even indices in non-decreasing order
        sort(even.begin(), even.end());
        // Sort odd indices in non-increasing order
        sort(odd.begin(), odd.end(), greater<int>());
        
        // Merge back into nums
        int e = 0, o = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (i % 2 == 0) nums[i] = even[e++];
            else nums[i] = odd[o++];
        }
        
        return nums;
    }
};
