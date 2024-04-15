#include <iostream>
using namespace std;

class Mark
{
public:
    int practical;
    int theoretical;

public:
    Mark(int practical, int theoretical)
    {
        this->practical = practical;
        this->theoretical = theoretical;
    }

    Mark operator-(Mark x)
    {
        this->practical -= x.practical;
        this->theoretical -= x.theoretical;

        return *this;
    }
};

int main()
{
    Mark a{10, 20}, b{30, 40};

    Mark c = a - b;

    cout << c.practical << " " << c.theoretical;
    return 0;
}