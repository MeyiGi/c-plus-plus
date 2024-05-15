#include <iostream>
using namespace std;

class arrayException
{
private:
    const char *error;

public:
    arrayException(const char *error = "Exception")
    {
        this->error = error;
    }
    const char *getError()
    {
        return error;
    }
};