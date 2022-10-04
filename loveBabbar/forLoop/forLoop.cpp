#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter the value for n: " << endl;
    cin >> n;
    // Program for printing count from 1-n:
    cout << "Printing count from 1 to n: " << endl;
    // For-Loop:
    for(int i = 1; i <= n; i++) {
        cout << i << endl;
    }
    /* Output: 
    Enter the value for n: 
    7
    Printing count from 1 to n: 
    1
    2
    3
    4
    5
    6
    7
    */
}