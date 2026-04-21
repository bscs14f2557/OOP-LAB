#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int idNumber;
    string department;
    string position;

public:
    // Mutators (set functions)
    void setName(string n) {
        name = n;
    }

    void setIdNumber(int id) {
        idNumber = id;
    }

    void setDepartment(string d) {
        department = d;
    }

    void setPosition(string p) {
        position = p;
    }

    // Accessors (get functions)
    string getName() {
        return name;
    }

    int getIdNumber() {
        return idNumber;
    }

    string getDepartment() {
        return department;
    }

    string getPosition() {
        return position;
    }
};

// Function to display employee data
void displayEmployee(Employee e) {
    cout << "Name: " << e.getName() << endl;
    cout << "ID Number: " << e.getIdNumber() << endl;
    cout << "Department: " << e.getDepartment() << endl;
    cout << "Position: " << e.getPosition() << endl;
    cout << "-----------------------------" << endl;
}

int main() {
    // Create 3 objects
    Employee emp1, emp2, emp3;

    // Assign data (example data)
    emp1.setName("Ali");
    emp1.setIdNumber(101);
    emp1.setDepartment("IT");
    emp1.setPosition("Manager");

    emp2.setName("Sara");
    emp2.setIdNumber(102);
    emp2.setDepartment("HR");
    emp2.setPosition("Assistant");

    emp3.setName("Ahmed");
    emp3.setIdNumber(103);
    emp3.setDepartment("Finance");
    emp3.setPosition("Clerk");

    // Display data
    displayEmployee(emp1);
    displayEmployee(emp2);
    displayEmployee(emp3);

    return 0;
}