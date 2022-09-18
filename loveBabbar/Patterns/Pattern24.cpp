#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int row = 1;
    /* Output: 5
            1 
          1 2 1 
        1 2 3 2 1 
      1 2 3 4 3 2 1 
    1 2 3 4 5 4 3 2 1 
    */
    while(row <= n) {
        
        // 1st triangle of spaces
        int space = n - row;
        while(space) {
            
            cout << "  "; // 2 space for spacing
            space = space - 1;
        }

        // 2nd triangle of no.s
        int j = 1;
        while(j <= row) {

            cout << j << " ";
            j = j + 1;
        }

        // 3rd triangle of no.s
        int start = row - 1;
        while(start) {

            cout << start << " ";
            start = start - 1;
        }
        cout << endl;
        row = row + 1;
    }
}