/*You have N cards placed in front of you on the table. The ith card has the number Ai written on it.
In one move, you can remove any one card from the remaining cards on the table.
Find the minimum number of moves required so that all the cards remaining on the table have the same number written on them.*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	   
	    int a[n],sum=0;
	    for(int j=1;j<=n;j++)
	    {
	        cin>>a[j];
	    }
	    for(int i=1;i<=10;i++)
	    {
	        int count=0;
	        for(int j=1;j<=n;j++)
	        {
	            if(a[j]==i)
	            {
	                count++;
	            }
	        }
	        if(sum<count)
	        {
	            sum=count;
	        }
	    }
	    cout<<n-sum<<endl;
	}
	return 0;
}
