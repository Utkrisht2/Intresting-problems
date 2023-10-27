/* Sebestian is a very lazy person. Whatever work is supposed to be finished in x units of time, he finishes it in m∗x units of time.
 But there is always a limit to laziness, so he delays the work by at max d units of time.
 Given x,m,d, find the maximum time taken by Sebestian to complete the work.*/

#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x, m, d;
	    cin>>x>>m>>d;
	    int a=m*x;
	    int b=x+d;
	    cout<<min(a, b)<<endl;
	}
	return 0;
}