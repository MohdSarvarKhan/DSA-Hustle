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
        ListNode* slow = head, *fast = head;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        
        if (fast)
        slow = slow->next;

        // ListNode* curr = slow->next;

        ListNode* prev = NULL , *future = NULL;

        while(slow){
            future = slow->next;
            slow->next = prev;
            prev = slow;
            slow = future;
        }

        while(prev){
            if(head->val != prev->val){
                return false;
                
            }
        
            head = head->next;
            prev = prev->next;
           
           
        }

        return true;
    }
};