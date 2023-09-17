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
    int leftSum=0;
    int sum(TreeNode* root){
        if(root==NULL) return 0;
        // sum(root->right);
        if(root->left !=NULL && root->left->left==NULL && root->left->right==NULL) leftSum+=root->left->val;
        sum(root->left);
        sum(root->right);
        
        return leftSum;
    }

    int sumOfLeftLeaves(TreeNode* root) {
        if(root->left==NULL && root->right==NULL) return 0;
        return sum(root);
    }
};