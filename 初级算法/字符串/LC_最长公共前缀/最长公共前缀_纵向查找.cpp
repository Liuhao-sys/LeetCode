class Solution {
	public:
		string longestCommonPrefix(vector<string>& strs) {
			if(!strs.size()) return "";
			int min_len=100000;
			for(int i=0; i<strs.size(); i++) {
				if(strs[i].length()<min_len) min_len=strs[i].   length();
			}
            int index=0;
			for(; index<min_len;index++) {
				char c=strs[0][index];
				int j=0;
				for(;j<strs.size();j++){
					if(c!=strs[j][index]) break;
				}	
				if(j!=strs.size()) break;
			}
            return strs[0].substr(0,index);
		}
		
};

