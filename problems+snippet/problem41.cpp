/*Bob and Alice are having a lockout match between them. There are three problems in the contest worth A, B, and C points respectively. 
Only the first player to solve a problem gets points for that problem. It is impossible for Bob and Alice to solve a problem at the same time. 
Chef wants to know if there is any chance of a draw if Bob and Alice manage to solve all 3 problems. 
A draw occurs when both players end with equal number of points.*/

#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	     int a[3];
        for (int i = 0; i < 3; i++) {
            cin>>a[i];
        }
        sort(a,a+3);
        if(a[2]==a[0]+a[1])
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
	}
	return 0;
}