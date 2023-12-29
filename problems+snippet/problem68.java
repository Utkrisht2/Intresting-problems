/*Kulyash believes in equality.
Given an integer N, output a binary string of length N such that:
The count of 01 subsequences in the string is equal to the count of 10 subsequences;
The string has at least one occurrence of 0 as well as 1.
If multiple such strings exist, print any. Also, it is guaranteed that corresponding to the given input, an answer always exists.*/

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class ZeroOnesEqualOneZero
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		while(t-->0){
		    int n=sc.nextInt();
		   for(int i= 0; i< n; i++){
            if(i==0 || i== n - 1)
            System.out.print("1");
            else
            System.out.print("0");
        
    }
   System.out.println(" ");
		}
	}
}