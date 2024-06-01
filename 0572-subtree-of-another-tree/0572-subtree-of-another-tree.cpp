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

    bool equalElements(TreeNode* root, TreeNode* subRoot){
        if(root == nullptr && subRoot == nullptr) return true;
        if(root == nullptr && subRoot != nullptr) return false;
        if(root != nullptr && subRoot == nullptr) return false;

        if(root->val != subRoot->val) return false;
        // cout<<root->val<<" and "<<subRoot->val<<endl;
        bool right = equalElements(root->right,subRoot->right);
        bool left = equalElements(root->left,subRoot->left);

        if(right == false || left == false) return false;
        
        return true;       
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        stack<TreeNode *> nodeStack;
        nodeStack.push(root);
        
        while(!nodeStack.empty()){
            TreeNode* temp = nodeStack.top();
            nodeStack.pop();
            bool ans;

            if(temp != nullptr){
                nodeStack.push(temp->right);
                nodeStack.push(temp->left);
                
                if(temp->val == subRoot -> val){
                    ans = equalElements(temp,subRoot);
                    if(ans) return true;
                } 
            }
            
        }

        return false;
    }
};