/*You have been recently hired as a developer in CodeChef. Your first mission is to implement a feature that will determine the number of submissions that were judged late in a contest.
There are N submissions, numbered 1 through N. For each valid i, the i-th submission was submitted at time Si and judged at time Ji (in minutes). Submitting and judging both take zero time.
Please determine how many submissions received their verdicts after a delay of more than 5 minutes.*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int N, count=0;
	    cin>>N;
	    int s[N], j[N];
	    for(int i=0; i<N; i++){
	        cin>>s[i]>>j[i];
	    }
	    for(int i=0; i<N; i++){
	        if(abs(s[i]-j[i])>5){
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
