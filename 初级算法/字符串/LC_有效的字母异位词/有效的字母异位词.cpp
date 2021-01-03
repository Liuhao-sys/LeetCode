class Solution {
public:
    bool isAnagram(string s, string t) {
		int cnt_s[26]={0};
		int cnt_t[26]={0};
		for(char temp:s){
			cnt_s[temp-'a']++;
		}
		for(char temp:t){
			cnt_t[temp-'a']++;
		}
		return isSame(cnt_s,cnt_t);
    }
    bool isSame(int a[],int b[]){
		for(int i=0;i<26;i++){
			if(a[i]!=b[i]) return false;
		}
		return true;	
	} 
};
