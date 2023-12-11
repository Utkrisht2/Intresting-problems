/*Chef is the judge of a competition. There are two players participating in this competition — Alice and Bob.
The competition consists of N races. For each i (1 ≤ i ≤ N), Alice finished the i-th race in Ai minutes, 
while Bob finished it in Bi minutes. The player with the smallest sum of finish times wins. 
If this total time is the same for Alice and for Bob, a draw is declared.
The rules of the competition allow each player to choose a race which will not be counted towards their total time. 
That is, Alice may choose an index x and her finish time in the race with this index will be considered zero; similarly, 
Bob may choose an index y and his finish time in the race with this index will be considered zero. Note that x can be different from y; 
the index chosen by Alice does not affect Bob's total time or vice versa.
Chef, as the judge, needs to announce the result of the competition. 
He knows that both Alice and Bob play optimally and will always choose the best option. 
Please help Chef determine the result!*/

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
		    int n= sc.nextInt();
		    int a[]= new int[n];
		    int b[]= new int[n];
		    for(int i=0; i<n; i++){
		         a[i]= sc.nextInt();
		    }
		    for(int i=0; i<n; i++){
		        b[i]= sc.nextInt();
		    }
		    Arrays.sort(a);
		    Arrays.sort(b);
		    int sum1=0, sum2=0;
		    a[n-1]=0;
		    b[n-1]=0;
		for(int i=0; i<n; i++){
		    sum1=sum1+a[i];
		    sum2=sum2+b[i];
		}
		if(sum1>sum2){
		    System.out.println("Bob");
		}
		else if(sum1<sum2){
		    System.out.println("Alice");
		}
		else{
		    System.out.println("Draw");
	    	}
		}
	}
}
