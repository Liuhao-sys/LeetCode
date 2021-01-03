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
    bool isPalindrome(ListNode* head) {
    	vector<int> v;
		while(head) {
			v.push_back(head->val);
			head=head->next;
		}
		int j=v.size()-1;
		for(int i=0;i<=j;i++){
			if(v[i]!=v[j--]) return false; 
		}
		return true;
    }
};
