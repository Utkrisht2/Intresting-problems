/*An array A of length N consisting of 1 and −1 only.
In one operation, Chef can choose any index i (1≤i≤N) and multiply the element A by −1.
Find the minimum number of operations required to make the sum of the array equal to 0. 
Output -1 if the sum of the array cannot be made 0.*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n], sum=0;
	    for(int i=0; i<n; i++){
	        cin>>a[i];
	        sum=sum+a[i];
	    }
	    if(n%2==0){
	        cout<<abs(sum/2)<<endl;
	    }
	    else
	    cout<<-1<<endl;
	}
	return 0;
}
