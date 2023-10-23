class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        multiset<int> mst;
        vector<int> ans;
        for(int i = 0; i < k; i++){
            mst.insert(nums[i]);
        }
        for(int l = 0, r = k - 1; r < nums.size();l++, r++){
            ans.push_back(*mst.rbegin());
            mst.erase(mst.find(nums[l]));
            // Incorrecto: mst.erase(nums[l]);

            if(r + 1 < nums.size()) mst.insert(nums[r + 1]);
        }

        return ans;
    }
};