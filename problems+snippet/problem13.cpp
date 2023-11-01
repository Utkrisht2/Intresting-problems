/*Chef has an ore with melting point of X degrees.
Chef’s kiln has a initial temperature of Y degrees. The temperature of the kiln increases by i degrees after the ith minute.
Find the minimum time in minutes after which the ore starts melting.*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x, y;
	    cin>>x>>y;
	    for(int i=1; i>0; i++){
	        y=y+i;
	        if(y>=x){
	            cout<<i<<endl;
	            break;
	        }
	    }
	}
	return 0;
}