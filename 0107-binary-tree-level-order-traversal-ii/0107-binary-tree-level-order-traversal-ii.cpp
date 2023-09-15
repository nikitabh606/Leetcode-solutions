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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        stack<vector<int>>st;
        vector<vector<int>>res;
        if(!root) return res;
        queue<TreeNode*>q;
        q.push(root);
        // q.pop();
        while(!q.empty()){
            int size=q.size();
            vector<int>v;
            while(size--){
                TreeNode* curr=q.front();
                q.pop();
                v.push_back(curr->val);
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
            st.push(v);
        }
        int sz=st.size();
        cout<<sz<<"\n";
        for(int i=0;i<sz;i++){
            vector<int>x;
            x=st.top();
            st.pop();
            res.push_back(x);
        }
        return res;
    }
};