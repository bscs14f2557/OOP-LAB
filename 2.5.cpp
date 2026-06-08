#include <iostream>
using namespace std;

struct Distance
{
    int feet;
    float inches;
};

struct Triangle
{
    Distance base;
    Distance height;
};

int main()
{
    Triangle t;

    cout << "Enter Base (feet inches): ";
    cin >> t.base.feet >> t.base.inches;

    cout << "Enter Height (feet inches): ";
    cin >> t.height.feet >> t.height.inches;

    float baseInches = (t.base.feet * 12) + t.base.inches;
    float heightInches = (t.height.feet * 12) + t.height.inches;

    float area = 0.5 * baseInches * heightInches;

    cout << "\nArea of Triangle = " << area << " square inches";

    return 0;
}