/*Utkarsh is currently sitting for placements. He has applied to three companies named A,B, and C.
You know Utkarsh's order of preference among these 3 companies, 
given to you as characters first, second, and third respectively (where first is the company he prefers most).
You also know that Utkarsh has received offers from exactly two of these three companies, given you as characters x and y.
Utkarsh will always accept the offer from whichever company is highest on his preference list. Which company will he join?*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	   char a[3], x, y;
	    
	    for (int i=0; i<3; i++) 
	    cin>>a[i];
	    cin>>x>>y;
	    
	    if (a[0] == x || a[0] == y) cout<<a[0];
	    else if (a[1] == x || a[1] == y) cout<<a[1];
	    
	    cout<<endl;
	}
	return 0;
}