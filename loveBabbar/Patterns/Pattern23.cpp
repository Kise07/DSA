#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int row = 1;
    /* Output: 5
    1 2 3 4 5 
      2 3 4 5 
        3 4 5 
          4 5 
            5
    */
    while(row <= n) {

        int col = n, spaces = 1, count = row;
        // spaces print karlo
        while(spaces <= row - 1) {

            cout << "  ";
            spaces++;
        }
        // stars print karlo
        while(col >= row) {

            cout << count << " ";
            count++;
            col--;
        }
        cout << endl;
        row++;
    }
}