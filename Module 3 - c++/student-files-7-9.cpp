#include <iostream>
#include <fstream>
using namespace std;
class Student
{

    string name;
    string course;
    int rollNumber;

public:
    Student(string name_, string course_, int rollNumber_)
    {
        name = name_;
        course = course_;
        rollNumber = rollNumber_;
    }
    void makeFile()
    {
        string file_name = name + ".txt";
        ofstream out_file(file_name, ios::app);
        out_file << "Name: " << name;
        out_file << "\nCourse: " << course;
        out_file << "\nRollNumber: " << rollNumber;
        out_file.close();
    }
};

int main()
{

    string name, course;
    int roll;

    cout << "Enter your name:";
    cin >> name;
    cout << "Enter your course:";
    cin >> course;
    cout << "Enter your Roll number:";
    cin >> roll;

    Student student(name, course, roll);
    student.makeFile();
    return 0;
}