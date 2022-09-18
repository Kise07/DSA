#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int row = 1;
    /* Output: 5
    x x x x x   
    x x x x     
    x x x       
    x x         
    x    
    */
    while(row <= n) {

        // stars print karlo
        int stars = n - row + 1;
        while(stars) {

            cout << "x" << " ";
            stars--;
        }

        // space print karlo
        int col = 1;
        while(col <= row) {

            cout << "  ";
            col++;
        }
        cout << endl;
        row++;
    }
}