class Solution {
	public:
	string longestCommonPrefix(vector<string>& strs) {
		if(strs.size()==0) return "";
		string max_str;
		for(int i=0;i<strs[0].length();i++){
			string str=strs[0].substr(0,i+1);
			int j=1;
			for(;j<strs.size();j++){
				if(i+1<=strs[j].length()){
					if(str!=strs[j].substr(0,i+1)) break;
				}
				else break; 
			}
			if(j==strs.size()) max_str=str;
		}
		return max_str;
	}
};
