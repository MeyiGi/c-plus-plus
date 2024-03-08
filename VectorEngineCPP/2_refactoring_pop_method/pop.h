int Vector::pop()
{
    if (tos < 0)
    {
        cerr << "\n\nNO ELEMENTS IN VECTOR!\n\n";
        exit(EXIT_FAILURE);
    }

    int temp = arr[--tos];
    arr[tos] = 0;
    return temp;
}
