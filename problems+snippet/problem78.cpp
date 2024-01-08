/*Bears love candies and games involving eating them. Limak and Bob play the following game. Limak eats 1 candy, then Bob eats 2 candies, then Limak eats 3 candies, then Bob eats 4 candies, and so on. 
Once someone can't eat what he is supposed to eat, he loses.
Limak can eat at most A candies in total (otherwise he would become sick), while Bob can eat at most B candies in total. 
Who will win the game? Print "Limak" or "Bob" accordingly.*/

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int A,B,limak=0,bob=0;
	    cin>>A>>B;
	    for(int i=1;;i++){
	        if(i%2==0){
	            bob+=i;
	            if(bob>B){
	                cout<<"Limak"<<endl; 
	                break;
	            } 
	        }
	        else{
	            limak+=i;
	            if(limak>B) {
	            cout<<"Bob"<<endl;
	            break;
	            }
	        }
	    }
	}
	return 0;
}



