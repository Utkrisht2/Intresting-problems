/*For encoding an even-length binary string into a sequence of A, T, C, and G, 
we iterate from left to right and replace the characters as follows:

00 is replaced with A
01 is replaced with T
10 is replaced with C
11 is replaced with G*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s, S;
	    cin>>s;
	    for(int i=1; i<=n; i+=2){
	         if(s[i-1]=='0' && s[i]=='0'){
	            S=S+"A";
	        }else if(s[i-1]=='0' && s[i]=='1'){
	            S=S+"T";
	        }else if(s[i-1]=='1' && s[i]=='0'){
	            S=S+"C";
	        }else if(s[i-1]=='1' && s[i]=='1'){
	            S=S+"G";
	        }
	         
	    }
	       cout<<S<<endl;
	}
	return 0;
}