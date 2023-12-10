/*Chef has started learning about the stock market and has already selected a favourite stock.
He traded the stock for N consecutive days. Let Ai denotes the profit earned by Chef on the ith day.
Note that Ai<0 indicates that Chef had a loss on the ith day.
Chef wants to find the maximum amount of of profit he would have earned, if he skipped trading for exactly one day.*/

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		 Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        
        while (t-- > 0) {
            int n, sum = 0; // Change "a" to "n" for better variable naming
            n = scanner.nextInt();
            int[] array = new int[n];
            
            for (int i = 0; i < n; i++) {
                array[i] = scanner.nextInt();
            }
            
            Arrays.sort(array);
            
            for (int i = 1; i < n; i++) {
                sum += array[i];
            }
            
            System.out.println(sum);
        }
        
        scanner.close();
	}
}
