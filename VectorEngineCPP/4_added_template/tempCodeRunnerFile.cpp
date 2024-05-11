ostream &operator<<(ostream &COUT, Vector &vector)
{
    cout << "{ ";
    for (int i = 0; i < vector.tos; i++)
    {
        cout << vector[i] << " ";
    }
    cout << "} " << endl;

    return COUT;
}