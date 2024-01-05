/*Chef decided to go on a diet during the following N days (numbered 1 through N). 
Part of the diet plan is to eat K grams of protein during each day. 
For each valid i, Chef wants to buy Ai grams of protein in the morning of the i-th day and then eat K grams of protein as part of his dinner. 
If he has any protein remaining, he can store it and use it in later dinners. Initially, Chef is storing 0 grams of protein.
Determine whether Chef will have enough protein all the time during his diet. In case he will not have enough, find the first day on which Chef will be unable to eat K grams of protein.*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int N, K, j;
	    cin>>N>>K;
	    int a[N];
	    for(int i=0;i<N;i++)
	        cin>>a[i];
	        if(a[0]<K)
	        cout<<"NO "<<1<<endl;
	        else{
	        for(j=1;j<N;j++){
	           a[j]+=a[j-1]-K;
	           if(a[j]<K){
	             cout<<"NO "<<j+1<<endl;
	             break;
	           }
	        }
	        if(j==N)
	        cout<<"YES\n";
	        }
	}
	return 0;
}
