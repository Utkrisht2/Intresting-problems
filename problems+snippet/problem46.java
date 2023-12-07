/*Chef has N items in his shop (numbered 1 through N); for each valid i, the price of the i-th item is Pi. 
Since Chef has very loyal customers, all N items are guaranteed to be sold regardless of their price.
However, the government introduced a price ceiling K, which means that for each item i such that Pi>K, 
its price should be reduced from Pi to K.
Chef's revenue is the sum of prices of all the items he sells. Find the amount of revenue which Chef loses because of this price ceiling.*/

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc= new Scanner(System.in);
		int t= sc.nextInt();
		while(t-->0){
		    int n= sc.nextInt();
		    int k= sc.nextInt();
		    int a[]= new int[n];
		    int b=0;
		    for(int i=0; i<n; i++){
		         a[i]= sc.nextInt();
		    }
		    for(int i=0; i<n; i++){
		        if(a[i]>k){
		             b= b+ a[i]-k;
		        }
		    }
		    System.out.println(b);
		}
	}
}
