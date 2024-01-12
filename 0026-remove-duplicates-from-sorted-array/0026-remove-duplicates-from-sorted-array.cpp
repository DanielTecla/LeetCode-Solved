class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 1) return 1;
        int cont = 1;
        vector<int> new_nums = {nums[0]};

        for(int i = 0, j = 0; i<nums.size(); i++){
            if(new_nums[j] != nums[i]){
                cont++;
                j++;
                new_nums.push_back(nums[i]);
            }
        }
        nums = new_nums;
        return cont;
    }
};