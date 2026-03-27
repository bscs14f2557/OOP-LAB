#include<iostream>
using namespace std;

class Travel {
    int km;
    int hrs;

public:
    void input() {
        int k;
        int h;
        cout << "Enter km: ";
        cin >> k;
        cout << "Enter hrs: ";
        cin >> h;

        km = k;
        hrs = h;
    }

    void show() {
        cout << "Kilometers: " << km << endl;
        cout << "Hours: " << hrs << endl;
    }

    void add(Travel t) {
        int total_km = km + t.km;
        int total_hrs = hrs + t.hrs;

        cout << "\nAfter Addition:\n";
        cout << "Total Kilometers: " << total_km << endl;
        cout << "Total Hours: " << total_hrs << endl;
    }
};

int main() {
    Travel t1, t2;

    t1.input();
    t2.input();

    t1.add(t2);

    t1.show();
    t2.show();

    return 0;
}