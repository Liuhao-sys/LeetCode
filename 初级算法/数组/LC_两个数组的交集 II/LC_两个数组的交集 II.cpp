class Solution {
public:
	
	
	//4 5 6
	//3
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        sort(nums1.begin(),nums1.end()); 
        sort(nums2.begin(),nums2.end());
        vector<int>::iterator it1=nums1.begin();
		vector<int>::iterator it2=nums2.begin();
        while(it1!=nums1.end()&&it2!=nums2.end()){
        	if(*it1<*it2){
        		it1++;
			}else if(*it1>*it2){
				it2++;
			}else{
				res.push_back(*it1);
				it1++;
				it2++; 
			}
		}
		return res; 
		
		
		
        
		

    }
};
