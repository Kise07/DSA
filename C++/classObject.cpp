#include <iostream>
using namespace std;

// Classes are selfMade datatypes with attribute. They are Templates
class Book { // class className{_,_}; [Making Classes]
    public:
        // attributes
        string title;
        string author;
        int pages;
};

int main() {

// Objects are these selfMade datatypes Variables to access its attributes using (.) operator
    Book book1; // class object; [Making Objects]
    book1.title = "Harry Potter"; // object.attributes
    book1.author = "JK Rowling";
    book1.pages = 500;

    Book book2;
    book2.title = "Lord of the Rings";
    book2.author = "Tolkein";
    book2.pages = 700;
/*  
    Objects Attributes can also be Change like normal Variable:
    book2.title = "Hunger Games";
*/    

    cout << book2.title;
    
    return 0;
}