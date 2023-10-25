/*Satyam visited a grocery store for fresh supplies. There are N items in the store where the ith item has a freshness value Ai
and cost Bi.
Satyam has decided to purchase all the items having a freshness value greater than equal to X. Find the total cost of the groceries Chef buys.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains two space-separated integers N and X — 
the number of items and the minimum freshness value an item should have.
The second line contains 
N space-separated integers, the array A, denoting the freshness value of each item.
The third line contains N space-separated integers, the array B, denoting the cost of each item.*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n, x;
	    cin>>n>>x;
	    int a[n], b[n], i, cost=0;
	    
	    for(i=0; i<n; i++){
	        cin>>a[i];
	    }
	    for(i=0; i<n; i++){
	        cin>>b[i];
	    }
	    for(int i=0; i<n; i++){
	        if(a[i]>=x){
	            cost+=b[i];
	        }
	    }
	    cout<<cost<<endl;
	}
	return 0;
}