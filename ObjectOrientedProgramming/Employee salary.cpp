#include<iostream>
#include<string>
using namespace std;

class Employee
{
private:
    string name;
    double salary;

public:

    void setName(string n)
    {
        name = n;
    }

    void setSalary(double s)
    {
        salary = s;
    }


    string getName()
    {
        return name;
    }

    double getSalary()
    {
        return salary;
    }

    double yearlySalary()
    {
        return salary * 12;
    }
};

int main()
{
    Employee emp;
    emp.setName("John Doe");
    emp.setSalary(5000);
    cout << "Name: " << emp.getName() << endl;
    cout << "Yearly Salary: " << emp.yearlySalary() << endl;

    return 0;
}
