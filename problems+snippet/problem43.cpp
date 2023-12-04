/*Vishesh has gone to watch the new Spider-Man movie, but he is having troubles choosing which Popcorn-and-Coke combo to buy.
There are three combos A, B, and C available at the counter. 
You are given the time (in minute) for which each Popcorn bucket and Coke cup lasts. 
Given that Vishesh's satisfaction from a combo is defined as the total lasting time (in minute) of the Popcorn bucket and the Coke cup, 
find the maximum satisfaction he can get by buying a single combo.*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int p1, c1, p2, c2, p3, c3;
	    cin>>p1>>c1>>p2>>c2>>p3>>c3;
	    int a=p1+c1;
	    int b=p2+c2;
	    int c=p3+c3;
	    if(a>=b && a>=c){
	        cout<<a<<endl;
	    }
	    else if(b>=a && b>=c){
	        cout<<b<<endl;
	    }
	    else{
	        cout<<c<<endl;
	    }
	}
	return 0;
}
