class Solution {
	public:
		string longestCommonPrefix(vector<string>& strs) {
			if(strs.size()==0) return "";
			string max_str=strs[0];
			for(int i=1;i<strs.size();i++){
				max_str=longest(max_str,s[i]);
			}
			return max_str;
			
			

		}
		string longest(const string& s1,const string& s2) {
			string minstr=s1.length()<s2.length()?s1:s2;
			int index=0;
			while(index<minstr.length()&&s1[index]==s2[index])
				index++;
			return minstr.substr(0,index);

		}
};
