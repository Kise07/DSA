#include <iostream>
using namespace std;

// Example:- Exponent Function Using forLoop.
int power(int baseNum, int powNum) {
    int result = 1;
    for(int i = 0; i < powNum; i++) {
        result = result * baseNum;
    }
    return result;
}

int main() {

    cout << power(5, 3);

}