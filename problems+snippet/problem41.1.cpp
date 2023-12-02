/*In Chefland, there are N houses numbered from 1 to N, ith house has a defence system having strength Ai.
Chef suspects a bomb drop on one of the houses very soon. A bomb with attack strength X can destroy the ith house, 
if the defence system of the ith house Ai, is strictly less than X.
Also, when the ith house is destroyed due to the bomb, all houses with indices j such that 1≤j<i get destroyed as well irrespective of their defence system.
Given one bomb with attack strength X, find the maximum number of houses that can get destroyed.*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int N, X;
	    cin>>N>>X;
	    int a[N], count=0;
	    for(int i=0; i<N; i++){
	        cin>>a[i];
	    }
	    for(int i=N-1; i>=0; i--){
	        if(a[i]<X){
	            count++;
	            cout<<i+1<<endl;
	            break;
	        }
	    }
	    if(count==0){
	    cout<<0<<endl;
	    }
	}
	return 0;
}
