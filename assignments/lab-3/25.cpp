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
    int get_length(ListNode* head){
        if(!head){
            return 0;
        }
        int len=0;
        while(head){
            len++;
            head=head->next;
        }
        return len;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* curr=head,*prev=NULL,*next;
        int len=get_length(head);
        if(len<k || !head){
            return head;
        }
        int n=k;
        while(curr && n--){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        if(head){
            head->next=reverseKGroup(next,k);
        }
        return prev;
    }
};