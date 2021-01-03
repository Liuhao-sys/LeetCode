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
    bool hasCycle(ListNode *head) {
		ListNode *prev=head,after=head->after;
		while(after){
			if(after=prev) return true;
			if(after->next)
			after=after->next->next;
			esle return false;
			prev=prev->next;
		}
		return false; 
    }
};
