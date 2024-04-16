#include <iostream>
using namespace std;

class Mark
{
public:
    int mark;

    Mark operator++(int garbage)
    {
        Mark temp = *this;
        mark++;
        return temp;
    }
    friend Mark operator--(Mark x, int garbage)
    {
        Mark temp = x;
        (x.mark)++;
        return temp;
    }
};

int main()
{
    Mark x{79};
    cout << x.mark << " " << x++.mark << " " << x++.mark;
    return 0;
}