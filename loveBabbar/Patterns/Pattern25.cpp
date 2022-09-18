#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int row = 1;
    /* Output: 5
    1 2 3 4 5 5 4 3 2 1 
    1 2 3 4 * * 4 3 2 1 
    1 2 3 * * * * 3 2 1 
    1 2 * * * * * * 2 1 
    1 * * * * * * * * 1 
    */
    while(row <= n) {

        // 1st triangle - stars
        int col = n;
        while(col >= row) {
            cout << n - col + 1 << " "; // Stars Formula
            col = col - 1;
        }
        col = n;
        // 2nd triangle - spaces
        int space = 1;
        while(space <= 2 * row - 2) { // Space Formula
            cout << "*" << " ";
            space = space + 1;
        }
        // 3rd triangle - stars
        while(col >= row) {
            cout << col - row + 1 << " "; // Stars Formula
            col = col - 1;
        }
        cout << endl;
        row = row + 1;
    }
}