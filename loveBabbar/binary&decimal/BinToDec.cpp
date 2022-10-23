#include <iostream>
#include <math.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    int ans = 0;
    int i = 0; // iterations
    // while loop
    while(n != 0) {

        int digit = n%10; // single digits
        // checking if digit's bit is 1 or 0
        if(digit == 1) {
            ans = ans + pow(2, i);
        }

        n = n/10; // divide by 10 for other digits
        i++; // increment iteration
    }
    cout << ans << endl;
}