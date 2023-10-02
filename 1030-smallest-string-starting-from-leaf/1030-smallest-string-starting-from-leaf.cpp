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

    void smallest(TreeNode* root, vector<string>& temp, string s){
        if(!root) return;
        if(!root->left && !root->right){
            s.push_back('a'+root->val);
            temp.push_back(s);
            // s.pop_back();
            return;
        }

        s.push_back('a'+root->val);
        smallest(root->left, temp, s);
        smallest(root->right, temp, s);
    }

    string smallestFromLeaf(TreeNode* root) {
        vector<string>temp;
        string s="";
        smallest(root, temp, s);
        for(int i=0;i<temp.size();i++){
            string str=temp[i];
            reverse(str.begin(),str.end());
            temp[i]=str;
        }
        sort(temp.begin(),temp.end());

        return temp[0];
    }
};