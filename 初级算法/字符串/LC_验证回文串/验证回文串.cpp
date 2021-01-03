class Solution {
	public:
		bool isPalindrome(string s) {
			for(int i=0; i<s.length(); i++) {
				s[i]=tolower(s[i]);
			}
			int curr=0,after=s.length()-1;
			while(curr<after) {
				while(!isalnum(s[curr])&&curr<after) curr++;
				while(!isalnum(s[after])&&after>curr) after--;
				if(s[curr]!=s[after]) return false;
				curr++;
				after--;
			}
			return true;

		}
		
		
		
};
