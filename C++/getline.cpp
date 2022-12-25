#include <iostream>
using namespace std;

int main() {

    // Can take:- Double, Char but not Strings
    // int age;
    // cout << "Enter your age: ";
    // cin >> age;

    // cout << "You are " << age << " years old";

    // for Strings:- Use "getline(cin, var);"
    string name;
    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Hello! " << name;
}