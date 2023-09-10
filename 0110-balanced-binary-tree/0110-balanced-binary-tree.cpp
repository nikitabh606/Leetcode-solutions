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
    int leftHeight(TreeNode* root){
        if(root==NULL) return 0;
        int left=leftHeight(root->left);
        int right=leftHeight(root->right);
        return 1+max(left,right);

    }
    int rightHeight(TreeNode* root){
        if(root==NULL) return 0;
        int left=rightHeight(root->left);
        int right=rightHeight(root->right);
        return 1+max(left,right);

    }

    bool isBalanced(TreeNode* root) {
        if(root==NULL) return true;
        int lh=leftHeight(root->left);
        int rh=rightHeight(root->right);
        if(abs(lh-rh)>1) return false;

        bool left=isBalanced(root->left);
        bool right=isBalanced(root->right);
        if(!left|| !right) return false;
        return true;
    }
};