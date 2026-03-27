#include<iostream>
using namespace std;
class Student {
	string firstname, lastname, sclass;
	int rollnum;
	char grade;
	float marks;
public:
	Student() {
		rollnum = 000;
		firstname = "Ali";
		lastname = "Zafar";
		sclass = "bscs-b";
		marks = 0.0;
		grade = 'F';
	}

	Student(int roll,string fn,string ln, string c,float m, char g) {
		
		rollnum = roll;
		firstname = fn;
		lastname = ln;
		sclass = c;
		marks = m;
		grade = g;
	}
	void DisplayClassData(Student& s)
	{
		cout << "Student Roll Number : " << rollnum << endl;
		cout << "Student First Name : " <<firstname  << endl;
		cout << "Student Last Name : " << lastname << endl;
		cout << "Student class : " << sclass << endl;
		cout << "Student Marks : " << marks << endl;
		cout << "Student Grade : " << grade << endl;
	}
};
int main()
{
	string firstname, lastname, sclass;
	int rollnum;
	char grade;
	float marks;
	cout << "Default Constructor : " << endl;
	Student s = Student();
	s.DisplayClassData(s);
	cout << "Enter Roll Number : ";
	cin >> rollnum;
	cout << "Enter First Name : ";
	cin >> firstname;
	cout << "Enter Last Name : ";
	cin >> lastname;
	cout << "Enter Marks : ";
	cin >> marks;
	cout << "Enter Grade : ";
	cin >> grade;
	cout << "Enter Class : ";
	cin >> sclass;
	Student s1 = Student(rollnum, firstname, lastname, sclass, marks, grade);
	cout << "Parameterized Constructor : " << endl;
	s1.DisplayClassData(s1);

	cout << "Copy Constructor : " << endl;
	Student s2 = Student(s1);
	s2.DisplayClassData(s2);

}