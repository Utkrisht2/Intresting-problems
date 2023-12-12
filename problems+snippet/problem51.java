/*Stack likes the number 3 a lot.He has two non-negative integers A and B.
In one operation, Stack can do either of the following:A:=∣A−B∣ (change ∣A−B∣) B:=∣A−B∣ (change ∣A−B∣)
Note that ∣X∣ denotes absolute value of X. For example ∣−7∣=7 and ∣4∣=4.
Find the minimum number of operations after which at least one integer out of A and B becomes divisible by 3.*/

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
		int t = sc.nextInt();
		while(t-->0){
		    int A = sc.nextInt();
		    int B = sc.nextInt();
		     int count = 0;
		    while(A!=0 || B!=0){
		        if(A%3==0 || B%3==0){
		        System.out.println(count);
		        break;
		        }
		        A = A - B;
		        count = count + 1;
		    }
		}
	}
}
