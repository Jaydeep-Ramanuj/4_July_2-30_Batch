#include <iostream>

using namespace std;

// interface basicFunctionalities{
//     void walk();
//     void talk();
//     void sleep();
//     void eat();
//     void sit();
// }

class basicFunctionalities
{
    virtual void walk();
    virtual void talk();
    virtual void sleep();
    virtual void eat();
    virtual void sit();
};

class A
{
    string name = "sanjay";
    int age = 12;

    string getName()
    {
        return name;
    }

public:
    virtual int getAge();
};

class B : public A
{
    int age = 23;

public:
    int getAge() override
    {
        return age;
    }
};

int main()
{
    B b;
    cout << b.getAge();

    return 0;
}