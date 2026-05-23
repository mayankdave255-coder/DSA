class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if (intervals.empty()) {
            return {};
        }
        vector<pair<int, int>> merged;
        for (auto& i : intervals) {
            merged.push_back({i[0], i[1]});
        }
        sort(merged.begin(), merged.end());
        vector<pair<int, int>> result;
        result.push_back(merged[0]);
        for (int i = 1; i < merged.size(); i++) {
            if (merged[i].first <= result.back().second) {
                result.back().second =
                    max(result.back().second, merged[i].second);
            } else {
                result.push_back(merged[i]);
            }
        }
        vector<vector<int>> final;
        for (auto& i : result) {
            final.push_back({i.first, i.second});
        }
        return final;
    }
};