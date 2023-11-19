/*Rohit dreams he is in a shop with an infinite amount of marbles. He is allowed to select n marbles.
There are marbles of k different colors. From each color there are also infinitely many marbles.
Rohit wants to have at least one marble of each color, but still there are a lot of possibilities for his selection. In his effort to make a decision he wakes up.
Now he asks you how many possibilities for his selection he would have had.
Assume that marbles of equal color can't be distinguished, and the order of the marbles is irrelevant.*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	for(int i=1;i<=t;i++){
	    long long int n,k;
	    cin>>n>>k;
	    
	    long long int sum =1;
	    
	    for(long long int i=1;i<k;i++)
	    {
	        sum = sum*((n-k)+i)/i;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}