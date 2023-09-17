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
    vector<int>ds;
    void isValid(TreeNode* root) {
        if(root==NULL) return;
        isValidBST(root->left);
        ds.push_back(root->val);
        isValidBST(root->right);
    }

    bool isValidBST(TreeNode* root){
        isValid(root);
        for (int i = 1; i < ds.size(); ++i) {
            if (ds[i] <= ds[i - 1]) {
                return false;
            }
        }
    return true;
    }
};