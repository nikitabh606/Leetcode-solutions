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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*>arr(k,NULL);
        ListNode* temp=head;
        int n=0;
        while(temp){
            n++;
            temp=temp->next;
        }
        int eachBucket=n/k;
        int remNodes=n%k;
        temp=head;
        ListNode* prev=NULL;
        for(int i=0;i<k;i++){
            arr[i]=temp;
            for(int j=1;j<=eachBucket+(remNodes>0?1:0);j++){
                prev=temp;
                temp=temp->next;
            }
            if(prev!=NULL) prev->next=NULL;
            remNodes--;
        }
        return arr;
    }
};