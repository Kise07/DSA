#include <iostream>
using namespace std;

/* 1-
// Memory add of vars with Pointer (&vars):
    cout << "Age: " << &age << endl;
    cout << "Gpa: " << &gpa << endl;
    cout << "Name: " << &name << endl;
*/

int main() {
    
    // 2-
    int age = 19;
    int *pAge = &age; // pointer var for using address
    double gpa = 2.7;
    double *pGpa = &gpa; // pointer var
    string name = "Mike";
    string *pName = &name; // pointer var

/*
    // pointer var here [Pointer 'Reference']: pointer var
    cout << pAge; // 0x16b15b1a8
*/

    // 3- *var "Value" here [Pointer 'Dereferencing']: *var
    // cout << *pAge; // 19
    cout << *&gpa; // 2.7%
    
    return 0;
}