/*Shubman Gill is playing an international match.
He played a total of N balls, where, in the ith ball, he scored Ai runs.
The strike rate of a player is calculated as : (no. of runs/no. of balls played)*100
Preet, a math enthusiast, is currently watching the match. Help him find the number of times, Shubman's strike rate became exactly 100.*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int N,sum=0,count=0;
	    cin>>N;
	    int A[N];
	    for(int i=0;i<N;i++){
	        cin>>A[i];
	        
	    }
	    for(int i=0;i<N;i++){
	        sum=sum+A[i];
	        if(sum==(i+1)){
	            count++;
	        }
	        
	    }
	    cout<<count<<endl;
	    
	}
	return 0;
}