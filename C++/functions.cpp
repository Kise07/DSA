#include <iostream>

using namespace std;

// 1-method:-
// void sayHi(string name, int age) {
//     cout << "Hello " << name << " you are " << age << endl;
// }

// 2-method:-
void sayHi(string name, int age);

int main() {

    sayHi("Mike", 60);
    sayHi("Tom", 45);
    sayHi("steve", 19);

    return 0;
}

void sayHi(string name, int age) {
    cout << "Hello " << name << " you are " << age << endl;
}