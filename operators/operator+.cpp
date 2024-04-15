#include <iostream>
using namespace std;

class Mark
{
public:
    float practical;
    float theoretical;

public:
    Mark(float practical, float theoretical)
    {
        this->practical = practical;
        this->theoretical = theoretical;
    }

    Mark operator+(Mark x)
    {
        x.practical += this->practical;
        x.theoretical += this->theoretical;

        return x;
    }
};

int main()
{
    Mark a{10, 20}, b{30, 40};

    Mark c = a + b;

    cout << c.practical << " " << c.theoretical;

    return 0;
}