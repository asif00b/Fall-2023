#include<iostream>
#include<string>
using namespace std;

class Student
{
public:
    string name;
    int id;
    string course;
    string section;

    // Default constructor
    Student()
    {
        name = "John";
        id = 123456;
        course = "ECSE";
        section = "D";
    }
};

int main()
{
    Student you;

    cout << "Name: " << you.name << endl;
    cout << "ID: " << you.id << endl;
    cout << "Course: " << you.course << endl;
    cout << "Section: " << you.section << endl;

    return 0;
}
