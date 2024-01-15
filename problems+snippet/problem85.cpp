/*In a cricket match, the retiring of three batsmen with three consecutive balls is termed as a hattrick.
Let A,B,C,D,E, and F denote the batsman's score for each ball in order in an over.
Each of these variables can be an integer less than equal to 6 denoting the runs scored by the batsman, or W denoting a wicket.
Find whether there was a hattrick in this over.*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; 
	cin>>t;
	while(t--){
	    vector<char> v(6);
	    for(int i=0; i<6; i++){
	        cin>>v[i];
	    }
	    string ans = "NO";
	    for(int i=0; i<6; i++){
	        if(v[i]=='W' && i+2<6 && v[i+1]=='W' && v[i+2]=='W'){
	            ans = "YES";
	            break;
	        }
	    }
	    cout<<ans<<endl;
	}
}
