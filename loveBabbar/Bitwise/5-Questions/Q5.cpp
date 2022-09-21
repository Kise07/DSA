#include <iostream>
using namespace std;

int main() 
{
    /* Output:  1
                3 */
    int a = 1;
    int b = a++;
    int c = ++a;
    cout << b << endl;
    cout << c << endl;
}