/*Chef has two ranges [A,B] and [C,D]. Chef needs to find the number of integers that belong to at least one of the ranges.
Note: A range [P,Q] contains all the integers {P,P+1,P+2,…,Q−1,Q}.*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        set<int>s;
        for(int i=a;i<=b;i++){
         s.insert(i);
        }for(int i=c;i<=d;i++){
         s.insert(i);
        }
        cout<<s.size()<<endl;
	}
	return 0;
}