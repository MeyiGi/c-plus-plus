#include <iostream>
using namespace std;

class Mark
{
public:
    int mark;

public:
    Mark(int mark = 0) : mark(mark) {}

    friend void operator+=(Mark &x, int y);
    friend void operator-=(Mark &x, int y);
};

void operator+=(Mark &x, int y)
{
    x.mark += y;
}
void operator-=(Mark &x, int y)
{
    x.mark -= y;
}

int main()
{
    Mark a{60};
    cout << a.mark << endl;
    a += 25;
    cout << a.mark << endl;
    a -= 15;
    cout << a.mark << endl;
    return 0;
}