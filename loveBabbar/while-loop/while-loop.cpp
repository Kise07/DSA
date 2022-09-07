#include <iostream>
using namespace std;

int main() {

    /*
    // Print 1-n
    int n;
    cin >> n;

    int i = 1;

    while(i<=5) {
        cout << i << " ";
        i = i + 1;
    }
    */

    // Print sum of n
    int n;
    cin >> n;

    int i = 1;
    int sum = 0;

    while(i <= n) {
        sum = sum + i;
        i = i + 1;
    }

    cout << "Value of sum is: " << sum << endl;

}