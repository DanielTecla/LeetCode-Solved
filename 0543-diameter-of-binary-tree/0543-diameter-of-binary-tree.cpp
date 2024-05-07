/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> getDiameter(TreeNode* root){
        if(root == nullptr) return {0 , 0};
        vector<int> largestDiameter;

        vector<int> leftDiameter = getDiameter(root->left);
        vector<int> rightDiameter = getDiameter(root->right);

        int maxSum = leftDiameter[1] + rightDiameter[1];
        maxSum = max(maxSum,leftDiameter[0]);
        largestDiameter.push_back(max(maxSum,rightDiameter[0]));
        
        largestDiameter.push_back(max(leftDiameter[1],rightDiameter[1]) + 1);

        return largestDiameter;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        if(root->right == nullptr && root->left == nullptr) return 0;
        vector<int> ans = getDiameter(root);
        return ans[0];
    }
};


/** 
We want the most large part form the three.

so we need to consider two cases.

- The sum of right and left.
- The most large path 

**/