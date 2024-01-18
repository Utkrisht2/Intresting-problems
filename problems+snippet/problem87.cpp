/*Chef is attempting to learn magic, but it really hasn't been going very well.
In order to pass an upcoming exam, Chef decides to just memorize magic spells - but even that turns out to be too hard!
A magic spell is, quite simply, a string that consists of only lowercase Latin letters (i.e, the characters {a,b,c…,z}).
Chef has with him a magic spell S, and is struggling to remember it.
To make things easier, he decides to delete exactly one character from it - after all, a small modification to the spell won't change its effect, right?
Chef believes he has a better chance of remembering the spell if it's lexicographically smallest.
Can you help Chef find which character he should delete so that the resulting string is lexicographically smallest among all possible results?
Note: Lexicographic order is essentially dictionary order.
That is, string A is lexicographically smaller than string B if, at the first index i where they differ, Ai<Bi.
For instance, ac is smaller than ad and ba, but not ab.*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
		cin>>t;
		while(t--){
		int n;
        string s;
        cin >> n >> s;
        int i = 0;
        for( i = 0 ; i < n-1 ; i++){
            if(s[i] > s[i+1]){
                break;
            }
        }
        for(int j = 0 ; j < n ; j++){
            if(i != j)
                cout << s[j];
        }
        cout << endl;
		}
        return 0;
}
