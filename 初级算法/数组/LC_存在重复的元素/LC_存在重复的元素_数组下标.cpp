class Solution {
	public:
		bool containsDuplicate(vector<int>& nums) {
			int pflag[1200000006]= {0};
			int nflag[1200000006]= {0};
			for(int i=0; i<nums.size(); i++) {
				if(nums[i]<0) {
					if(!nflag[-nums[i]]) nflag[-nums[i]]=1;
					else return  true;
				} else {
					if(!pflag[nums[i]]) pflag[nums[i]]=1;
					else return  true;
				}

			}
			return false;





		}
};

