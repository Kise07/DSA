#include <iostream>
using namespace std;

int main() {

    char ch;
    cout << "Enter Character for check: " << endl;
    cin >> ch;

    if(ch >= 'a' && ch <= 'z') {
        cout << "This is Lowercase" << endl;
    }
    else if (ch >= 'A' && ch <= 'Z') {
        cout << "This is Uppercase" << endl;
    }
    else if (ch >= '0' && ch <= '9') {
        cout << "This is Numeric" << endl;
    }
}