#include <iostream>
using namespace std;

int main() {

    int a = 3;
    cout << a << endl;

    if(true) {
        int b = 5;
        cout << b << endl;
    }

    int b = 1;
    cout << b << endl;

    // int b = 3;

    cout << b << endl;
    int i = 8;
    for(; i<8; i++) {
        cout <<" HI "<< endl;
    }

    // same name in same block -> X, but different block with same name -> Works
    if(1) { // if name is not defined in the block it'll search whole block for same name -> Works
        int b;
        if(1) {
            int b;
            if(1) {
                cout << b << endl;
            }
        }
    }
}