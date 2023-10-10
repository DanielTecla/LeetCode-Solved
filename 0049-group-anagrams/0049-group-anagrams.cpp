class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mapWrd;
        int count;
        for(auto w: strs){
            string s = w;
            sort(s.begin(),s.end());
            mapWrd[s].push_back(w);
        }
        vector<vector<string>> result;
        for(auto element: mapWrd){
            result.push_back(element.second);
        }
        return result;
    }
};