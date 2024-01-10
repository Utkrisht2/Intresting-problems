//  Reverse bits

#include<bits/stdc++.h>

long reverseBits(long n) {

    long num = 0;

    for(int i = 31; i >= 0; i--){

        if(n == 0){

            break;

        }

        if(n&1)

        {

            num = num + 1*pow(2,i);

        }
        n = n >> 1;
    }
    return num;
}