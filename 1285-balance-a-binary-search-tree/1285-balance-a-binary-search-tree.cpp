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

    void inorder(TreeNode* root, vector<TreeNode*>& arr){
        if(root==NULL) return;
        inorder(root->left,arr);
        arr.push_back(root);
        inorder(root->right,arr);
    }

    TreeNode* Fun(vector<TreeNode*>&arr,int start,int end){
        if(start>end) return NULL;
        int mid=start+(end-start)/2;
        TreeNode* node= arr[mid];
        node->left=Fun(arr,start,mid-1);
        node->right=Fun(arr,mid+1,end);
        return node;
    }
    // TreeNode* NewNode(int data){
    //     TreeNode* temp=NULL:
    //     temp->val=data;
    //     temp->left=NULL;
    //     temp->right=NULL;
    //     return temp;
    // }
    TreeNode* balanceBST(TreeNode* root) {
        vector<TreeNode*>arr;
        inorder(root,arr);
        int start=0,end=arr.size()-1;
        return Fun(arr,start,end);
    }
};