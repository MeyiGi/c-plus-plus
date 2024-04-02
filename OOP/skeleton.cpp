#include <iostream>
#include <string>
#include <list>
using namespace std;

class Student
{
private:
    string name;
    int age;
    short scholarship;

public:
    // Constrictor
    Student(string name = "No name", int age = 0, int scholarship = 0)
    {
        this->name = name;
        this->age = age;
        this->scholarship = scholarship;
    }
    // == operator
    bool operator==(const Student &student) const
    {
        return (name == student.name && age == student.age && scholarship == student.scholarship);
    }

    // Setters
    void setName(string name)
    {
        this->name = name;
    }
    void setAge(int age)
    {
        this->age = age;
    }
    void setScholarship(short scholarship)
    {
        this->scholarship = scholarship;
    }

    // Getters
    string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
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
    cout << "Name: " << student.getName() << endl;
    cout << "Age: " << student.getAge() << endl;
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
    return 0;
}
