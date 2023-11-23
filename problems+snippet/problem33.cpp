/*The ultimate battle has begun in Tekken.Each fight has two players. Let the initial health of the players be X and Y, 
then, after the fight, the health of both the players reduces by min(X, Y).
Anna, Bob, and Claudio have initial health levels of A,B, and C respectively. Each pair of players fight exactly once.
Considering that you can schedule the fight between each pair in any order, find whether Anna can have a positive health level at the end of the battle.*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int anna, bob, claudio;
	    cin>>anna>>bob>>claudio;
	    int x=bob-min(bob,claudio);
	    int y=claudio-min(bob,claudio);
	    if(x>y)
	    {
	        anna=anna-x;
	        if(anna>0) cout<<"YES"<<endl;
	        else cout<<"NO"<<endl;
	        
	    }
	    else
	    {
	        anna=anna-y;
	        if(anna>0) cout<<"YES"<<endl;
	        else cout<<"NO"<<endl;
	    }
	}
	return 0;
}
