#include <iostream>
using namespace std;

class Mark
{
public:
    int mark;

    Mark operator++()
    {
        mark++;
        return *this;
    }
    friend Mark operator--(Mark x)
    {
        (x.mark)++;
        return x;
    }
};

int main()
{
    Mark x{79};
    cout << x.mark << " " << (++x).mark << " " << --x.mark;
    return 0;
}