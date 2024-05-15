#include <iostream>
#include "arrayException.h"
using namespace std;

template <typename T>
class Vector
{
public:
    int size = 1;
    int tos = 0;
    T *arr = new T[size];

    void push(T val);
    T pop();

    // Indexing operator for element access
    T &operator[](int index)
    {
        if (index >= 0 && index < tos)
        {
            return arr[index];
        }
        throw arrayException("Not valid index...");
    }

    ~Vector()
    {
        delete[] arr;
    }
};

template <typename T>
ostream &operator<<(ostream &COUT, Vector<T> &vector)
{
    cout << "{ ";
    for (int i = 0; i < vector.tos; i++)
    {
        cout << vector[i] << " ";
    }
    cout << "} " << endl;

    return COUT;
}

int main()
{
    try
    {
        Vector<int> myVector, vector;
        myVector.push(1);
        myVector.push(2);
        myVector.push(3);
        cout << myVector << vector;
        cout << myVector[4];
    }
    catch (arrayException x)
    {
        cout << x.getError();
    }

    return 0;
}

#include "push.h"
#include "pop.h"