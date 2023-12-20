/*Janmansh is at the fruit market to buy fruits for Chingari. There is an infinite supply of three different kinds of fruits with prices A, B and C.
He needs to buy a total of X fruits having at least 2 different kinds of fruits. What is the least amount of money he can spend to buy fruits?*/

#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x, a[3];
	    cin>>x;
	    
	    for (int i=0; i<3; i++) {
	        cin>>a[i];
	    }
	    sort(a, a+3);
	    
	    cout<< (x-1)*a[0] + a[1] <<endl;
	}
	return 0;
}