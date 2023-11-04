/*Chef has two numbers A and B.
In one operation, Chef can choose either A or B and multiply it by 2.
Determine whether he can make both A and B equal after any number (possibly, zero) of moves.*/

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
		int a= sc.nextInt();
		int b= sc.nextInt();
	    if(a<b){
		        while(a<b){
		            a*=2;
		        }
		    }
		    else if(a>b){
		        while(a>b){
		            b*=2;
		        }
		    }
		    System.out.println((a==b)?"YES":"NO");
		}
	}
}
