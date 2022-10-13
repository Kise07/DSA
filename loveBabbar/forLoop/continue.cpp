#include <iostream>
using namespace std;

int main() {
    
    // continue keyword demo program
    for(int i = 0; i < 5; i++) {

        cout << " Hi " << endl;
        cout << " Hey " << endl;
        continue;
        // unreachable by using continue keyword
        cout << " Reply toh karde " << endl;
    }
}