class Solution {
	public:
		vector<int> plusOne(vector<int>& digits) {
			long long p=1,res=0;
			int len=digits.size();
			for(int i=len-1; i>=0; i--) {
				res+=digits[i]*p;
				p*=10;
			}
			long long res_=++res,d=0;
			while(res_>0) {
				res_/=10;
				d++;
			}
			d=(d<len?len:d);
			int newD[d];
			for(int i= d-1; i>=0; i--) {
				newD[i]=res%10;
				res/=10;
			}
			vector<int> vc(newD,newD+d);
			return vc;
		}
};
