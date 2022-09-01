// C++ Program to demonstrate local variables.
#include <iostream>
using namespace std;

class Student {
    public:
        void studentRollNo() {
            int rollNo = 20; //local variable rollNo
            rollNo += 5;
            cout << "The rollNo is: " << rollNo;
        }
};

int main() {
    Student s;
    s.studentRollNo();
    return 0;
}

// Output: The rollNo is: 25

// C++ Program to demonstrate instance variables.
#include <iostream>
using namespace std;

class Student {
    int rollNo; //instance variable
    public:
        void set_data() {
            rollNo = 20;
        }

        void display() {
            cout << "The rollNo is: " << rollNo;
        }
};

int main() {
    Student s;
    s.set_data();
    s.display();
    return 0;
}

// Output: The rollNo is: 20