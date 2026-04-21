#include <iostream>
#include <string>
using namespace std;

class Date {
private:
    int month, day, year;

    // Array for month names
    string monthNames[12] = {
        "January", "February", "March", "April",
        "May", "June", "July", "August",
        "September", "October", "November", "December"
    };

public:
    // Constructor with validation
    Date(int m, int d, int y) {
        // Month validation
        if (m >= 1 && m <= 12)
            month = m;
        else {
            cout << "Invalid month! Setting to 1.\n";
            month = 1;
        }

        // Day validation
        if (d >= 1 && d <= 31)
            day = d;
        else {
            cout << "Invalid day! Setting to 1.\n";
            day = 1;
        }

        year = y;
    }

    // Format 1: 12/25/2014
    void format1() {
        cout << month << "/" << day << "/" << year << endl;
    }

    // Format 2: December 25, 2014
    void format2() {
        cout << monthNames[month - 1] << " " << day << ", " << year << endl;
    }
    // Format 3: 25 December 2014
    void format3() {
        cout << day << " " << monthNames[month - 1] << " " << year << endl;
    }
};

int main() {
    int m, d, y;
    cout << "Enter month: ";
    cin >> m;
    cout << "Enter day: ";
    cin >> d;
    cout << "Enter year: ";
    cin >> y;
    Date date(m, d, y);
    cout << "\nDifferent Formats:\n";
    cout << "                  " << endl;
    cout << "\n Format 1:\n";
    date.format1();
    cout << "                  " << endl;
    cout << "\n Format 2:\n";
    date.format2();
    cout << "                  " << endl;
    cout << "\n Format 3:\n";
    date.format3();
    return 0;
}