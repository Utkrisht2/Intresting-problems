/*In a class of N students, a class test was held. The ith student scored Ai marks. 
It is also known that the scores of all students were distinct.
A student passes the test if their score is strictly greater than the passing mark. 
Given that exactly X students pass in the test, find the maximum value of the passing mark of the test.*/

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
		     int N = sc.nextInt(); 
		    int X = sc.nextInt(); 
		    int A[] = new int[N];
		    for(int i = 0; i<N; i++){
		       A[i] = sc.nextInt();
		    }
		    Arrays.sort(A); 
		    System.out.println(A[N - X] -1);
		}
	}
}
