#include <iostream>
using namespace std;

class Payroll
{
private:
    double payRate;
    double hoursWorked;
    double totalPay;

public:
    Payroll()
    {
        payRate = 500;   // hourly pay rate
        hoursWorked = 0;
        totalPay = 0;
    }

    void setHours(double h)
    {
        if (h <= 60)
            hoursWorked = h;
        else
            hoursWorked = 0;
    }

    void calculatePay()
    {
        totalPay = payRate * hoursWorked;
    }

    double getTotalPay()
    {
        return totalPay;
    }
};

int main()
{
    Payroll emp[7];
    double hours;

    for (int i = 0; i < 7; i++)
    {
        cout << "Enter hours worked by Employee "
            << i + 1 << ": ";
        cin >> hours;

        while (hours > 60)
        {
            cout << "Hours cannot be greater than 60. Enter again: ";
            cin >> hours;
        }

        emp[i].setHours(hours);
        emp[i].calculatePay();
    }

    cout << "\nGross Pay of Employees\n";

    for (int i = 0; i < 7; i++)
    {
        cout << "Employee " << i + 1
            << " Pay = " << emp[i].getTotalPay()
            << endl;
    }

    return 0;
}