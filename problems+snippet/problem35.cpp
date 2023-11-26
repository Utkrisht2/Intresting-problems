/*You are given a standard 8×8 chessboard which has exactly 2 rooks on it and no other pieces. The rows are numbered 1 to 8 from bottom to top, 
and the columns are numbered 1 to 8 from left to right. The cell at the intersection of the i-th column and j-th row is denoted (i,j).
Given the initial positions of the rooks in the form of coordinates (X1,Y1) and (X ,Y ), you need to tell whether the 2 rooks currently attack each other or not. 
Assume, each square can contain at most one piece.
Rooks can only travel in straight lines along the row or column they are placed at, and can't jump over other pieces.*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x1, y1, x2, y2;
	    cin>>x1>>y1>>x2>>y2;
	    if(x1==x2 || y1==y2){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}