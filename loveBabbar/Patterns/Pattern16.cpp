#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int row = 1;
    char ch = 'A';
    /* Output: 3
    A 
    B C 
    D E F 
    */
    while(row <= n) {

        int col = 1;
        
        while(col <= row) {

            cout << ch << " ";
            ch = ch + 1;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}