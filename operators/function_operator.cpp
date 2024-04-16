#include <iostream>
using namespace std;

class Mark
{
private:
    int mark;

public:
    Mark(int x) : mark(x) {}

    int operator()()
    {
        mark = 10;
        return mark;
    }
};

int main()
{
    Mark x{100};
    cout << x();
    return 0;
}