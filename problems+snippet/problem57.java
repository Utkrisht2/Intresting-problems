/*You are given an integer N. Print a permutation [1,2,…,N] such that the following condition holds:
For any index i (1≤i<N), Pi* Pi+1 is not a perfect square.
If there are multiple correct answers, you may print any of them.
Note: A permutation of [1,2,…,N] is a rearrangement of those numbers.*/

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
		int t = sc.nextInt();
		while(t-->0){
		    int x=sc.nextInt();
		    for(int i = 1; i <= x; i++)
	    {
	       System.out.print(i+" ");
	    }
		  System.out.println();
		}
	}
}
