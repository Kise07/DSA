#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int row = 1;
    /* Output: 5
            * 
          * * 
        * * * 
      * * * * 
    * * * * * 
    */
    while(row <= n) {

        // space print karlo
        int space = n - row;
        while(space) {
            cout << "  "; // 2 space for spacing
            space = space - 1;
        }
        
        // stars print karlo
        int col = 1;
        while(col <= row) {
            cout << "*" << " "; // spacing done!
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}