class Solution {
public:
    int closetTarget(vector<string>& words, string target, int startIndex) {
        int sizeW = words.size();
        int moves;
        for(moves = 0;  moves*2 <= sizeW ; moves++){
            if(words[(startIndex + moves)%sizeW] == target) return moves;
            if(words[(startIndex - moves + sizeW)%sizeW] == target) return moves;
        }
        return -1;
    }
};