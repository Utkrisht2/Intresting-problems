/*Alice and Bob are playing a game of Blobby Volley. In this game, in each turn, one player is the server and the other player is the receiver. 
Initially, Alice is the server, and Bob is the receiver.
If the server wins the point in this turn, their score increases by 1, and they remain as the server for the next turn.
But if the receiver wins the point in this turn, their score does not increase. But they become the server in the next turn.
In other words, your score increases only when you win a point when you are the server.
Please see the Sample Inputs and Explanation for more detailed explanation.
They start with a score of 0 each, and play N turns. The winner of each of those hands is given to you as a string consisting of 'A's and 'B's. 
'A' denoting that Alice won that point, and 'B' denoting that Bob won that point. Your job is the find the score of both of them after the N turns.*/

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class BlobbyVolleyScores
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc=new Scanner(System.in);
		int T=sc.nextInt();
		while(T-->0){
		    int n=sc.nextInt();
		    String s = sc.next();
		    int a=0;
		    int b=0;
		    
		    if(s.charAt(0) == 'A')
		    a++;
		    
		    else
		    b=0;
		    
		    for(int j=1; j<n; j++)
		    {
		        if(s.charAt(j)=='A')
		        {
		            if(s.charAt(j-1) == 'A')
		            a++;     
		        }
		        
		        else
		        {
		            if(s.charAt(j-1) == 'B')
		            b++;
		            
		        }
		    }
		    System.out.println(a+" "+b);
		}
	}
}