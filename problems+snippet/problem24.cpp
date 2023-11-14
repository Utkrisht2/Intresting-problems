/*The Child of Prophecy has embarked on a journey to save the land of the Fae.
On her journey, she must ring N Bells of Pilgrimage.
The Child of Prophecy has an initial mana level of P. After that:Each of the first X bells she rings will increase her mana level by 10.
Each of the remaining bells will increase her mana level by 5.
As a bonus, once the final bell is rung, her mana level will increase by a further 20
K bells have been rung so far. What is the current mana level of the Child of Prophecy?*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n, x, k, p;
	    cin>>n>>x>>k>>p;
	        if(k<=x)
	        cout<<p+(k*10)<<endl;
	        else if(k>x && k<n)
	        cout<<p+(10*x)+((k-x)*5)<<endl;
	        else if(k==n)
	        cout<<p+20+(10*x)+((k-x)*5)<<endl;
	}
	return 0;
}