#include <iostream>
using namespace std;

class Vector
{
public:
    int size = 1;
    int tos = 0;
    int *arr = new int[size];

    void push(int val);
    int pop();

    // Indexing operator for element access
    int &operator[](int index)
    {
        if (index >= 0 && index < tos)
        {
            return arr[index];
        }
        cerr << "\n\nINDEX OUT OF BOUNDS!!!!\n\n";
        exit(EXIT_FAILURE);
    }

    ~Vector()
    {
        delete[] arr;
    }
};

int main()
{
    Vector myVector;
    myVector.push(1);
    myVector.push(2);
    myVector.push(3);
    int x = myVector.pop();
    cout << x << " ";
    // Вывод элементов вектора
    for (int i = 0; i < 3; ++i)
    {
        cout << myVector[i] << " ";
    }
    return 0;
}

#include "push.h"
#include "pop.h"