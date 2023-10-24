/*Alice and Bob are meeting after a long time. As usual they love to play some math games.
This times Alice takes the call and decides the game. The game is very simple, Alice says out an integer and Bob has to say
whether the number is prime or not. Bob as usual knows the logic but since Alice doesn't give Bob much time to think, 
so Bob decides to write a computer program.
Help Bob accomplish this task by writing a computer program which will calculate whether the number is prime or not .*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int n, i; cin>>n;
	    for( i=2; i<n; i++ ){
	        if(n%i == 0){
	            break;
	        }
	    }
	    
	    if( i == n)
	        cout<<"yes"<<endl;
	    else
	        cout<<"no"<<endl;
	    
	}
	return 0;
}
