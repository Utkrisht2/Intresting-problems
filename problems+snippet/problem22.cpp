/*Vasya likes the number 239. Therefore, he considers a number pretty if its last digit is 2, 3 or 9.
Vasya wants to watch the numbers between L and R (both inclusive), so he asked you to determine how many pretty numbers are in this range. 
Can you help him?*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int l, r;
	    cin>>l>>r;
	    int count=0;
	    for(int i=l; i<=r; i++){
	        if(i%10==2 || i%10==3 || i%10==9){
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}