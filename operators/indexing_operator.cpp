#include <iostream>
using namespace std;

class Mark
{
private:
    int objects[3];

public:
    Mark(int sub1, int sub2, int sub3)
    {
        objects[0] = sub1;
        objects[1] = sub2;
        objects[2] = sub3;
    }

    int &operator[](int pos)
    {
        return objects[pos];
    }
};

int main()
{
    Mark x{10, 90, 80};
    x[0] = 100;
    cout << x[0];
    return 0;
}