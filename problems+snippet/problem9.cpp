/*Chef invented a modified wordle.There is a hidden word S and a guess word T, both of length 5.
Chef defines a string M to determine the correctness of the guess word. For the ℎi thindex:
If the guess at the ℎi th index is correct, the ℎi th character of M is G.
If the guess at the ℎi th index is wrong, the ℎi th character of M is B.
Given the hidden word S and guess T, determine string M.*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string m, s1, s2;
	    for(int i=0; i<5; i++){
	        cin>>s1[i];
	    }
	    for(int i=0; i<5; i++){
	        cin>>s2[i];
	    }
	    for(int i=0; i<5; i++){
	        if(s1[i]==s2[i]){
	            cout<<"G";
	        }
	        else{
	            cout<<"B";
	        }
	    }
	    cout<<endl;
	}
	return 0;
}