#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int row = 1;
    /* Output: 3
    A B C 
    A B C 
    A B C 
    */
    while(row <= n) {

        int col = 1;
        while(col <= n) {

            char ch = 'A' + col - 1;
            cout << ch << " ";
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}