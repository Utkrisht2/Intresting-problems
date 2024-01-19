/*Chef is a visitor in CodeChef's new office. All doors inside the office require a swipe of access card.
The access card allows a fixed number of swipes and expires after that.You are given a binary string S of length N and an integer X.
Let Si=0 denote the swipe of access card, thus reducing the remaining swipes by 1; and Si=1 denote a renewal of access card which sets the remaining swipes to X.
Find whether the string S denotes a valid string of renewal and swipes where the card never expires before a door is accessed.
Note that the access card has 0 swipes left in the beginning.*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int n,x; cin>>n>>x;
	    string s; cin>>s;
	    int swipes = 0;
	    string ans = "YES";
	    for(int i=0; i<n; i++){
	        if(s[i]=='0'){
	            swipes--;
	        }
	        else{
	            swipes = x;
	        }
	        if(swipes<0){
	            ans = "NO";
	            break;
	        }
	    }
	    cout<<ans<<endl;
	}
}
