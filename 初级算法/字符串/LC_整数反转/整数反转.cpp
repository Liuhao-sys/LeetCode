class Solution {
	public:
		int reverse(int x) {
			if(x==INT_MIN) return 0;
			int neg=x<0?-1:1;
			x*=neg;
			long long ret=0;
			while(x){
                ret=ret*10+x%10;
                if(ret>INT_MAX) return 0;
                x/=10;
			}
			return neg*ret;
					 

		}
};
