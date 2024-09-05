#include <iostream>

using namespace std;

// class B;

class A
{
    string name = "Class A";
    int id = 132;

    string getName()
    {
        return name;
    }

    friend class B;

    // public:
    //     bool isLoggedIn()
    //     {
    //         B b;
    //         return b.isLoggedIn;
    //     }
};

class B
{
public:
    bool isLoggedIn = false;

    int getId(A &aaaa)
    {
        return aaaa.id;
    }

    // friend class A;
};

int main()
{
    // A a;
    // cout << a.id;

    B b;
    A a;
    cout << b.getId(a);

    // A a;
    // cout << a.isLoggedIn();

    return 0;
}