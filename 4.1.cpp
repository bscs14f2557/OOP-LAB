#include <iostream>
using namespace std;

class Employee
{
private:
    string name;
    int idNumber;
    string department;
    string position;

public:
    // Default Constructor
    Employee()
    {
        name = "";
        idNumber = 0;
        department = "";
        position = "";
    }

    // Constructor with Name and ID
    Employee(string n, int id)
    {
        name = n;
        idNumber = id;
        department = "";
        position = "";
    }

    // Constructor with all values
    Employee(string n, int id, string d, string p)
    {
        name = n;
        idNumber = id;
        department = d;
        position = p;
    }

    // Setters
    void setName(string n)
    {
        name = n;
    }

    void setId(int id)
    {
        idNumber = id;
    }

    void setDepartment(string d)
    {
        department = d;
    }

    void setPosition(string p)
    {
        position = p;
    }

    
    string getName()
    {
        return name;
    }

    int getId()
    {
        return idNumber;
    }

    string getDepartment()
    {
        return department;
    }

    string getPosition()
    {
        return position;
    }
};

int main()
{
    Employee e1("Susan Meyers", 47899, "Accounting", "Vice President");
    Employee e2("Mark Jones", 39119, "IT", "Programmer");
    Employee e3("Joy Rogers", 81774, "Manufacturing", "Engineer");

    cout << "Employee 1" << endl;
    cout << e1.getName() << endl;
    cout << e1.getId() << endl;
    cout << e1.getDepartment() << endl;
    cout << e1.getPosition() << endl;

    cout << "\nEmployee 2" << endl;
    cout << e2.getName() << endl;
    cout << e2.getId() << endl;
    cout << e2.getDepartment() << endl;
    cout << e2.getPosition() << endl;

    cout << "\nEmployee 3" << endl;
    cout << e3.getName() << endl;
    cout << e3.getId() << endl;
    cout << e3.getDepartment() << endl;
    cout << e3.getPosition() << endl;

    return 0;
}