#include <iostream>
using namespace std;

int main() {
    // Output: 1%
    int a, b = 1;
    a = 10;
    if (++a)
        cout << b;
    else 
        cout << ++b;
}