/*The World Chess Championship 2022 is about to start. 14 Classical games will be played between Chef and Carlsen in the championship, 
where each game has one of three outcomes — it can be won by Carlsen, won by Chef, or it can be a draw. The winner of a game gets 2 points, 
and the loser gets 0 points. If it’s a draw, both players get 1 point each.
The total prize pool of the championship is 100⋅X. At end of the 14 Classical games, if one player has strictly more points than the other, 
he is declared the champion and gets 60⋅X as his prize money, and the loser gets 40⋅X.
If the total points are tied, then the defending champion Carlsen is declared the winner. 
However, if this happens, the winner gets only 55⋅X, and the loser gets 45⋅X.
Given the results of all the 14 games, output the prize money that Carlsen receives.
The results are given as a string of length 14 consisting of the characters C, N, and D.
C denotes a victory by Carlsen.
N denotes a victory by Chef.
D denotes a draw.*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    string s; cin>>s; 
	    int c=0, d=0, e=0;
	    for(int i=0; i<14; i++){
	        if(s[i]=='C'){
	            c++;
	        }
	        else if(s[i]=='N'){
	            d++;
	        }
	        else if(s[i]=='D'){
	            e++;
	        }
	    }
	    if(c>d){
	        cout<<x*60<<endl;
	    }
	    else if(c==d){
	        cout<<x*55<<endl;
	    }
	    else{
	        cout<<x*40<<endl;
	    }
	}
	return 0;
}
