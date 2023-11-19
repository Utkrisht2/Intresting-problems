/*Chef has N slippers, L of which are left slippers and the rest are right slippers. 
Slippers must always be sold in pairs, where each pair contains one left and one right slipper. 
If each pair of slippers cost X rupees, what is the maximum amount of rupees that Chef can get for these slippers?*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n, l, x;
	    cin>>n>>l>>x;
	    int a=n-l;
	    if(l>=a){
	        cout<<a*x<<endl;
	    }
	    else{
	        cout<<l*x<<endl;
	    }
	}
	return 0;
}
