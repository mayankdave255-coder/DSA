class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int , string>> vp;
        for (int i = 0; i < names.size(); i++) {
            vp.push_back({heights[i], names[i]});
        }
        sort(vp.begin(), vp.end(), [](pair<int, string>& a, pair<int, string>& b) {
            return a.first > b.first;
        });
        names.clear();
        for(auto& i:vp){
            names.push_back(i.second);
        }
        return names;
    }
};