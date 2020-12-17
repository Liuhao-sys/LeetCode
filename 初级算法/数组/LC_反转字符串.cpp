#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    if(nums.size()==0) return 0;
    vector<int>::iterator  before=nums.begin();
 	vector<int>::iterator  after=nums.begin()+1;

    while(after!=nums.end()){
    	if(*before==*after){
    		before=nums.erase(before);
    		after=before+1; 
		}else{
			before++;
			after++;
		}
	}	
	return nums.size();
};

