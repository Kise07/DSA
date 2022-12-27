#include <iostream>
using namespace std;

double cube(double num) {
    // 1-Method
    // double result = num * num * num;
    // return result;

    // 2-Method
    return num * num * num;
}

int main() {

    // 1-Method
    // double answer = cube(5.0);
    // cout << answer;

    // 2-Method
    cout << cube(5.0);

    return 0;
}