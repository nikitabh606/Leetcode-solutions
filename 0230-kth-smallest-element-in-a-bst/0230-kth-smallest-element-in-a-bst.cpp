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

    void inorder(TreeNode* root,vector<int>&arr){
        if(root==NULL) return;
        inorder(root->left,arr);
        // int temp=root->val;
        arr.push_back(root->val);
        inorder(root->right,arr);

    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int>arr;
        inorder(root,arr);
        // priority_queue<int, vector<int>, greater<int>>pq ;
        // int n=pq.size();
        // for(int i=0;i<n;i++){
        //     pq.push(arr[i]);
        // }
        // int f=k-1 ;
        // while(f>0) {
        //     pq.pop();
        //     f--;
        // }
        // return pq.top();


        return arr[k-1];
    }
};