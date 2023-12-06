/*Once, after a stressful day, Chef decided to relax and visit a casino near his house to gamble. He feels lucky and he's going to bet almost all of his money.
The game Chef is going to play in the casino consists of tossing a die with N faces twice. 
There is a number written on each face of the die (these numbers are not necessarily distinct). 
In order to win, Chef must get the number A on the first toss and the number B on the second toss of the die.
The excited viewers want to know the probability that Chef will win the game. Can you help them find that number? 
Assume that Chef gets each face of the die with the same probability on each toss and that tosses are mutually independent.*/

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Naive
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);
		int t =sc.nextInt();
		while(t-->0){
		    int n = sc.nextInt();
		    int a = sc.nextInt();
		    int b = sc.nextInt();
		    int []arr=new int[n];
		    float c=0;
		    float d=0;
		    for(int i=0;i<n;i++){
		        arr[i]=sc.nextInt();
		        
		        if(arr[i]==a)
		            c++;
		        if(arr[i]==b)
		            d++;
		    }
		    float p = (c/n)*(d/n);
		    System.out.println(p);
		}
	}
}