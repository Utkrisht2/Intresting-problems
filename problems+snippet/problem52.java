/*In a Chess match "a + b", each player has a clock which shows a minutes at the start and whenever a player makes a move, 
b seconds are added to this player's clock. Time on a player's clock decreases during that player's turns and remains unchanged during the other player's turns. 
If the time on some player's clock hits zero (but not only in this case), this player loses the game.
There's a 3 + 2 blitz chess match. After N turns (i.e. N+1/2) moves made by white and (N/2 moves made by black), the game ends and the clocks of the two players stop; 
they show that the players (white and black) have A and B seconds left respectively. 
Note that after the N-th turn, b=2 seconds are still added to the clock of the player that made the last move and then the game ends.
Find the total duration of the game, i.e. the number of seconds that have elapsed from the start of the game until the end.*/

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
		        int N, A, B;
		        N= sc.nextInt();
		        A= sc.nextInt();
		        B= sc.nextInt();
		        int C= 2*(180+N);
		        int D= A+B;
		        System.out.println(C-D);
		    }
		}
	}