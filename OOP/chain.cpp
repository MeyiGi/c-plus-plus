#include <iostream>
#include <string>
using namespace std;

class MathOperations
{
public:
    long double x;

    MathOperations() : x(0){};
    MathOperations(long double initial) : x(initial) {}

    MathOperations plus(int x)
    {
        this->x += x;
        return *this;
    }
    MathOperations minus(int x)
    {
        this->x -= x;
        return *this;
    }
    MathOperations multiply(int x)
    {
        this->x *= x;
        return *this;
    }
    MathOperations divide(int y)
    {
        this->x /= x;
        return *this;
    }
};

int main()
{
    MathOperations x;

    cout << x.plus(5).minus(3).multiply(10).divide(2).x;

    return 0;
}
