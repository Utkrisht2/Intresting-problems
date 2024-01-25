/*Given integers N and K, find a K- sized subset of {1,2,…,N} with maximum GCD.
If multiple such subsets exist, you may print any.*/

#include<bits/stdc++.h>
#include<cmath>
using namespace std;


int main(){
    int t; cin>>t;
    while(t--){
       long long n,k; cin>>n>>k;
         long long x = n/k;
         long long ans = x;
         while(k--){
            cout<<ans<<" ";
            ans += x;
         }
         cout<<endl;
    }
    return 0;
}