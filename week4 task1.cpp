#include<iostream>
using namespace std;

class Employee {
private:
	string Name, Dept, Position;
	int idnum;

public:
	//default constructor
	Employee() {
		Name = "";
		Dept = "";
		Position = "";
		idnum = 0;
	}

	//constructor with two values
	Employee(string name, int id) {
		Name = name;
		Dept = "";
		Position = "";
		idnum = id;
	}

	//constructor with all values
	Employee(string name, string dept, string position, int id)
	{
		Name = name;
		Dept = dept;
		Position = position;
		idnum = id;
	}

	
	//getters
	string get_name()
	{
		return Name;
	}

	string get_dept()
	{
		return Dept;
	}

	string get_position()
	{
		return Position;
	}

	int get_id()
	{
		return idnum;
	}


};
int main()
{
	string n, pos, d;
	int ID;

	//taking user input
	cout << "Employee Name:";
	cin >> n;

	cout << "Employee Department:";
	cin >> d;

	cout << "Employee Position:";
	cin >> pos;

	cout << "Employee ID:";
	cin >> ID;

	Employee e1;
	Employee e2(n, ID);
	Employee e3(n, d, pos, ID);

	//For employee e1(default constructor)
	cout << "                                          " << endl;
	cout << "Default Constructor " << endl;
	cout<<"Employee Name : " << e1.get_name() << endl;
	cout<<"Employee Department : " << e1.get_dept() << endl;
	cout<<"Employee Position : " << e1.get_position() << endl;
	cout<<"Employee ID : " << e1.get_id() << endl;

	//For employee e2()
	cout << "                                          " << endl;
	cout << "Parameterized Constructor(e2) " << endl;
	cout << "Employee Name : " << e2.get_name() << endl;
	cout << "Employee Department : " << e2.get_dept()<< endl;
	cout << "Employee Position : " << e2.get_position() << endl;
	cout << "Employee ID : " << e2.get_id() << endl;

	//For employee e3
	cout << "                                          " << endl;
	cout << "Parameterized Constructor(e3) " << endl;
	cout << "Employee Name : " << e3.get_name() << endl;
	cout << "Employee Department : " << e3.get_dept() << endl;
	cout << "Employee Position : " << e3.get_position() << endl;
	cout << "Employee ID : " << e3.get_id() << endl;

	return 0;
}