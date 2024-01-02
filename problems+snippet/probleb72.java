/*Abhi is a salesman. He was given two types of candies, which he is selling in N different cities.
For the prices of the candies to be valid, Abhi's boss laid down the following condition:
A given type of candy must have distinct prices in all N cities.
In his excitement, Abhi wrote down the prices of both the candies on the same page and in random order instead of writing them on different pages. 
Now he is asking for your help to find out if the prices he wrote are valid or not.
More formally, you are given an array A of size 2N. Find out whether it is possible to split A into two arrays, each of length 
N, such that both arrays consist of distinct elements.*/

import java.util.*;
import java.lang.*;
import java.io.*;

class problem72
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
        Scanner sc = new Scanner(System.in);
            int t = sc.nextInt();
            while(t-->0){
                int n = sc.nextInt();
                int arr[] = new int[n*2];
                int count=0, count2=0;
                for(int i=0; i<arr.length; i++){
                    arr[i] = sc.nextInt();
                }
                for(int i =0; i<arr.length; i++){
                    count =0;
                    for(int j=0; j<arr.length; j++){
                        if(arr[i]==arr[j]){
                            count++;
                        }
                    }
                    if(count>2){
                    System.out.println("No");
                    break;
             }
                    else{
                    count2++;
             }
                }
                 if(count2 ==arr.length){
             System.out.println("Yes");
         }

            }
	}
}

