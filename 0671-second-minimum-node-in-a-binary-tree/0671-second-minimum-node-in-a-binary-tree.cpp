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
    int minval(TreeNode* node,int &value){

        if(node == NULL) return -1;
        if(node->val != value) return node->val;
        int left = minval(node->left,value), right = minval(node->right,value);
        
        if(left == -1) return right;
        if(right == -1) return left;
        return min(left,right);
    }

    int findSecondMinimumValue(TreeNode* root) {
        int last = minval(root,root->val);
        return last;
    }
};