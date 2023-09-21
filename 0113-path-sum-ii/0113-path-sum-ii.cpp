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
    vector<vector<int>> ans;
    void dfs(TreeNode* root,int ts,vector<int> v){
        if(!root) return;
        if(!root->left && !root->right){
            if(ts-root->val==0){
                v.push_back(root->val);
                ans.push_back(v);
            }
        }
        v.push_back(root->val);
        dfs(root->left,ts-root->val,v);
        
        dfs(root->right,ts-root->val,v);
        v.push_back(root->val);
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int>v;
        dfs(root,targetSum,v);
        return ans;
    }
};