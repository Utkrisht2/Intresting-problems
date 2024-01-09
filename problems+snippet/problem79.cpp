/*Chef is playing a certain video game that requires him to collect Monsters, and use them to fight against other Monsters.
Chef's favorite Monster has an attack stat of X, and is fighting against another monster whose health stat is H.
The fight proceeds in turns: each turn, Chef's Monster does X damage to its opponent.
However, Chef's Monster has the ability Slow Start, which halves its attack for the first five turns.
That is, for the first five turns, the damage done to the opponent is X/2 and not X.
How many turns will Chef's Monster take to defeat the opponent (i.e, do at least H damage to it)?*/

#include <iostream>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int x,h; 
	    cin>>x>>h;
	    int result=0,i=0;
	    while(h>0 && i<5){
	        h=h-(x/2);
	        result++;
	        i++;
	    }
	    while(h>0){
	        h=h-x;
	        result++;
	    }
	    cout<<result<<endl;
	}
	
	
	return 0;
}