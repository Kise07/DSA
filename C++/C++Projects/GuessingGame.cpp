#include <iostream>
using namespace std;

int main() {

    int secretNum = 7;
    int guess;

    while(secretNum != guess) {
        cout << "Enter guess: ";
        cin >> guess;
    }

    cout << "You Win!";

    return 0;
}