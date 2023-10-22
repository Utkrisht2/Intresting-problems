/*Chef and Chefina are residing in a hotel.There are 10 floors in the hotel and each floor consists of 10 rooms.
Floor 1 consists of room numbers 1 to 10.Floor 2 consists of room numbers 11 to 20.Floor i consists of room numbers 10⋅(i−1)+1 to 10⋅i.
You know that Chef's room number is X while Chefina's Room number is Y.
If Chef starts from his room, find the number of floors he needs to travel to reach Chefina's room.*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x, y, a, b;
	    cin>>x>>y;
	    if(y%10==0){
	         a=y/10;
	    }
	    else
	     a=(y/10)+1;
	    if(x%10==0){
	         b=x/10;
	    }
	    else
	     b=(x/10)+1;
	    cout<<abs(a-b)<<endl;
	}
	return 0;
}
