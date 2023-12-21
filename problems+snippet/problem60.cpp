/*Chef Two and Chef Ten are playing a game with a number X. In one turn, they can multiply X by 2. 
The goal of the game is to make X divisible by 10.
Help the Chefs find the smallest number of turns necessary to win the game (it may be possible to win in zero turns) or determine that it is impossible.*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t;
	cin >> t;
	int x[t];
	for (int i = 0;i < t; i++){
	    cin >> x[i];
	}
	for (int i = 0; i < t; i++){
	    if (x[i] % 10 == 0){
	        cout << 0 << endl;
	    } else if ((x[i] * 2) % 10 == 0){
	        cout << 1 << endl;
	    } else {
	        cout << -1 << endl;
	    }
	        
	}
	return 0;
}