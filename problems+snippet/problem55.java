/*You are given an array A=[A1,A2,…,A N] of length N.
You can right rotate it any number of times (possibly, zero). What is the maximum value of A1+AN you can get?
Note: Right rotating the array [A1,A2,…,AN] once gives the array [AN,A1,A2,…,AN−1]. 
For example, right rotating [1,2,3] once gives [3,1,2], and right rotating it again gives [2,3,1].*/

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);
		int t= sc.nextInt();
		while(t-->0){
		    int n = sc.nextInt();
		    long arr[]=new long[n];
		    
		    for(int i=0;i<n;i++)
		    {
		        arr[i]=sc.nextLong();
		    }
		    long max=arr[0]+arr[n-1];
		    long sum=0;
		    for(int i=0;i<n-1;i++)
		    {
		        long temp=arr[i]+arr[i+1];
		        if(temp > sum)
		        {
		            sum=temp;
		        }
		        
		    }
		    System.out.println(Math.max(sum,max));
		}
	}
}
