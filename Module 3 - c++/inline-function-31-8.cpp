#include <iostream>

using namespace std;

class A
{
    string name = "jay";

    inline string getName()
    {
        return name;
    }

public:
    string getYourName()
    {
        return getName();
    }
    string getYourFullName()
    {
        return getName();
    }
    string getYourUserName()
    {
        return getName();
    }
};

int main()
{

    return 0;
}