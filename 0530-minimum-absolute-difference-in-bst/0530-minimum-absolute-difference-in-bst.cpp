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
    int inorder(TreeNode* root, int& prev, int& ans){
            if(!root) return 0;
            inorder(root->left,prev,ans);
            if(prev!=-1) ans=min(ans,abs(root->val-prev));
            prev=root->val;
            
            inorder(root->right,prev,ans);
            return ans;
    }
    int getMinimumDifference(TreeNode* root){
        int prev=-1;
        int ans = INT_MAX;
        return inorder(root, prev, ans);
     
    }
};