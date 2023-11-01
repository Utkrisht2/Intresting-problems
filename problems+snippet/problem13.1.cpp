/*There is a circular track of length M consisting of M checkpoints and M bidirectional roads such that each road has a length of 
1 unit.Chef is currently at checkpoint A and wants to reach checkpoint B. Find the minimum length of the road he needs to travel.1 unit.*/

#include<bits/stdc++.h>
#include<iomanip>
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	    int initialCheckpoint, finalCheckpoint, totalCheckpoint;
	    
	    cin>>initialCheckpoint>>finalCheckpoint>>totalCheckpoint;
	    
	    int minimumLength=min(abs(initialCheckpoint - finalCheckpoint), abs(abs(initialCheckpoint - finalCheckpoint) - totalCheckpoint));
	    
	    cout<<minimumLength<<endl;

	return 0;
}
