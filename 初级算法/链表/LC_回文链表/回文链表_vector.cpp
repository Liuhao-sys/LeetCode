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
		vector<int> n=v;
		reverse(v.begin(),v.end());
		return v==n;
    }
};
