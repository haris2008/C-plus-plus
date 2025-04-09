#include <iostream>
using namespace std;

class Movie {
private:
    string rating;
public:
    string title;
    string direction;

    Movie(string aTitle, string aDirection, string aRating) {
        title = aTitle;
        direction = aDirection;
        setRating(aRating);
    }

    void setRating(string aRating) {
        if (aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "R" || aRating == "NR") {
            rating = aRating;
        } else {
            rating = "NR";
        }
    }

    string getRating() {
        return rating;
    }
};

int main() {
    Movie avengers("The Avengers", "Joss Whedon", "PG-13");
    avengers.setRating("Dog");
    cout << avengers.getRating();
    return 0;
}

