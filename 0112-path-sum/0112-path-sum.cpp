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
    bool fun(TreeNode* root,int ts){
        if(root==NULL) return false;
        if(!root->left && !root->right){
            if(ts-root->val==0) return true;
            return false;
        }
        // if(root==NULL && sum!=ts) return false;
        bool x=fun(root->left,ts-root->val);
        bool y=fun(root->right,ts-root->val);
        return x||y;

    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        
        return fun(root, targetSum);
    }
};