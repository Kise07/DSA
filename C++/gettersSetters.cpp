#include <iostream>
using namespace std;

class Movie {
    private: // access Specifier Private
        string rating;
    public:
        string title;
        string director;
        Movie(string aTitle, string aDirector, string aRating) {
            title = aTitle;
            director = aDirector;
            setRating(aRating);
        }
        // setter condition: 'Restrictions'
        void setRating(string aRating) {
            if(aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "R" || aRating == "NR") {
                rating = aRating;
            } else {
                rating = "NR";
            }
        }
        // getter condition: 'Private value Outputting'
        string getRating() {
            return rating;
        }
};

int main() {

    Movie avengers("The Avengers", "Joss Whedon", "PG-13");

    cout << avengers.getRating(); // check condition 'getRating'

    return 0;
}