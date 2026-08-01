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
        ListNode * temp1 = head1, *temp2 = head2;
        int count1 = 1 , count2 = 1;

        while(temp1){
            temp1 = temp1->next;
            count1++;
        }
        temp1 = head1;

        while(temp2){
            temp2 = temp2->next;
            count2++;
        }
        temp2 = head2;

        if(count1 <= count2){
            int count = count2 - count1;
            while(count){
                temp2 = temp2->next;
                count--;
            }
        }
        else{
            int count = count1 - count2;
            while(count){
                temp1 = temp1->next;
                count--;
            }
        }
        
        while(temp1 != temp2){
            temp1 = temp1->next;
            temp2 = temp2->next;
        }

        if(!temp1 || !temp2)
        return NULL;

        return temp1;
        
    }
};