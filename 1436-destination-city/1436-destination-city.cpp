class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        set<string> visit;
        unordered_map<string,string> connection;
        string location = paths[0][0];
        
        if(paths.size() == 1) return paths[0][1];
        for(auto &item: paths)
            connection.insert({item[0],item[1]});
        while(visit.count(location)<1 && connection.count(location)>0){
            visit.insert(location);
            location = connection[location];
        }
        
        return location;
    }

};