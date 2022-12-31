#include <iostream>
using namespace std;

// Classes are selfMade datatypes with attribute. They are Templates
class Book { // class className{_,_}; [Making Classes]
    public:
        // attributes
        string title;
        string author;
        int pages;
        
// Constructor Functions: className(func) {attributes = funcVariables}
        Book() { // another ex for no value in attributes
            title = "no title";
            author = "no author";
            pages = 0;
        }
        // most commonly used Constructor Functions:-
        Book(string aTitle, string aAuthor, int aPages) {
            title = aTitle;
            author = aAuthor;
            pages = aPages;
        }
};

int main() {

    // Objects are these selfMade datatypes Variables to access its attributes using (.) operator
    // ** Using Constructor Fucntions to minimize the long code into short.
    Book book1("Harry Potter", "JK Rowling", 500); // class object; [Making Objects]
                // Object Attributes here

    Book book2("Lord of the Rings", "Tolkein", 700);

    Book book3;

    cout << book2.title; // Lord of the Rings
    /*
    cout << book3.title;
    // no title
    */
    
    return 0;
}