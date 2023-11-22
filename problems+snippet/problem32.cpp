/*There is an ATM machine. Initially, it contains a total of K units of money. 
N people (numbered 1 through N) want to withdraw money; for each valid i, the i-th person wants to withdraw Ai units of money.
The people come in and try to withdraw money one by one, in the increasing order of their indices. 
Whenever someone tries to withdraw money, if the machine has at least the required amount of money, 
it will give out the required amount. Otherwise, it will throw an error and not give out anything; in that case, 
this person will return home directly without trying to do anything else.
For each person, determine whether they will get the required amount of money or not.*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n, k;
	    cin>>n>>k;
	    int a[n];
	    for(int i=0; i<n; i++){
	        cin>>a[i];
	    }
	    for(int i=0; i<n; i++){
	        if(k>=a[i]){
	            cout<<1;
	            k=k-a[i];
	        }
	        else{
	            cout<<0;
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
