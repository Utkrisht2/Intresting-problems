/*You are given an integer N. Find if it is possible to represent N as the sum of 
several(possibly zero) 2's and several(possibly zero) 7's.
Formally, find if there exist two integers X,Y (X,Y≥0) such that 2⋅X+7⋅Y=N.*/

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
		int test= sc.nextInt();
		while(test-->0){
		    int n= sc.nextInt();
		    if(n<7 && n%2!=0)
		    System.out.println("NO");
		    else
		    System.out.println("YES");
		}
	}
}