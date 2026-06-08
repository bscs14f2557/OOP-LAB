#include <iostream>
using namespace std;

struct Student
{
    string name;
    int rollNo;
    int marks1, marks2, marks3;
};

int main()
{
    Student s;

    cout << "Enter Student Name: ";
    cin >> s.name;

    cout << "Enter Roll Number: ";
    cin >> s.rollNo;

    cout << "Enter Marks of Subject 1: ";
    cin >> s.marks1;

    cout << "Enter Marks of Subject 2: ";
    cin >> s.marks2;

    cout << "Enter Marks of Subject 3: ";
    cin >> s.marks3;

    int total = s.marks1 + s.marks2 + s.marks3;

    cout << "\nStudent Name: " << s.name << endl;
    cout << "Roll Number: " << s.rollNo << endl;
    cout << "Subject 1 Marks: " << s.marks1 << endl;
    cout << "Subject 2 Marks: " << s.marks2 << endl;
    cout << "Subject 3 Marks: " << s.marks3 << endl;
    cout << "Total Marks: " << total << endl;

    return 0;
}