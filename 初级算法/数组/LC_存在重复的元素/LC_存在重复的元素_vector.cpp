class Solution {
	public:
		bool containsDuplicate(vector<int>& nums) {
			vector<int> flag; 
			for(int i=0;i<nums.size();i++){
				if(find(flag.begin(),flag.end(),nums[i])==flag.end()){
					flag.push_back(nums[i]); 
				}else return true;
			} 
			return false; 


		}
};
