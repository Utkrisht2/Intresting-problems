/*Only x hours are left for the March Long Challenge and Chef is only left with the last problem unsolved. 
However, he is sure that he cannot solve the problem in the remaining time. 
From experience, he figures out that he needs exactly H hours to solve the problem.
Now Chef finally decides to use his special power which he has gained through years of intense yoga. 
He can travel back in time when he concentrates. Specifically, his power allows him to travel to N different time zones, 
which are T1,T2,…,TN hours respectively behind his current time.
Find out whether Chef can use one of the available time zones to solve the problem and submit it before the contest ends.*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n, h, x;
	cin>>n>>h>>x;
	int a[n];
	int b=h-x, i;
	string s="NO";
	for(int i=0; i<n; i++){
	    cin>>a[i];
	    if(a[i]>=b){
	        s="YES";
	    }
	    }
	    cout<<s<<endl;
	return 0;
}