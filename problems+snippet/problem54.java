/*Given a positive integer N, MoEngage wants you to determine if it is possible to rearrange the digits of N (in decimal representation) and obtain a multiple of 5.
For example, when N=108, we can rearrange its digits to construct 180=36⋅5 which is a multiple of 5.*/

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
		    int N = sc.nextInt();
		    String s = sc.next();
		      System.out.println((s.contains("0") || s.contains("5")) ? "Yes":"No");
		}
	}
}
