/*The fuel economy of a car is the distance which it can travel on one litre of fuel.
The base fuel economy (i.e, its fuel economy when there is only one person - the driver - in the car) of a certain car is 
M kilometres per litre. It was also observed that every extra passenger in the car decreases the fuel economy by 1 kilometre per litre.
P people want to take this car for a journey. They know that the car currently has V litres of fuel in its tank.
What is the maximum distance this car can travel under the given conditions, assuming that all P people always stay in the car and no refuelling can be done?
Note that among the P people is also a driver, i.e, there are exactly P people in the car.*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
     int t;
     cin>>t;
     while(t--){
         int P, M, V;
         cin>>P>>M>>V;
         if(P>1){
             int a= M-(P-1);
             cout<<a*V<<endl;;
         }
         else{
             cout<<M*V<<endl;
         }
     }
}