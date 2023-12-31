/*The ZCO Scholarship Contest has just finished, and you finish with a rank of R. 
You know that Rank 1 to Rank 50 will get 100% scholarship on the ZCO exam fee and Rank 51 to Rank 100 will get 50% percentage scholarship on the ZCO exam fee. 
The rest do not get any scholarship.What percentage of scholarship will you get ?*/

import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
        Scanner sc= new Scanner(System.in);
        int r= sc.nextInt();
        if(r<=50){
            System.out.println(100);
        }
        else if(r>50 && r<=100){
            System.out.println(50);
        }
        else{
            System.out.println(0);
        }
	}
}