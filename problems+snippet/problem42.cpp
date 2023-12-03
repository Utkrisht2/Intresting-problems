/*You won’t get caught if you hide behind someone.”
Sang-Woo advises Gi-Hun to hide behind someone to avoid getting shot.
Gi-Hun follows Sang-Woo's advice and hides behind Ali, who saved his life earlier. Gi-Hun and Ali both have the same height, K. 
Many players saw this trick and also started hiding behind Ali.
Now, there are N players standing between Gi-Hun and Ali in a straight line, with the ith player having height Hi. 
Gi-Hun wants to know the minimum number of players who need to get shot so that Ali is visible in his line of sight.*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n, k;
	    cin>>n>>k;
	    int a[n], count=0;
	    for(int i=0; i<n; i++){
	        cin>>a[i];
	    }
	    for(int i=0; i<n; i++){
	        if(a[i]>k){
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
