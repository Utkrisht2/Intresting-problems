/*You have N balls and K boxes. You want to divide the N balls into K boxes such that:
Each box contains ≥1 balls.No two boxes contain the same number of balls.
Determine if it is possible to do so.*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int N, K;
	    cin>>N>>K;
	    K=K*(K+1)/2;
	    if(N>=K)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
