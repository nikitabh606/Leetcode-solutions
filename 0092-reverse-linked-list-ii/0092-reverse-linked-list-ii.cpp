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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
     ListNode* New= new ListNode(-1);
     ListNode* prev = New;
     New->next = head;
            for(int i=0;i<left-1;i++){
                prev=prev->next;
            }
            ListNode* curr = prev->next;
            for (int i = 0; i < right - left; i++) {
                ListNode* ptr = prev->next;
                prev->next = curr->next;
                curr->next = curr->next->next;
                prev->next->next = ptr;
            }
        return New->next;
    }
};