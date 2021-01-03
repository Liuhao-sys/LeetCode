class Solution {
public:
    int myAtoi(string s) {
    	long long count=0;
    	int curr=0,isPos=0;
    	while(s[curr]==' '){
    		curr++; 
		}
		if(!isdigit(s[curr])&&s[curr]!='+'&&s[curr]!='-'){
			return 0;
		}
		if(s[curr]=='+'||s[curr]=='-'){
			if(!isdigit(s[curr+1])) return 0;
			else curr++; 
		}
		
		while(isdigit(s[curr])){
			
			count=count*10+(s[curr]-'0');
			if(count>INT_MAX&&isPos) return INT_MIN;
			if(count>INT_MAX&&!isPos) return INT_MAX;
			curr++;
		}
		
		return isPos==1 ? -count:count;
    	
            
			




    }
};


#include <iostream>
#include <string> 
using namespace std;


int main(){
	string s="42";
	int count=0;
    	int curr=0,isPos=0;
    	while(s[curr]==' '){
    		curr++; 
		}
		if(!(s[curr]=='-'||isdigit(s[curr]))){
			return 0;
		}
		if(s[curr]=='-'){
			isPos=1; 
		}
		while(isdigit(s[curr])){
		
			count=count*10+(s[curr]-'0');
		
		}
		if(isPos) cout<< -count; 
		cout<< count;
	
}
 
