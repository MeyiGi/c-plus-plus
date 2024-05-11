#include <iostream>
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
        cerr << "\n\nINDEX OUT OF BOUNDS!!!!\n\n";
        exit(EXIT_FAILURE);
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
    Vector<int> myVector, vector;
    myVector.push(1);
    myVector.push(2);
    myVector.push(3);
    cout << myVector << vector;
    return 0;
}

#include "push.h"
#include "pop.h"