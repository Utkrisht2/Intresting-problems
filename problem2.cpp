/*Chef is playing a video game, and is now fighting the final boss.The boss has H health points. Each attack of Chef reduces 
the health of the boss by X.Chef also has a special attack that can be used at most once, 
and will decrease the health of the boss by Y.Chef wins when the health of the boss is ≤0.
What is the minimum number of attacks needed by Chef to win?*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int h, x, y, a;
	    cin>>h>>x>>y;
	    if(x<=y){
	         a=h-y;
	        if(a%x==0){
	        cout<<(a/x)+1<<endl;
	        }
	        else{
	            cout<<(a/x)+1+1<<endl;
	        }
	    }
	    else{
	        cout<<(a/x)+1<<endl;
	    }
	}
	return 0;
}
