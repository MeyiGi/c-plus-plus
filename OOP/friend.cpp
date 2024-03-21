#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Employee;
class Pensioner;
class Student;

class Student
{
private:
    string name;
    int scholarship;

    friend void equal_money(Student, Employee, Pensioner);

public:
    Student() : name(), scholarship() {}
    Student(string name, int scholarship) : name(name), scholarship(scholarship) {}
};

class Employee
{
private:
    string name;
    int salary;

    friend void equal_money(Student, Employee, Pensioner);

public:
    Employee() : name(), salary() {}
    Employee(string name, int salary) : name(name), salary(salary) {}
};

class Pensioner
{
private:
    string name;
    int pension;

    friend void equal_money(Student, Employee, Pensioner);

public:
    Pensioner() : name(), pension() {}
    Pensioner(string name, int pension) : name(name), pension(pension) {}
};

void equal_money(Student student, Employee employee, Pensioner pensioner)
{
    bool emp, std, pns;

    if (student.scholarship == employee.salary)
    {
        cout << "Student: " << student.name << endl;
        cout << "Employee: " << employee.name << endl;
        if (student.scholarship == pensioner.pension)
        {
            cout << "Pensioner: " << pensioner.name << endl;
        }
        cout << "Have similar salary: " << student.scholarship;
        cout << "\n\n";
    }
    else if (employee.salary == pensioner.pension)
    {
        cout << "Employee: " << employee.name << endl;
        cout << "Pensioner: " << pensioner.name << endl;
        if (employee.salary == student.scholarship)
        {
            cout << "Student: " << student.name << endl;
        }
        cout << "Have similar salary: " << employee.salary;
        cout << "\n\n";
    }
    else if (pensioner.pension == student.scholarship)
    {
        cout << "Pensioner: " << pensioner.name << endl;
        cout << "Student: " << student.name << endl;
        if (pensioner.pension == employee.salary)
        {
            cout << "Employee: " << employee.name << endl;
        }
        cout << "Have similar salary: " << pensioner.pension;
        cout << "\n\n";
    }
    else
    {
        cout << "No one have similar salary\n\n";
    }
};

int main()
{
    Student x[4]{
        {"Daniel", 12500},
        {"Ayturgan", 10800},
        {"Alpeyim", 7600},
        {"Eldos", 12500},
    };
    Employee y[3]{
        {"Beksultan", 8000},
        {"Bayanbek", 12500},
        {"Myrzayim", 7600},
    };
    Pensioner z[2]{
        {"Asan", 7600},
        {"Esen", 8000}};

    equal_money(x[1], y[0], z[0]);
    equal_money(x[3], y[1], z[1]);
    equal_money(x[0], y[2], z[0]);
    equal_money(x[2], y[1], z[0]);
    equal_money(x[2], y[2], z[0]);

    return 0;
}