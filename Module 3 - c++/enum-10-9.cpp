#include <iostream>

using namespace std;

enum level
{
    veryLow,
    low,
    medium,
    high,
    highest,
    extreme
};

int main()
{

    enum level temp = extreme;

    cout << temp;
    return 0;
}
