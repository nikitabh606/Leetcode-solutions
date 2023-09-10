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
    int sum(TreeNode* root,int& maxSum){
        if(root==NULL) return 0;
        int lsum=max(0,sum(root->left,maxSum));
        int rsum=max(0,sum(root->right,maxSum));
        maxSum=max(maxSum,lsum+rsum+root->val);
        // int left=sum(root->left,maxSum);
        // int right=sum(root->right,maxSum);
        return (root->val)+max(lsum,rsum);
    }
    int maxPathSum(TreeNode* root) {
        int maxSum=INT_MIN;
        sum(root,maxSum);
        return maxSum;
    }
};