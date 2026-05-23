#include <iostream>
#include <string>
using namespace std;

// structure
struct MovieData {
    string title;
    string director;
    int yearReleased;
    int runningTime; //mins
};

// Display data function
void displayMovie(MovieData movie) {
    cout << "Title: " << movie.title << endl;
    cout << "Director: " << movie.director << endl;
    cout << "Year Released: " << movie.yearReleased << endl;
    cout << "Running Time: " << movie.runningTime << " minutes" << endl;
    cout << "-----------------------------" << endl;
}

int main() {
    //  variables
    MovieData movie1, movie2;

    //  values to movie1
    movie1.title = "3 Bahadur";
    movie1.director = "Ali Raza";
    movie1.yearReleased = 2017;
    movie1.runningTime = 180;

    //  values to movie2
    movie2.title = "Titanic";
    movie2.director = "James Cameron";
    movie2.yearReleased = 1997;
    movie2.runningTime = 195;

    // Display both movies
    cout << "For 1st Movie : " << endl;
    cout << "                               " << endl;
    displayMovie(movie1);
    cout << "                               " << endl;
    cout << "For 2nd Movie : " << endl;
    cout << "                               " << endl;
    displayMovie(movie2);

    return 0;
}