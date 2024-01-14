/*Chef has 3 bags that she wants to take on a flight. They weigh A, B, and C kgs respectively. 
She wants to check-in exactly two of these bags and carry the remaining one bag with her.
The airline restrictions says that the total sum of the weights of the bags that are checked-in cannot exceed D kgs and the weight of the bag which is carried cannot exceed E kgs. 
Find if Chef can take all the three bags on the flight.*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; 
	cin>>t;
	while(t--){
	    int a, b, c, d, e;
	    cin>>a>>b>>c>>d>>e;
	    
	    int sum1=a+b;
	    int sum2=b+c;
	    int sum3=c+a;
	    if((sum1<=d && c<=e) || (sum2<=d && a<=e) || (sum3<=d && b<=e)){
	        std::cout << "YES" << std::endl;
	    }
	    else{
	        std::cout << "NO" << std::endl;
	    }
	}
	return 0;
}