class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int leftP = 0;
        int counter = 0;
        for(int rightP = 1; rightP < neededTime.size(); rightP++){
            if(colors[leftP] == colors[rightP]){
                if(neededTime[leftP] > neededTime[rightP]) counter += neededTime[rightP]; 
                else{
                    counter += neededTime[leftP];
                    leftP = rightP;
                }
            }else leftP = rightP;
        }
        return counter;
    }
};