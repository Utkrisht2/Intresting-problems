/*Two sisters, A and B, play the piano every day. During the day, they can play in any order. 
That is, A might play first and then B, or it could be B first and then A. 
But each one of them plays the piano exactly once per day. 
They maintain a common log, in which they write their name whenever they play.

You are given the entries of the log, but you're not sure if it has been tampered with or not. 
Your task is to figure out whether these entries could be valid or not.*/

#include <iostream>
#include<string>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int z=0;
	    for(int i=0;i<s.size();i+=2){
	        if((s[i]=='A'&&s[i+1]=='A')||(s[i]=='B'&&s[i+1]=='B')){
	        z=1;break;
	        }
	    }
	    cout<<(z?"no":"yes")<<endl;
	}
	return 0;
}
