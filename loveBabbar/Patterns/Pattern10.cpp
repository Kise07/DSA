#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int row = 1;
    /* Output: 5
    1 
    2 1 
    3 2 1 
    4 3 2 1 
    5 4 3 2 1
    */
    while(row <= n) {

        int col = 1;
        while(col <= row) {

            cout << (row - col + 1) << " "; // reverse of (n - j + 1) Patt3Que
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}