#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int row = 1;
    /* Output: 5
    A 
    B C 
    C D E 
    D E F G 
    E F G H I 
    */
    while(row <= n) {

        int col = 1;

        while(col <= row) {

            char ch = 'A' + row + col - 2;
            cout << ch << " ";
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}