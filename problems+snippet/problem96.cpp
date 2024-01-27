/*Chef has a sequence A containing N integers A1, A2, ..., AN.
Chef is playing a game with this sequence. In this game, he may perform the following operation any number of times (including zero): 
Choose an arbitrary pair of elements from the sequence such that their sum is even, delete these two elements from the sequence and insert their sum into the sequence instead.
The goal of the game is to minimise the number of elements in the sequence.
Help Chef to play the game and find the minimum possible size of the sequence at the end of the game!*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int count1=0,count2=0;
	    for(int i=0;i<n;i++){
	        if(a[i]%2==0) count1++;
	        else count2++;
	    }
	    if(count2%2==0 || n==1) 
	    cout<<1<<endl;
	    else 
	    cout<<2<<endl;
	}
	return 0;
}