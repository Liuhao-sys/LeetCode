class Solution {
public:
    string countAndSay(int n) {
        if(n==1) return "1";
        string s=countAndSay(n-1);
        string res;
        int count;
        char c=s[0];
        for(int i=0;i<=s.length();i++){
            if(c==s[i]) count++;
            else{
                res+=to_string(count);
                res+=c;
                c=s[i];
                count=1;
            }
        }
        return res;
            
    }
};
