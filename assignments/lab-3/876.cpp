class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int n=0;
        ListNode* slow=head;
        ListNode* fast=head; 
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
};