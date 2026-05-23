#include <iostream>
using namespace std;

// Structure to store hours and minutes
struct DayWork {
    int hours;
    int minutes;
};

// Function to convert into total hours
double convertToHours(DayWork d) {
    return d.hours + (d.minutes / 60.0);
}

// Function to calculate wage
double calculateWage(DayWork week[], double rate) {
    double totalHours = 0;

    for (int i = 0; i < 5; i++) {
        totalHours += convertToHours(week[i]);
    }

    return totalHours * rate;
}

// Display function
void display(double wage) {
    cout << "Total Weekly Wage: " << wage << " euros" << endl;
}

int main() {
    DayWork week[5] = {
        {5, 35}, // Monday
        {6, 17}, // Tuesday
        {7, 18}, // Wednesday
        {4, 40}, // Thursday
        {3, 31}  // Friday
    };

    double rate = 11;

    double totalWage = calculateWage(week, rate);
    cout << "                                " << endl;
    display(totalWage);

    return 0;
}