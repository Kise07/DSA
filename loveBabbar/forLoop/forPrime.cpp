#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;

    // isPrime after forloop to print
    bool isPrime = 1;

    // for-loop to check no is divisible by any no.
    for(int i = 2; i < n; i++) {

        // rem = 0, Not a Prime
        if(n%i == 0) {
            // cout <<" Not a Prime Number "<< endl;
            isPrime = 0;
            break; // not to divide further after checking 0 or not
        }
    }

    if(isPrime == 0) {
        cout <<" Not a Prime Number "<< endl;
    }
    else 
    {
        cout <<" is a Prime Number "<< endl;
    }
}