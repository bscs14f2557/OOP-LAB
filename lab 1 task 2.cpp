/*Experiment: 2
Create a structure of type Date that contains three members: the month, the day of the month, and the year, all of
type int. (Or use day-month-year order if you prefer.) Have the user enter a date in the format 12/31/2001, store
it in a variable of type struct Date, then retrieve the values from the variable and print them out in the same
format. */

#include <iostream>
#include <stdio.h>
using namespace std;

struct Date
{
    int month;
    int day;
    int year;
};

int main()
{
    Date d;

    scanf("%d/%d/%d", &d.month, &d.day, &d.year);

    cout << d.month << "/" << d.day << "/" << d.year << endl;

    return 0;
}