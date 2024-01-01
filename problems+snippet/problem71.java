/*Chef has an array A of length N.Chef forms a binary array B of length N using the parity of the sums of adjacent elements in A. 
Formally,Bi=(Ai+Ai+1)%2 for 1≤i≤N−1
BN=(AN+A1)%2
Here x%y denotes the remainder obtained when x is divided by y.
Chef lost the array A and needs your help. Given array B, determine whether there exits any valid array A which could have formed B.*/

import java.util.*;
import java.lang.*;
import java.io.*;

class AdjacentSumParty
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc =  new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int n = sc.nextInt();
            int c=0;
            int arr[] = new int[n];
            for(int i = 0; i < n; i++){
                arr[i] = sc.nextInt();
                if(arr[i]==1){
                    c++;
                }
            }
            if(c%2==0){
                System.out.println("YES");
            }
            else{
                System.out.println("NO");
            }
        }
	}
}
