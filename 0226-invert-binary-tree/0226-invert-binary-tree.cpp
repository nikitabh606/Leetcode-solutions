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
    // vector<int>ans;
    // void bfs(TreeNode* root){
    //     queue<TreeNode*>q;
    //     q.push(root);
    //     while(!q.empty()){
    //         int size=q.size();
    //         vector<int>v;
    //         while(size--){
    //             TreeNode* curr=q.front();
    //             q.pop();
    //             q.push(curr->left);
    //             q.push(curr->right);
    //             v.push_back(curr->val);
    //         }
    //         ans.push_back(v);
    //     }
    // }
    TreeNode* invertTree(TreeNode* root) {
        if(!root) return NULL;
        TreeNode* temp=root->right;
        root->right=root->left;
        root->left=temp;
        invertTree(root->left);
        invertTree(root->right);
        return root;
    }
};