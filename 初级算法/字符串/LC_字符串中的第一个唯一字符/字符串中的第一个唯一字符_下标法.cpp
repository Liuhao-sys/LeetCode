//class Solution {
//	public:
//		int firstUniqChar(string s) {
//			int cnt[26]= {0};
//			for(char c:s){
//				++cnt[c-'a'];
//			} 
//			for(int i=0;i<s.length();i++)
//				if(cnt[s[i]-'a']==1) return i;
//			return -1; 
//		}
//};

//test
#include <iostream>
#include <string> 
using namespace std;
int main() {
	string s="OP";
		for(int i=0; i<s.length(); i++) {
				s[i]=tolower(s[i]);
			}
			int curr=0,after=s.length()-1;
			while(curr<after) {
				while(!isalnum(s[curr])&&curr<after) curr++;
				while(!isalnum(s[after])&&after>curr) after--;
				cout<<"hello";
				if(s[curr]!=s[after]){
					cout<<s[curr]<<" "<<s[after]<<endl;
					return false;
				} 
				cout<<"nihao";
				curr++;
				after--;
			}
			cout<<true;

}




