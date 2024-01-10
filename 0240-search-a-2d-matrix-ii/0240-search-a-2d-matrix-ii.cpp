class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for (int i = 0; i < matrix.size(); i++) {            
            //Binary search
            int k = 0, j = matrix[0].size() - 1;
            int mid;
            while(k <= j){
                mid = k + j;
                mid/= 2;
                if(matrix[i][mid] == target) return true;
                if(target > matrix[i][mid]) k = mid + 1;
                else j = mid - 1;
            }
        }

        return false;
    }
};