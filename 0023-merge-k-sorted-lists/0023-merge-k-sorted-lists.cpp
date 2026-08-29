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

    struct compare{
        bool operator()(ListNode* first , ListNode* second){
            return first->val > second->val;
        }
    };


    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*,vector<ListNode*>,compare>pq;
        int k = lists.size(); 
        for(int i = 0; i < k; i++){
            if(lists[i])pq.push(lists[i]);
        }

   ListNode* dummy = new ListNode(0);
    ListNode* tail = dummy;

        while(!pq.empty()){
            
            ListNode* curr = pq.top();
            pq.pop();

            tail->next = curr;
            curr = curr->next;
            tail = tail->next;
            if(curr){
            pq.push(curr);
        }
    

        }

        return dummy->next;
    }
};