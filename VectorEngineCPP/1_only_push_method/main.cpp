#include <iostream>
using namespace std;

class Vector {
public:
    int size = 1;
    int tos = 0;
    int* arr = new int[size];

    void push(int val) {
        if (tos >= size) {
            size *= 2;
            int* newArr = new int[size];
            for (int i = 0; i < tos; i++) {
                newArr[i] = arr[i];
            }
            delete[] arr;
            arr = newArr;
        }
        arr[tos] = val;
        tos++;
    }
    // Indexing operator for element access
    int& operator[](int index) {
        if (index >= 0 && index < tos) {
            return arr[index];
        } else {
            cerr << "Index out of bounds" << endl;
            exit(EXIT_FAILURE);
        }
    }
    ~Vector() {
        delete[] arr;
    }
};

int main() {
    Vector myVector;
    myVector.push(1);
    myVector.push(2);
    myVector.push(3);

    // Вывод элементов вектора
    for (int i = 0; i < 3; ++i) {
        cout << myVector[i] << " ";
    }

    return 0;
}
