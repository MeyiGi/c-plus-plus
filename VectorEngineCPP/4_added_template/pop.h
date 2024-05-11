template <typename T>
T Vector<T>::pop()
{
    if (tos < 0)
    {
        cerr << "\n\nNO ELEMENTS IN VECTOR!\n\n";
        exit(EXIT_FAILURE);
    }

    T temp = arr[--tos];
    arr[tos] = 0;
    return temp;
}