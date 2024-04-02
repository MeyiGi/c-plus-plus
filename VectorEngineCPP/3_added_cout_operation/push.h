void Vector::push(int val)
{
    if (tos >= size)
    {
        size *= 2;
        int *newArr = new int[size];
        for (int i = 0; i < tos; i++)
        {
            newArr[i] = arr[i];
        }
        for (int i = tos; i < size - 1; i++)
        {
            newArr[i] = 0;
        }
        delete[] arr;
        arr = newArr;
    }
    arr[tos] = val;
    tos++;
}