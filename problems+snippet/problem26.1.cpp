/*Alice and Bob recently got into running, and decided to compare how much they ran on different days.
They each ran for N days — on the ith day, Alice ran Ai meters and Bob ran Bi meters.
On each day,Alice is unhappy if Bob ran strictly more than twice her distance, and happy otherwise.
Similarly, Bob is unhappy if Alice ran strictly more than twice his distance, and happy otherwise.
For example, on a given day
If Alice ran 200 meters and Bob ran 500, Alice would be unhappy but Bob would be happy.
If Alice ran 500 meters and Bob ran 240, Alice would be happy and Bob would be unhappy.
If Alice ran 300 meters and Bob ran 500, both Alice and Bob would be happy.
On how many of the N days were both Alice and Bob happy?*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n, count=0;
	    cin>>n;
	    int a[n], b[n];
	    for(int i=0; i<n; i++){
	        cin>>a[i];
	    }
	     for(int i=0; i<n; i++){
	         cin>>b[i];
	     }
	    for(int i=0; i<n; i++){
	         if(a[i]<=2*b[i] && b[i]<=2*a[i]) 
	         count++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}