class Solution {
	public:
		vector<int> plusOne(vector<int>& digits) {
			int flag=0;
			vector<int> v;
			for(int i=digits.size()-1;i>=0;i--){
				if(i==digits.size()-1) digits[i]++;
				digits[i]+=flag;
				if(digits[i]>9){
					v.push_back(digits[i]-10);
					flag=1;	
				} else{
					v.push_back(digits[i]);
					flag=0;
				}
			}
			if(flag) v.push_back(1);
			reverse(v.begin(),v.end());
			 
		
			return v;
			
				 
		}
};
