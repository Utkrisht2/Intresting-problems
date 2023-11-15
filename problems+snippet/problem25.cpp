/*Chef and his competitor Kefa own two restaurants located at a straight road. The position of Chef's restaurant is X1, 
the position of Kefa's restaurant is X2.
Chef and Kefa found out at the same time that a bottle with a secret recipe is located on the road between their restaurants. 
The position of the bottle is x3.The cooks immediately started to run to the bottle. Chef runs with speed V1, Kefa with speed V 2.
Your task is to figure out who reaches the bottle first and gets the secret recipe (of course, it is possible that both cooks reach the bottle at the same time).*/

#include <iostream>
#include<cmath>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    float x1, x2, x3, v1, v2;
	    cin>>x1>>x2>>x3>>v1>>v2;
	    if(abs((x3-x1))/v1<abs((x3-x2))/v2){
	        cout<<"Chef"<<endl;
	    }
	    else if(abs((x3-x1))/v1>abs((x3-x2))/v2){
	        cout<<"Kefa"<<endl;
	    }
	    else{
	        cout<<"Draw"<<endl;
	    }
	}
	return 0;
}