/*Chef embarks on a journey starting from a town named S, containing a string of 8 uppercase English alphabets. His objective is to reach the destination known as CODETOWN.
If Chef is currently in town T1, then, with each move, Chef can transition to another town named T2, provided that either:
T2 is derived from T1 by replacing a consonant with another consonant, or;T2 is derived from T1 by replacing a vowel with another vowel.
Find whether Chef can reach CODETOWN in any number of moves.
Note that in the english alphabet, letters A, E, I, O, and U are considered as vowels and rest are considered as consonants.*/

#include <iostream>
using namespace std;

bool followsPattern(string s) {
    if (
        (s[0] != 'A' && s[0] != 'E' && s[0] != 'I' && s[0] != 'O' && s[0] != 'U') &&
        (s[1] == 'A' || s[1] == 'E' || s[1] == 'I' || s[1] == 'O' || s[1] == 'U') &&
        (s[2] != 'A' && s[2] != 'E' && s[2] != 'I' && s[2] != 'O' && s[2] != 'U') &&
        (s[3] == 'A' || s[3] == 'E' || s[3] == 'I' || s[3] == 'O' || s[3] == 'U') &&
        (s[4] != 'A' && s[4] != 'E' && s[4] != 'I' && s[4] != 'O' && s[4] != 'U') &&
        (s[5] == 'A' || s[5] == 'E' || s[5] == 'I' || s[5] == 'O' || s[5] == 'U') &&
        (s[6] != 'A' && s[6] != 'E' && s[6] != 'I' && s[6] != 'O' && s[6] != 'U') &&
        (s[7] != 'A' && s[7] != 'E' && s[7] != 'I' && s[7] != 'O' && s[7] != 'U')
    ) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string a;
        cin >> a;

        if (followsPattern(a)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}