class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int> types(candyType.begin(), candyType.end());
        int uniqueTypes = types.size();
        int maxAllowed = candyType.size() / 2;
        return min(uniqueTypes, maxAllowed);
    }
};
