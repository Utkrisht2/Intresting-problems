/*Chef has a binary string S of length N. 
Chef can perform the following operation on S:
Insert any character (0 or 1) at any position in S.
Find the minimum number of operations Chef needs to perform so that no two consecutive characters are same in S.*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    string s;
	    cin>>n>>s;
	    int count=0;
	    for(int i=0; i<n; i++){
	        if(s[i]==s[i+1]){
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
