#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int row = 1;
    /* Output: 5
    * * * * * 
      * * * * 
        * * * 
          * * 
            * 
    */
    while(row <= n) {
        
        int col = n, spaces = 1;
        // spaces print karlo
        while(spaces <= row - 1) {
            
            cout << "  ";
            spaces = spaces + 1;
        }
        // stars print karlo
        while(col >= row) {

            cout << "*" << " ";
            col = col - 1;
        }
        cout << endl;
        row =  row + 1;
    }
}