/*To curb the declining literacy in Chefland, the government has come up with a new plan.
You are given an array A of size N denoting the initial count of literate people in each of the N states of Chefland.
The government wants the count of literate people in each state to be at least M.
To do this, the government can combine two or more consecutive states to represent a new state. 
The number of literate people in the new state will be equal to the sum of literate people in the individual consecutive states that were combined to create this new state.

Find the maximum number of states the government can have while maintaining the condition that at least M literate people are present in each state.
Note that it is guaranteed that M is not more than the sum of Ai.*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int count =0, sum=0;
        for(int i=0; i<n; i++){
            sum += a[i];
            if(sum>=m){
                sum=0;
                count++;
            }
        }
        cout<<count<<endl;
    }
}