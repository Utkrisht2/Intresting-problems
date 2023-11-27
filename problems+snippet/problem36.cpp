/*Little Malvika is very peculiar about colors. On her birthday, her mom wanted to buy balloons for decorating the house. 
So she asked her about her color preferences. The sophisticated little person that Malvika is, she likes only two colors — amber and brass. 
Her mom bought n balloons, each of which was either amber or brass in color. 
You are provided this information in a string s consisting of characters 'a' and 'b' only, where 'a' denotes that the balloon is amber, 
where 'b' denotes it being brass colored.
When Malvika saw the balloons, she was furious with anger as she wanted all the balloons of the same color. 
In her anger, she painted some of the balloons with the opposite color (i.e., she painted some amber ones brass and vice versa) to make all balloons appear to be the same color. 
As she was very angry, it took her a lot of time to do this, but you can probably show her the right way of doing so, thereby teaching her a lesson to remain calm in difficult situations, 
by finding out the minimum number of balloons needed to be painted in order to make all of them the same color.*/

#include <iostream>
#include<string>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int c=0, b=0;
	    for(int i=0; i<s.length(); i++){
	        if(s[i]=='a'){
	            c++;
	        }
	        else{
	            b++;
	        }
	    }
	    if(c>b){
	        cout<<b<<endl;
	    }
	    else{
	        cout<<c<<endl;
	    }
	}
	return 0;
}
