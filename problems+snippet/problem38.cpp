/*A school has organized a field trip for a class of N students, of which X students are boys, and the remaining students are girls.
Everyone is excited to go trekking, and must form groups of size exactly K to do so. 
However, boys will only form groups among themselves, and girls will only form groups among themselves.
Both boys and girls will form as many groups as possible.
The remaining students can either dance around a bonfire, or just read books.
Dancing around the bonfire requires a pair of one girl and one boy, while reading is done alone.
Reading is much more boring than dancing, so students will try to avoid it.
What's the minimum number of students who will be engaged in reading?*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n, x, k;
	    cin>>n>>x>>k;
	    int a=x%k;
	    int b=(n-x)%k;
	    if(a<b){
	        cout<<b-a<<endl;
	    }
	    else{
	        cout<<a-b<<endl;
	    }
	}
	return 0;
}