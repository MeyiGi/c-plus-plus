#include <iostream>
#include <string>
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
    int setAge()
    {
        return age;
    }
    short setScholarship()
    {
        return scholarship;
    }

    // Destructor
    ~Student()
    {
        cout << "Destructor of " << name << endl;
    }
};

int main()
{
    return 0;
}
