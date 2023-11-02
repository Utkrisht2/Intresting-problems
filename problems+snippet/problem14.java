/*All of Chef's friends are playing fantasy cricket based upon the ODI World Cup, and Chef would like to join them.
For a certain cricket match, Chef has decided upon his team of 11 players. 
However, he hasn't yet decided who should be the captain and who should be the vice-captain.
He's narrowed his decision down to N players out of the 11, 
from which he'll choose one to be the captain and one to be the vice captain.
How many different choices does he have?*/

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
		int test, players;
		test= sc.nextInt();
		for(int i=0; i<test; i++){
		    players=sc.nextInt();
		    int choices=players*(players-1);
		    System.out.println(choices);
		}
	}
}