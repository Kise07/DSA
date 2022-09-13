#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int row = 1;
    /* Output: 5
    1 
    2 3 
    3 4 5 
    4 5 6 7 
    5 6 7 8 9 
    */
    while(row <= n) {

        int col = 1;
        // Method-1 initialization
        // int value = row; 
        while(col <= row) {
            
            // Method - 1
            // cout << value;
            // value = value + 1;

            // Method - 2
            cout << row + col - 1 << " ";
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}