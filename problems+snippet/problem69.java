/*Chef is fan of pairs and he likes all things that come in pairs. He even has a doll collection in which the dolls come in pairs. 
One day while going through his collection he found that there are odd number of dolls. Someone had stolen a doll!!!
Help chef find which type of doll is missing..*/

import java.util.*;
import java.lang.*;
import java.io.*;

class Doll
{
	public static void main (String[] args) throws java.lang.Exception
	{
         	Scanner sc =new Scanner(System.in);
	        int t= sc.nextInt();
	        while(t-->0){
	        int n= sc.nextInt();
	        int []arr=new int[n];
	        for(int i=0;i<n;i++){
	        arr[i]=sc.nextInt();
	        
	    }
	    
	    Arrays.sort(arr);
	    for(int i=0;i<n-1;i+=2){
	        if(arr[i]==arr[i+1]){
	            continue;
	        }
	        else
	        {
	            System.out.println(arr[i]);
	            break;
	        }
	    }
	}
	}
}