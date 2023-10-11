class Solution {
public:

    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mapa;
        for(auto n: nums){
            if(mapa.count(n)>0)
                mapa[n]++;
            else{
                mapa[n] = 1;
            }
        }

        map<int,vector<int>> o_map;
        for(auto &val: mapa){
            o_map[val.second].push_back(val.first);
        }

        vector<int> topK;
        int s;
        for(auto it = o_map.rbegin();k>0;it++){
            s = (it->second).size();
            int j = 0;
            while(j<s && k>0){
                topK.push_back((it->second)[j]);
                j++;
                k--;
            }
        }
        
        return topK;
    }
};