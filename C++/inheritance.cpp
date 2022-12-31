#include <iostream>
using namespace std;

// ** super-Class
class Chef
{
public:
    void makeChicken()
    {
        cout << "The chef makes yummy chicken" << endl;
    }
    void makeSalad()
    {
        cout << "The chef makes salad" << endl;
    }
    void makeSpecialDish()
    {
        cout << "The chef makes bbq ribs" << endl;
    }
};

// ** sub-Class: {'Inheritance'} from super-Class
class ItalianChef : public Chef
{
public:
    void makePasta() // ** sub-Class extending with different function here
    {
        cout << "The chef makes pasta" << endl;
    }
    void makeSpecialDish() // ** Overriding certain functions
    {
        cout << "The chef makes checken parm" << endl;
    }
};

int main()
{

    Chef chef;
    chef.makeSpecialDish();

    ItalianChef italianChef;
    italianChef.makeSpecialDish();

    return 0;
}