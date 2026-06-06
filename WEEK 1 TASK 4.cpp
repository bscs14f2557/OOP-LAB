/*. Experiment: 4
Write a program that declares a structure based on the in the figure in exercise 01. This time you will declare
three instances of the entity student and shall initialize the three instances with the data shown in the table below. You have to find the total marks of the students in all of the student instances.
6 Within the body of this main function do the following
 Declare three instances of the student structure
student st1, st2, st3, st4;  Initialize each of the instance with the data shown in the table  Access the courseMarks of each instance step by step and add them all together and save the result in a
new integar named totalMarks.  Display the total marks of the students at the end of the program. */

#include <iostream>
using namespace std;


struct Student {
    int studentID;
    string studentName;
    string courseID;
    int courseMarks;
};

int main() {
    
    Student s1, s2, s3, s4;

   
    s1.studentID = 20;
    s1.studentName = "Ahmad";
    s1.courseID = "CS-201";
    s1.courseMarks = 17;

    
    s2.studentID = 21;
    s2.studentName = "Hassan";
    s2.courseID = "CS-201";
    s2.courseMarks = 18;

    
    s3.studentID = 22;
    s3.studentName = "Jamil";
    s3.courseID = "CS-201";
    s3.courseMarks = 19;

    
    s4.studentID = 23;
    s4.studentName = "Umair";
    s4.courseID = "CS-201";
    s4.courseMarks = 13;

    
    int totalMarks = s1.courseMarks + s2.courseMarks + s3.courseMarks + s4.courseMarks;

    
    cout << "Total Marks of all students: " << totalMarks << endl;

    return 0;
}