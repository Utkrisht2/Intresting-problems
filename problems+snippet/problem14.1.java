/*Karan likes the number 4 very much.
Impressed by the power of this number, Karan has begun to look for occurrences of four anywhere. 
He has a list of T integers, for each of them he wants to calculate the number of occurrences of the digit 4 in the decimal representation. 
He is too busy now, so please help him.*/

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
		int test;
		test= sc.nextInt();
		while(test-->0){
		    int count=0;
		    String s=sc.next();
		    for(int i=0; i<s.length(); i++){
		        if(s.charAt(i)=='4'){
		        count++;
		        }
		    }
		     System.out.println(count);
		}
	}
}
