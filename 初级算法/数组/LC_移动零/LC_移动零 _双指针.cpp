class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    	int right=0,left=0;
    	while(right<nums.size()){
    		if(nums[right]){
    			swap(nums[left],nums[right]);
    			left++;
			}
			right++;
		}
    }
};
