/*The tortoise and the hare decide to run a race, yet again.
This time around however, the hare has gotten a bit smarter!
The racetrack is a straight line, L meters long.The tortoise moves at V1 meters per second, while the hare moves at V2 meters per second. 
It is known that V1<V2, that is, the hare is strictly faster.
The hare still wants to be a bit lazy, so it decides to give the tortoise a headstart — the hare will wait for an integer number of seconds before starting to run.
Unfortunately, the animals' measuring devices aren't up to par — they can only measure in integer seconds, and will round up — so for example:
If the hare takes 1.57 seconds to finish, the reported time will be 2 seconds.
If the hare takes 3 seconds to finish, the reported time will be 3 seconds.
If the hare takes 3.01 seconds to finish, the reported time will be 4 seconds.
What's the longest time the hare can wait, while still being able to win the race?
Note that to win the race, the hare's reported time must be strictly less than the tortoise's.
If the hare cannot win no matter what, print −1.*/

#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int l, v1, v2;
	    cin>>l>>v1>>v2;
	    int tortoiseTime=ceil(l*1.0/v1);
	    int hareTime=ceil(l*1.0/v2);
	    if(hareTime>=tortoiseTime){
	        cout<<-1<<endl;
	    }
	    else{
	        cout<<tortoiseTime-hareTime-1<<endl;
	    }
	}
	return 0;
}
