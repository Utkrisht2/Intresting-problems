/*Alice has an array of N integers — A1,A2,…,AN. She wants the product of all the elements of the array to be a non-negative integer. 
That is, it can be either 0 or positive. But she doesn't want it to be negative.
To do this, she is willing to remove some elements of the array. 
Determine the minimum number of elements that she will have to remove to make the product of the array's elements non-negative.*/

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class NonNegativeProduct
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);
		int T = sc.nextInt();
		while(T-- >0){
		    int n = sc.nextInt();
		    int[] A = new int[n];
		    int count1 = 0;
		    int count0 = 0;
		    for(int i = 0;i<n;i++){
		        A[i] = sc.nextInt();
		        if(A[i]<0){
		            count1++;
		        }
		        if(A[i] == 0){
		            count0++;
		        }
		    }
		    if(count0>=1||count1%2 == 0){
		        System.out.println("0");
		    }
		    else{
		        System.out.println("1");
		    }
		}
	}
}
