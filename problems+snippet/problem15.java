/*Satyam phone has a battery level of N percent.
Each minute:If the phone is on charging, the battery level increases by 2%.Otherwise, 
the battery level decreases by 3%.
Find the minimum time in which Chef can make the battery level reach exactly 50%.
Note that the battery level should always lie in the range 0 to 100 (both included).*/

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class BatteryLevel
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc= new Scanner(System.in);
		int test= sc.nextInt();
		while(test-->0){
		    int n= sc.nextInt();
		    int count=0;
		     while(n>50 || n<50) {
		       if(n>50) {
		           n-=3;
		           count++;
		       }
		       if(n<50) {
		           n+=2;
		           count++;
		       }
		       
		    }
		    System.out.println(count);
		}
	}
}
