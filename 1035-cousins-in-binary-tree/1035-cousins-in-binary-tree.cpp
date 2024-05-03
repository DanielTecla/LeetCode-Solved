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
    
    int getDifference(TreeNode* root, int x, int y, int depth){
        if(root == nullptr) return 0;
        if(x == root->val || y == root->val) return 1;

        int left = getDifference(root->left, x, y, depth);
        int right = getDifference(root->right, x, y, depth);



        if(left != 0 && right != 0){
            if(left == right && left != 1) return 101;
            else return -1;
        }else if(left > 0) return left + 1;
        else if(right > 0) return right + 1;

        return right > left ? left : right;
    }

    bool isCousins(TreeNode* root, int x, int y) {
        return getDifference(root,x,y,0) > 100 ? true : false;
    }
};