/*Experiment: 1
Write a program that declares a structure based on the following entity shown in the box. The program must
declare and initialize an instance of the structure entity i.e. Student. The attributes of the entity are shown in oval shapes associated with the entity. Use the following data type for
the attributes of the student: ? integer for studentID

? char[] for studentName ? char [] for courscode ? char[] for courseName ? integer for courseMarks
Please the following data to initialize the student instance:*/

#include <iostream>
using namespace std;

struct Student
{
    int studentID;
    char studentName[20];
    char courseCode[10];
    char courseName[20];
    int courseMarks;
};

int main()
{
    Student s1 = { 20, "Ahmad", "02", "Programming", 7 };

    cout << "Student ID: " << s1.studentID << endl;
    cout << "Student Name: " << s1.studentName << endl;
    cout << "Course Code: " << s1.courseCode << endl;
    cout << "Course Name: " << s1.courseName << endl;
    cout << "Course Marks: " << s1.courseMarks << endl;

    return 0;
}