/*Chef has 2 numbers A and B (A<B).Chef will perform some operations on A.
In the ith operation:
Chef will add 1 to A if i is odd.
Chef will add 2 to A if i is even.
Chef can stop at any instant. Can Chef make 
A equal to B?*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a, b;
	    cin>>a>>b;
	     int c= b-a;
	    if(c%3==2) cout<<"no"<<endl;
	    else cout<<"yes"<<endl;
	}
	return 0;
}