#include <iostream>
using namespace std;

int main() {

    int a = 4, b = 6;
    /* Outpur: 
        a&b: 4
        a|b: 6
        ~a: -5
        a^b: 2
     */
    cout << " a&b: " << (a&b) << endl;
    cout << " a|b: " << (a|b) << endl;
    cout << " ~a: " << ~a << endl;
    cout << " a^b: " << (a^b) << endl;

    // 👊 Left | Right Shifting:
    /* Output: 
        8
        4
        38
        84
    */
    cout << (17 >> 1) << endl; // R
    cout << (17 >> 2) << endl; // R
    cout << (19 << 1) << endl; // L
    cout << (21 << 2) << endl; // L

    // 👆👇 Increment | Decrement:
    int i = 7;

    cout << (++i) << endl; // Pre-increment
    // 8
    cout << (i++) << endl; // Post-increment
    // 8 , i = 9
    cout << (i--) << endl; // Post-decrement
    // 9 , i = 8
    cout << (--i) << endl; // Pre-decrement
    // 7 , i = 7
}