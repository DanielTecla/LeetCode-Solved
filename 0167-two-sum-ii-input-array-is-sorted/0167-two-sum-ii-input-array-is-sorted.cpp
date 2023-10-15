class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int p2 = numbers.size() - 1;
        int sum;
        for(int p1=0;p1<p2;){
            sum = numbers[p1]+numbers[p2];
            if(sum == target){
                return {p1+1,p2+1};
            }else if(sum>target)
                p2--;
            else
                p1++;
        }
        return {};
    }
};