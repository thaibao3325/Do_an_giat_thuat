class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        // Sắp xếp mảng nums
        sort(nums.begin(), nums.end());
        
        vector<int> result;
        // Duyệt qua mảng đã sắp xếp và lưu lại chỉ số có giá trị bằng target
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == target) {
                result.push_back(i);
            }
        }
        return result;
    }
};