class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        //Made by @TonyRusher Codeforces
        vector<string> board(n, string(n,'.') );
        vector<vector<string>> ans;
        
        vector<int> col(n,0), up(2 * n, 0), down(2 * n, 0);
        solve(0,0, col, up, down, ans, board, n);
        
        return ans;
    }

    void solve(int i, int k, vector<int> &col, vector<int> &up, vector<int> &down, vector<vector<string>> &ans, vector<string> &board, int &n){
        if(k == n){
            ans.push_back(board);
        }
        if(i == n ) return;

        for(int j = 0; j < n; j++){
            if(!col[j] && !up[i+j] && !down[i-j+ n -1]){
                col[j] = 1; up[i+j] = 1; down[i-j + n - 1] = 1;
                board[i][j] = 'Q';
                solve(i+1, k+1, col, up, down, ans, board, n);
                col[j] = 0; up[i+j] = 0; down[i-j + n - 1] = 0;
                board[i][j] = '.';
            }
        }

    }


};