// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode(int x) : val(x), next(NULL) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode *detectCycle(ListNode *head) {
//           if(!head||!head->next){
// 		return NULL;
// 	}
        
//         ListNode * slow = head, *fast = head;
        
//         while(fast && fast->next){
//             // prev = slow;
//             slow = slow->next;
//             fast = fast->next->next;
//             if(slow == fast)
//             break;
//         }
        
//       if(!fast || !fast->next){
// 		return NULL;
// 	}
        
//         if(fast == head){
//         // prev->next =NULL;
//         return head;
//         }
        
//         slow = head;
        
//         while(slow->next != fast->next){
//             slow = slow->next;
//             fast = fast->next;
//         }
        
//         // fast->next = NULL;
//         return slow->next;
//     }
// };

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
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        bool isCyclic = false;

        while(fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast) {
                slow = head;

                while(slow != fast) {
                    slow = slow->next;
                    fast = fast->next;
                }

                return slow;
            }
        }

        return NULL;

   

    }
};