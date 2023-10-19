class Solution {
public:
    bool solution(int i,int j, int mR,int mC,vector<vector<char>>& board){
        int lr,lc;
        if(i<=2)lr = 2;
        else if(i>2 && i<= 5)lr = 5;
        else lr = 8;
        if(j<=2)lc = 2;
        else if(j>2 && j<= 5)lc = 5;
        else lc = 8;
        for(int k = lr-2; k <= lr; k++){
            for(int w = lc-2; w<=lc; w++){
                if((k!=i || w!=j) && board[k][w]==board[i][j]) return false;
            }
        }
        int v;
        v = lr + 1;
        while(v<mR){
            if(board[v][j] == board[i][j]) return false;
            v++;
        }
        v = lr - 3;
        while(v >= 0){
            if(board[v][j] == board[i][j]) return false;
            v--;
        }
        v = lc + 1;        
        while(v<mR){
            if(board[i][v] == board[i][j]) return false;
            v++;
        }
        v = lc - 3;
        while(v >= 0){
            if(board[i][v] == board[i][j]) return false;
            v--;
        }

        return true;
    }

    bool isValidSudoku(vector<vector<char>>& board) {
        int mC = board.size();
        int mR = board[0].size();
        for(int i=0;i<mR;i++){
            for(int j=0;j<mC;j++){
                if(board[i][j]!='.' && !solution(i,j,mR,mC,board)) return false;
            }   
        }
        return true;
    }
};