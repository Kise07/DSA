#include <iostream>

using namespace std;

int main()
{
    // Method-1
    // before - "simple string of texts"
    // cout << "There once was a man named George" << endl;
    // cout << "He was 70 years old" << endl;
    // cout << "He liked the name George" << endl;
    // cout << "But did not like being 70" << endl;

    // Method-2
    // after - "dynamic string of texts"
    // string characterName = "Tom";
    // int characterAge;
    // characterAge = 50;
    // cout << "There once was a man named " << characterName << endl;
    // cout << "He was " << characterAge << " years old" << endl;  // Notice:🧐
    // cout << "He liked the name " << characterName << endl;
    // cout << "But did not like being " << characterAge << endl;

    // Method-3
    // after - "dynamic string of texts"
    string characterName = "Tom";
    int characterAge;
    characterAge = 50;
    cout << "There once was a man named " << characterName << endl;
    cout << "He was " << characterAge << " years old" << endl;  // Notice:🧐

    characterName = "Mike"; // - "Here half is modified"
    cout << "He liked the name " << characterName << endl;
    cout << "But did not like being " << characterAge << endl;

    return 0;
}