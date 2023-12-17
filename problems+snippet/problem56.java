/*Tomya is a girl. She loves Chef Ciel very much.
Tomya like a positive integer p, and now she wants to get a receipt of Ciel's restaurant whose total price is exactly p. 
The current menus of Ciel's restaurant are shown the following table.

Name of Menu	                                           price
eel flavored water	                                         1
deep-fried eel bones	                                     2
clear soup made with eel livers	                             4
grilled eel livers served with grated radish	             8
savory egg custard with eel	                                 16
eel fried rice (S)	                                         32
eel fried rice (L)	                                         64
grilled eel wrapped in cooked egg	                         128
eel curry rice	                                             256
grilled eel over rice	                                     512
deluxe grilled eel over rice	                             1024
eel full-course	                                             2048
Note that the i-th menu has the price 2i-1 (1 ≤ i ≤ 12).
So please find the minimum number of menus whose total price is exactly p. 
Note that if she orders the same menu twice, then it is considered as two menus are ordered. */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
			Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		while(t-->0){
		    int p=sc.nextInt();
		    int n=2048;
		    int count=0;
            while(p>0){
                count += (p/n);
                p %=n;
                n /=2;
            }
            System.out.println(count);
		}
	}
}
