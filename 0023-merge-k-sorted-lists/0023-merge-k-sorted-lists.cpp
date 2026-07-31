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

    ListNode* sortedMerge(ListNode* head1, ListNode* head2) {
    
	if(!head1)
	return head2;

	if(!head2){
		return head1;
	}
	
	ListNode* Head = new ListNode(0);
	ListNode* Tail = Head;


	while(head1&&head2){
		if(head1->val<=head2->val){
           Tail->next = head1;
		   head1 = head1->next;
		   Tail = Tail->next;
		   Tail->next = NULL;
		}
		else{
		   Tail->next = head2;
		   head2 = head2->next;
		   Tail = Tail->next;
		   Tail->next = NULL;
		}
	}


	// ya toh head1 exist karega ya head2 exist karega

	if(!head1){
		Tail->next = head2;
	}
	else{
		Tail->next = head1;
	}


	// Remove the dummy node
	ListNode *Temp = Head;
	Head = Head->next;
	delete Temp;

	return Head;
}


ListNode* merge(vector<ListNode*>& arr, int start, int end){

    if(start==end){
		return arr[start];
	}

	int mid = start+(end-start)/2;

	ListNode* head1 = merge(arr,start,mid);
	ListNode* head2 = merge(arr,mid+1,end);

	return sortedMerge(head1,head2);
}


    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(!lists.size()){
		return NULL;
	}
    return merge(lists,0,lists.size()-1);
    }
};