/*Words that contain many consecutive consonants, like "schtschurowskia", are generally considered somewhat hard to pronounce.
We say that a word is hard to pronounce if it contains 4 or more consonants in a row; otherwise it is easy to pronounce. 
For example, "apple" and "polish" are easy to pronounce, but "schtschurowskia" is hard to pronounce.
You are given a string S consisting of N lowercase Latin characters. 
Determine whether it is easy to pronounce or not based on the rule above — print YES if it is easy to pronounce and NO otherwise.
For the purposes of this problem, the vowels are the characters {a,e,i,o,u} and the consonants are the other 21 characters.*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n, count=0;
	    cin>>n;
	    string s;
	    cin>>s;
	    for(int i=0; i<n; i++){
	        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
	            count=0;
	        }
	        else{
	            count++;
	            if(count==4)
	            break;
	        }
	    }
	    if(count<4){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
