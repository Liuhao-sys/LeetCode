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
    	int flag=1000000;
		while(head){
			if(head->val==flag) return true;
			else  head->val=flag;
			head =head->next; 
		
		} 
		return false;
    }
};
