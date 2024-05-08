class Solution {
public:
    int get_island_area(vector<vector<int>>& grid, int &i, int &j){
        grid[i][j] = 0;
        int row = grid.size();
        int column = grid[0].size();
        int area = 0;

        queue<pair<int,int>> bfs; bfs.push({i,j});
        vector<vector<int>> move = {{1,0},{0,1},{-1,0},{0,-1}};
        
        while(!bfs.empty()){
            pair<int,int> coords = bfs.front();
            bfs.pop();

            for(int i = 0; i < 4; i++){
                int i_ = coords.first + move[i][0];
                int j_ = coords.second + move[i][1];
                if(i_ < row && i_ >= 0 && j_ < column && j_ >= 0){
                    if(grid[i_][j_] == 1){
                        bfs.push({i_,j_});
                        grid[i_][j_] = 0;
                    }
                }
            }

            area += 1;
        }
        return area;
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int maxAns = 0;

        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                if(grid[i][j] == 1) maxAns = max(maxAns, get_island_area(grid,i,j));
            }
        }

        return maxAns;
    }
};