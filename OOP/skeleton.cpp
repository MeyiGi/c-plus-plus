#include <iostream>
#include <string>
#include <list>
using namespace std;

class Person
{
public:
    string name;
    int age;

    Person(string name = "No name", int age = 0) : name(name), age(age) {}
};

class Student : public Person
{
private:
    short scholarship;
    

public:
    // Constrictor
    Student(string name = "No name", int age = 0, int scholarship = 0)
        : Person(name, age), scholarship(scholarship) {}

    bool operator==(const Student &student) const
    {
        return (name == student.name && age == student.age && scholarship == student.scholarship);
    }

    // Setters
    void setScholarship(short scholarship)
    {
        this->scholarship = scholarship;
    }

    // Getters
    short getScholarship()
    {
        return scholarship;
    }

    // Destructor
    ~Student()
    {
        cout << "Destructor making something" << endl;
    }
};

class MyCollection
{
public:
    list<Student> students;

    void operator+=(Student &student)
    {
        this->students.push_back(student);
    }
    void operator-=(Student &student)
    {
        this->students.remove(student);
    }
};

// cout operators for classes
ostream &operator<<(ostream &COUT, Student &student)
{
    cout << "Name: " << student.name << endl;
    cout << "Age: " << student.age << endl;
    cout << "Scholarship: " << student.getScholarship() << endl;

    cout << endl;
    return COUT;
}

ostream &operator<<(ostream &COUT, MyCollection &collection)
{
    for (Student &student : collection.students)
    {
        COUT << student;
    }
}

int main()
{
    Student x{"Daniel", 19, 4800};
    cout << x;
    return 0;
}
