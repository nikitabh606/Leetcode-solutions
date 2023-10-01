/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int pairSum(ListNode* head) {
        int ans= INT_MIN;
        ListNode *t= head;
        vector<int> v;
        while(t!=NULL){
            v.push_back(t->val);
            t= t->next;
        }
        for(auto it: v) cout<<it<< " ";
        int  i= 0; int j= v.size()-1;
        while(i<j){
            int s= v[i]+v[v.size()-i-1];
            ans= max(s, ans);
            i++; j--;
        }
        return ans;
    }
};