/*N candidates (numbered from 1 to N) join Chef's firm. The first 5 candidates join on the first day, and then, on every subsequent day, 
the next 5 candidates join in.For example, if there are 12 candidates, candidates numbered 1 to 5 will join on day 1, 
candidates numbered 6 to 10 on day 2 and the remaining 2 candidates will join on day 3.
Candidate numbered K decided to turn down his offer and thus, Chef adjusts the position by shifting up all the higher numbered candidates. 
This leads to a change in the joining day of some of the candidates.
Help Chef determine the number of candidates who will join on a different day than expected.*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n, k, a, b;
	    cin>>n>>k;
	    if(n%5==0){
	         a=n/5;
	    }
	    else{
	        a=(n/5)+1;
	    }
	    if(k%5==0){
	        b=k/5;
	    }
	    else{
	        b=(k/5)+1;
	    }
	    cout<<a-b<<endl;
	}
	return 0;
}
