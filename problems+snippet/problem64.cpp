/*In Byteland they have a very strange monetary system.
Each Bytelandian gold coin has an integer number written on it. 
A coin n can be exchanged in a bank into three coins: n/2, n/3 and n/4. But these numbers are all rounded down (the banks have to make a profit).
You can also sell Bytelandian coins for American dollars. The exchange rate is 1:1. But you can not buy Bytelandian coins.
You have one gold coin. What is the maximum amount of American dollars you can get for it?*/

#include <iostream>
using namespace std;

long solve(long n)
 {
    if(n>=12)
    return solve(n/2) + solve(n/3)+ solve( n/4);
    else
    return n;
    
}
int main() {
     long n; 
     while(cin>>n)
     cout<<solve(n)<<endl;
	
	return 0;
}