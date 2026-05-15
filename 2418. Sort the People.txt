class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = names.size();
        vector<pair<int,string>> people;
        
        // Pair height with name
        for (int i = 0; i < n; i++) {
            people.push_back({heights[i], names[i]});
        }
        
        // Sort by height descending
        sort(people.begin(), people.end(), [](auto &a, auto &b) {
            return a.first > b.first;
        });
        
        // Extract names
        vector<string> result;
        for (auto &p : people) {
            result.push_back(p.second);
        }
        
        return result;
    }
};
