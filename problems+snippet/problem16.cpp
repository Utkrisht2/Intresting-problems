/*A bulb company claims that the average lifetime of its bulbs is at least X units.
The company ran a test on N bulbs. You are given the lifetime of N−1 of these bulbs.
What is the minimum non-negative integer value of lifetime the remaining bulb can have, such that the claim of the company holds true?*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--) {
	    int n, x, sum=0, c;
	    cin>>n>>x;
	    
	    for (int i=0; i<n-1; i++) {
	        int a;
	        cin>>a;
	        sum += a;
	    }
	    c = n*x - sum;
	    
	    cout<<(c<0 ? 0 : c)<<endl;
	}
	return 0;
}
