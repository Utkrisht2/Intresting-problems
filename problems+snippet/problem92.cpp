/*Alice and Bob are playing a game. Each player rolls a regular six faced dice 3 times.
The score of a player is the maximum number that can be formed using the rolls.
The player with the highest score wins, and the game ends in a tie if both players have the same score.
Find the winner of the game or determine whether it is a tie.*/

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--) {
	    int bob[3], alice[3];
	    
	    for(int i = 0; i < 3; i++) cin >> bob[i];
	    
	    for(int i = 0; i < 3; i++) cin >> alice[i];
	    
	    sort(bob, bob + 3,greater<int>());
	    sort(alice, alice + 3, greater<int>());
	 
	    int as = 0, bs = 0;
	    
	    for(int i = 0; i < 3; i++){
	        as = as*10 + alice[i];
	        bs = bs*10 + bob[i];
	    }
	    
	    if(as == bs) cout<<"Tie"<<endl;
	    else if(as > bs) cout<<"Bob"<<endl;
	    else cout<<"Alice"<<endl;
	    
	    
	}
	
	return 0;
}
