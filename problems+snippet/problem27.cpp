/*Write a program to obtain a number (N) from the user and display whether the number is a one digit number, 
2 digit number, 3 digit number or more than 3 digit number*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	if((n%10)==n){
	    cout<<1<<endl;
	}
	else if((n%100)==n){
	    cout<<2<<endl;
	}
	else if((n%1000)==n){
	    cout<<3<<endl;
	}
	else{
	    cout<<"More than 3 digits"<<endl;
	}
	return 0;
}
