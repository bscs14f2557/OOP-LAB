#include <iostream>
using namespace std;

struct Employee
{
    int empNo;
    float salary;
};

void display(Employee e)
{
    cout << "Employee Number: " << e.empNo << endl;
    cout << "Salary: " << e.salary << endl;
}

int main()
{
    Employee e1, e2, e3;

    cout << "Enter Employee 1 Number: ";
    cin >> e1.empNo;
    cout << "Enter Employee 1 Salary: ";
    cin >> e1.salary;

    cout << "\nEnter Employee 2 Number: ";
    cin >> e2.empNo;
    cout << "Enter Employee 2 Salary: ";
    cin >> e2.salary;

    cout << "\nEnter Employee 3 Number: ";
    cin >> e3.empNo;
    cout << "Enter Employee 3 Salary: ";
    cin >> e3.salary;

    cout << "\nEmployee 1 Information" << endl;
    display(e1);

    cout << "\nEmployee 2 Information" << endl;
    display(e2);

    cout << "\nEmployee 3 Information" << endl;
    display(e3);

    return 0;
}