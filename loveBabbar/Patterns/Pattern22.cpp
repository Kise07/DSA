#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int row = 1;
    /* Output: 5
            1 
          2 2 
        3 3 3 
      4 4 4 4 
    5 5 5 5 5 
    */
    while(row <= n) {

        int col = 1, spaces = 1;
        // spaces print karlo
        while(spaces <= n - row) {

            cout << "  ";
            spaces++;
        }
        // stars print karlo
        while(col <= row) {

            cout << row << " ";
            col++;
        }
        cout << endl;
        row++;
    }
}