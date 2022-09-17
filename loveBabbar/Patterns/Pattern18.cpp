#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int row = 1;
    /* Output: 5
    E 
    D E 
    C D E 
    B C D E 
    A B C D E 
    */
    while(row <= n) {

        int col = 1;
        char start = 'A' + n - row; // New Formula / Outside in here! LOOk:)

        while(col <= row) {

            cout << start << " ";
            start = start + 1;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}