/*A particular month has 30 days, numbered from 1 to 30.
Day 1 is a Monday, and the usual 7-day week is followed (so day 2 is Tuesday, day 3 is Wednesday, and so on).
Every Saturday and Sunday is a holiday. There are N festival days, which are also holidays. Note that it is possible for a festival day to occur on a Saturday or Sunday.
You are given the dates of the festivals. Determine the total number of holidays in this month.*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n, count=8;
	    cin>>n;
	    int a;
	    for(int i=0; i<n; i++){
	        cin>>a;
	        if (a%7 != 6 && a%7 != 0) 
	        count++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}