#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int row = 1;
    /* Output: 3
    A B C 
    B C D 
    C D E 
    */
    while(row <= n) {

        int col = 1;
        
        while(col <= n) {
            
            char ch = 'A' + row + col - 2; // New Formula by add ['A' - 1] b.s, ['A' + i + j - 2]
            cout << ch << " ";
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}