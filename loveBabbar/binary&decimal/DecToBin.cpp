#include <iostream>
#include <math.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    /* Output: 7
    Answer is: 111
    */
    int ans = 0; // answer part
    int i = 0; // iteration part
    // while loop
    while(n != 0) {

        int bit = n & 1; // single digits

        ans = (bit * pow(10, i) ) + ans; // formula Decimal-Binary

        n = n >> 1; // right shift by 1
        i++; // increment iteration by 1

    }

    cout <<" Answer is: "<< ans << endl;

}