#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int row = 1;
    /* Output: 5
    1 1 1 1 1 
      2 2 2 2 
        3 3 3 
          4 4 
            5 
    */
    while(row <= n) {

        int col = n, spaces = 1;
        // space print karlo
        while(spaces <= row - 1) {

            cout << "  ";
            spaces++;
        }
        // stars print karlo
        while(col >= row) {

            cout << row << " ";
            col--;
        }
        cout << endl;
        row++;
    }
}