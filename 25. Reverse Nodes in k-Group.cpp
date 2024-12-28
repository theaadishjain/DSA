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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL){
            return NULL;
        }
        ListNode*current=head;
        ListNode*prev=NULL;
        ListNode*next=NULL;
        int count=0;

        ListNode* temp = head;
        for (int i = 0; i < k; i++) {
            if (!temp) return head; 
            temp = temp->next;
        }

        while(current!=NULL && count<k){
            next=current->next;
            current->next=prev;
            prev=current;
            current=next;
            count++;
        }
        if (next != NULL) {
            head->next = reverseKGroup(next, k);
        }
        return prev;
        }
    
};