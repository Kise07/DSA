// Working with Strings
#include <iostream>
using namespace std;

int main()
{
    string phrase = "Giraffe Academy";
    // cout << phrase; - simple output
    
    // String function
    cout << phrase.length() << endl; // for no.of character in string
    cout << phrase[2] << endl; // indexing a string
    phrase[0] = 'B'; // modify a character in string
    cout << phrase << endl;
    cout << phrase.find("Academy", 0) << endl; // find(string, position)
    cout << phrase.substr(8, 3) << endl; // substr(start pos, end pos) can also store it in another variable
    
    return 0;
}