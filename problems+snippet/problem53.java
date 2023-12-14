/*You have a grid with N rows and M columns. You have two types of tiles — one of dimensions 2×2 and the other of dimensions 1×1. 
You want to cover the grid using these two types of tiles in such a way that:
Each cell of the grid is covered by exactly one tile; and The number of 1×1 tiles used is minimized.
Find the minimum number of 1×1 tiles you have to use to fill the grid.*/

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
			int T = sc.nextInt();
		while(T-->0){
		    int N = sc.nextInt();
		    int M = sc.nextInt();
		    
		    if(((N%2) == 0) && ((M%2) == 0))
		        System.out.println(0);
		    else if(((N%2) == 0) && ((M%2) != 0))
		        System.out.println(N);
		    else if(((N%2) != 0) && ((M%2) == 0))
		        System.out.println(M);
		    else
		        System.out.println(((N%2)*M)+((M%2)*N)-1);
		    
		}
	}
}
