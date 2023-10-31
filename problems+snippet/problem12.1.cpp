/*The weather report of Chefland is Good if the number of sunny days in a week is strictly greater than the number of rainy days.
Given 7 integers A1,A2,A3,A4,A5,A6,A7 where Ai=1 denotes that the ith day of week in Chefland is a sunny day, 
Ai=0 denotes that the i thday in Chefland is a rainy day. Determine if the weather report of Chefland is Good or not.*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	    int a[7];
	    int count1=0, count2=0;
	    for(int i=0; i<7; i++){
	        cin>>a[i];
	    }
	    for(int i=0; i<7; i++){
	        if(a[i]==1)
	        count1++;
	        else 
	        count2++;
	    }
	    if(count1>count2){
	        cout<<"YES"<<endl;
	    }
	    else
	    cout<<"NO"<<endl;
	return 0;
}
