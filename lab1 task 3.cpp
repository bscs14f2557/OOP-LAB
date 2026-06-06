/* Experiment: 3
Create a structure called Employee that contains two members: an employee number (type int) and the
employee’s compensation (in dollars; type float). Ask the user to fill in this data for three employees, store it in
three variables of type struct Employee, and then display the information for each employee. Use a seperate
display function for the information display.*/

#include <iostream>
using namespace std;

// Making the structure
struct Employee {
    int empNumber;
    float compensation;
};

// This is the separate function to display the data
void showData(Employee e) {
    cout << "ID: " << e.empNumber << " | Salary: $" << e.compensation << endl;
}

int main() {
    // Creating 3 employee variables
    Employee emp1, emp2, emp3;

    // Getting input for Employee 1
    cout << "Enter ID and Salary for Emp 1: ";
    cin >> emp1.empNumber >> emp1.compensation;

    // Getting input for Employee 2
    cout << "Enter ID and Salary for Emp 2: ";
    cin >> emp2.empNumber >> emp2.compensation;

    // Getting input for Employee 3
    cout << "Enter ID and Salary for Emp 3: ";
    cin >> emp3.empNumber >> emp3.compensation;

    // Displaying the outputs using the function
    cout << "\n--- Employee Results ---" << endl;
    showData(emp1);
    showData(emp2);
    showData(emp3);

    return 0;
}