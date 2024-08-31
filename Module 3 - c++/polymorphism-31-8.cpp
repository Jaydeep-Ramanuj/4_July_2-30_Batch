#include <iostream>

using namespace std;

class A
{
public:
    string name = "sanjay";
    int age = 20;

    string getName()
    {
        return name;
    }
};

class B : public A
{
public:
    string name;
    int age;
    bool isEngineer;

    B()
    {
        name = "Varun";
        age = 32;
        isEngineer = false;
    }
    B(string name_, int age_)
    {
        name = name_;
        age = age_;
        isEngineer = false;
    }
    B(string name_)
    {
        name = name_;
        age = 23;
        isEngineer = false;
    }

    bool isPersonEngineer()
    {
        return isEngineer;
    }

    string getName()
    {
        return name;
    }

    void overload()
    {
        cout << "Overload 1";
    }
    void overload(int a)
    {
        cout << "Overload 2";
    }
    void overload(int a, int b)
    {
        cout << "Overload 3";
    }
};
int main()
{

    // A a;
    // B b("Pratik", 21);
    // B b("Sanket");
    // cout << "A name:" << a.getName() << endl;
    // cout << "B name:" << b.getName() << endl;
    // cout << "A Age:" << a.age << endl;
    // cout << "B Age:" << b.age << endl;

    B b;
    // b.overload();     // overload 1
    // b.overload(1);    // overload 2
    // b.overload(1, 6); // overload 3

    string str = "New";
    cout << str + "york" << endl;

    cout << 10 + 20 << endl;
    return 0;
}