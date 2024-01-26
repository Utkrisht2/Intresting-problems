/*Chef likes problems involving arrays. Unfortunately, the last one he tried to solve didn't quite get solved.
Chef has an array A of N positive numbers. He wants to find the number of subarrays for which the sum and product of elements are equal.
Please help Chef find this number.*/

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int num,count=0;
	    cin>>num;
	    int arr[num];
	    for(int i=0;i<num;i++){
	        cin>>arr[i];
	    }

	    for(int i=0;i<num;i++){
	       	    int sum=0,pro=1;
	       for(int j=i;j<num;j++){
	            sum+=arr[j];
	             pro*=arr[j];
	             if(sum==pro)
	             count++;
	       }
	    }
	      cout<<count<<endl;
	}
	return 0;
}