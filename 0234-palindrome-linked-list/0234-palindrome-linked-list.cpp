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
    bool isPalindrome(ListNode* head) {
        // if(head==NULL || head->next==NULL) return head;
        // ListNode* dummy=NULL;
        // ListNode* ptr=head;
        // while(ptr!=NULL){
        //     ListNode*temp=new ListNode(ptr->val);
        //     temp->next=dummy;
        //     dummy=temp;
        //     ptr=ptr->next;
        // }
        // ListNode* temp2=dummy;
        // ListNode* temp=dummy;
        // while(temp!=NULL){
        //     cout<<temp->val;
        //     temp=temp->next;
        // }
        // ListNode* temp1=head;
        // temp2=dummy;
        // bool check=true;
        // while(temp1!=NULL && temp2!=NULL){
        //     if(temp1->val != temp2->val){
        //         check=false;
        //         break;
        //     }
        //     temp1=temp1->next;
        //     temp2=temp2->next;
        // }
        // return check;

        if(head==NULL || head->next==NULL) return head;
        stack<int>st;
        ListNode* temp=head;
        while(temp!=NULL){
            st.push(temp->val);
            temp=temp->next;
        }
        temp=head;
        while(!st.empty()){
            int i=st.top();
            st.pop();
            if(i!=temp->val){
                return false;
            }
            temp=temp->next;
        }
        return true;

    }
};