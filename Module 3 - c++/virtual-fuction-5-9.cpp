#include <iostream>

using namespace std;

class A
{
    string className = "A";
    int classId = 1;

public:
    virtual string getClassName()
    {
        return className;
    }
};

class B : A
{
    string className = "B";
    int classId = 2;
    bool isClassDerived = true;

public:
    bool isClassBDerived()
    {
        return isClassDerived;
    }
    string getClassName() override
    {
        return className;
    }
};

int main()
{

    A a;
    B b;

    cout << a.getClassName();
    cout << b.isClassBDerived();
    cout << b.getClassName();

    return 0;
}