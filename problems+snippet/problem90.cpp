/*Chef considers a permutation {1,2,3,…,N} End Sorted if and only if P1=1 and PN=N.
Chef is given a permutation P.In one operation Chef can choose any index (1≤i≤N−1) and swap Pi and Pi+1. 
Determine the minimum number of operations required by Chef to make the permutation P End Sorted.
Note: An array P is said to be a permutation of {1,2,3,…,N} if P contains each element of {1,2,3,…,N} exactly once.*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--) {
	    int n, b, c, d;
	    cin>>n;
	    int a[n];
	    
	    for (int i=0; i<n; i++) {
	        cin>> a[i];
	        
	        if (a[i] == 1 || a[i] == n) {
	            d = a[i];
	            
	            if (a[i] == 1) b = i;
	            else c = n-i-1;
	        }
	    }
	    
	    cout<< (d == n ? b+c : b+c-1) <<endl;
	}
	return 0;
}