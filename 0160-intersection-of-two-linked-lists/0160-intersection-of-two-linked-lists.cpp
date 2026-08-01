/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *head1, ListNode *head2) {
        ListNode * slow = head1, *fast = head1, *curr = head1;

        while(curr->next){
            curr = curr->next;
        }

        curr->next = head2;

        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast){
                break;
            }
        }
        if(!fast || !fast->next){
            curr->next = NULL;
            return NULL;
        }
        

        slow = head1;

        while(slow != fast){
            slow = slow->next;
            fast = fast->next;
        }

        curr->next = NULL;
        return fast;
    }
};