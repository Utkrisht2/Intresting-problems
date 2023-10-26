/*There are N spooky days left until Halloween.
Dracula dines at a mysterious restaurant that changes its spooky menu daily. He particularly enjoys what they serve on Tuesday.
Today is Monday, so he wishes to calculate how many times he can indulge in his favourite menu in the next N days (including today) before Halloween.
Note that Dracula follows the standard 7-day calendar, with Tuesday immediately following Monday.*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a=0;
	    int i=2;
	    while(i<=n){
	        a++;
	        i=i+7;
	    }
	    cout<<a<<endl;
	}
	return 0;
}
