/*Chef recorded a video explaining his favorite recipe. However, the size of the video is too large to upload on the internet. 
He wants to compress the video so that it has the minimum size possible.
Chef's video has N frames initially. The value of the ith frame is Ai. 
Chef can do the following type of operation any number of times:
Choose an index (1≤i≤N) such that the value of the ith frame is equal to the value of either of its neighbors and remove the ith frame.
Find the minimum number of frames Chef can achieve.*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n], count=n;
	    for(int i=0; i<n; i++){
	        cin>>a[i];
	    }
	    for(int i=0; i<n; i++){
	        if(a[i]==a[i+1]){
	            count--;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}