/*They both love badminton.It is known that badminton courts are located at every integer point.
They want to find a court such that the maximum distance travelled by either of them is minimized.
Formally, suppose they choose the badminton court at position Z. You need to find the minimum value of 
max(∣X−Z∣,∣Y−Z∣) across all possible choices of Z. Here, ∣X∣ denotes absolute value of X.
Report this minimum value.*/

#include <iostream>
using namespace std;

	int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int x, y;
	    cin >> x >> y;
	    int z = (x + y) / 2;
	    cout << max(abs(x - z), abs(y - z)) << endl;
	}
	return 0;
}
