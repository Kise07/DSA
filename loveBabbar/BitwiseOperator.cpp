#include <iostream>
using namespace std;

int main() {

    int a = 4, b = 6;

    cout << " a&b: " << (a&b) << endl;
    cout << " a|b: " << (a|b) << endl;
    cout << " ~a: " << ~a << endl;
    cout << " a^b: " << (a^b) << endl;

    // Left | Right Shifting:

    cout << (17 >> 1) << endl; // R
    cout << (17 >> 2) << endl; // R
    cout << (19 << 1) << endl; // L
    cout << (21 << 2) << endl; // L
}