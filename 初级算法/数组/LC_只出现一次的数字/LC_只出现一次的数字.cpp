class Solution {
	public:
		int singleNumber(vector<int>& nums) {
			int len=nums.size();
			sort(nums.begin(),nums.end());
			stack<int> s;
			for(int i=0; i<len; i++) {
				if(s.size()>0) {
					if(nums[i]==s.top()) {
						s.pop();
					} else {
						s.push(nums[i]);
					}
				}else{
					s.push(nums[i]);
				}

			}
			return s.top();


		}
};


