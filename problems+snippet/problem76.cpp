/*You are given an integer array 'ARR' of size 'N' and an integer 'S'. 
Your task is to return the list of all pairs of elements such that each sum of elements of each pair equals 'S'.
Note:
Each pair should be sorted i.e the first value should be less than or equals to the second value. 
Return the list of pairs sorted in non-decreasing order of their first value. In case if two pairs have the same first value, 
the pair with a smaller second value should come first.*/

#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
   vector <vector<int>> ans;
   int N=arr.size();
   for(int i=0; i<N; i++){
      for(int j=i+1; j<N; j++){
         if(arr[i]+arr[j]==s){
          vector<int> temp;
          temp.push_back(min(arr[i],arr[j]));
          temp.push_back(max(arr[i],arr[j]));
          ans.push_back(temp);
         }
      }
   }
   sort(ans.begin(),ans.end());
   return ans;
}