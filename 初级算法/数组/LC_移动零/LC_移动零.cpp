class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       vector<int>::iterator it=nums.begin();
       int count0=0;
	   while(it!=nums.end())
	   {
	   	if(!*it){
	   			it=nums.erase(it);
	   			count0++;
		   }
	   }
	   while(count0--){
	   	nums.push_back(0);
	   }

    }
};
