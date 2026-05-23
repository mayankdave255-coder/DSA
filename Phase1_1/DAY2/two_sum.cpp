class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> result;
        for (int i = 0; i < nums.size(); i++) {
            result.push_back({nums[i], i});
        }
        sort(result.begin(), result.end());
        int i = 0, j = result.size() - 1;
        while (i < j) {
            if (result[i].first + result[j].first == target) {
                return {result[i].second, result[j].second};
            } else if (result[i].first + result[j].first < target) {
                i++;
            } else {
                j--;
            }
        }
        return {};
    }
};