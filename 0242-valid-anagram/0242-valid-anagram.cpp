class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map <char,vector<int>> anagram;
        for(int i=0;i<s.size();i++){
            if(anagram.count(s[i])>0)
                anagram[s[i]][0]++;
            else{
                anagram[s[i]].push_back(1);
                anagram[s[i]].push_back(0);
            }
        }
        for(int j=0;j<t.size();j++){
            if(anagram.count(t[j])>0)
                anagram[t[j]][1]++;
            else
                return false;
        }

        for(const auto& pt: anagram){
            int v1 = pt.second[0];
            int v2 = pt.second[1];
            if(v1 != v2)
                return false;
        }
        return true;
    }
};