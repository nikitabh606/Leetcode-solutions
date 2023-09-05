/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        map<Node*,Node*>m;
        int i=0;
        Node* temp=head;
        while(temp){
            Node* x=new Node(temp->val);
            m[temp]=x;
            temp=temp->next;
        }
        temp=head;
        while(temp) {
            m[temp]->next=m[temp->next];
            m[temp]->random=m[temp->random];
            temp=temp->next;
        }
        return m[head];
    }
};