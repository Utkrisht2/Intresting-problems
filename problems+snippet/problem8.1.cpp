/*You are given three distinct positive integers X,Y, and Z. Your task is to find integers A and B such that:
B is equal to one of the three given numbers;
A is equal to the product of remaining two numbers;
A is divisible by B.
Print A and B which satisfy the given conditions. If no such pair of A and B exists, print −1 instead.*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x, y, z, a, b;
	    cin>>x>>y>>z;
	    if((x*y)%z==0){
	        a=x*y;
	        b=z;
	        cout<<a<<" "<<b<<endl;
	    }
	    else if((x*z)%y==0){
	        a=x*z;
	        b=y;
	        cout<<a<<" "<<b<<endl;
	    }
	    else if((y*z)%x==0){
	        a=y*z;
	        b=x;
	        cout<<a<<" "<<b<<endl;
	    }
	    else
	    cout<<-1<<endl;
	}
	return 0;
}