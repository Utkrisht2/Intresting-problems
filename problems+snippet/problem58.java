/*Once upon a time, there was a hero and an old saint. And like in any story with a hero and an old saint, the old saint asked the hero — three questions!
But here's the twist: each question was a binary question, which means that the answer to each must be either a 'Yes' or a 'No', 
not none, not both. Our hero, who was not so wise in the ways of science, answered them arbitrarily and just hoped he is correct. 
The old saint, being so old, does not remember which answers were correct. The only thing that he remembers is - how many of them were 'Yes', and how many of them were 'No'. 
Our hero will pass the test if the old saint cannot distinguish his responses from the set of correct answers i.e. if the number of 'Yes' and 'No' in the responses matches that in the correct answers, regardless of their order.
You are given the answers to each of the three questions, and the responses of the hero to the same. 
Find whether the hero will be able to pass the old saint's test.*/

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
		    int a[]= new int[3];
		    int b[]= new int[3];
		    for(int i=0; i<3; i++){
		        a[i]= sc.nextInt();
		    }
		    for(int i=0; i<3; i++){
		        b[i]= sc.nextInt();
		    }
		    int c= a[0]+a[1]+a[2];
		    int d= b[0]+b[1]+b[2];
		    if(c==d){
		        System.out.println("Pass");
		    }
		    else{
		        System.out.println("Fail");
		    }
		}
	}
}
