#include <iostream>

using namespace std;

// Inheritance, it is a mechanism using which  we can pass data members and data functions to another class

// Parent class / Base class, it is class in which we've already implemented some data members and member function and we want it to be inherited in some other class

class base
{
public:
    string name = "something";

    string getName()
    {
        return name;
    }
};
// child class / derived class / sub class, it is class in which you want to use already made data members and functions of parent class and want to make something of your own

class derived : public base
{
public:
    int age = 45;

    int getAge()
    {
        return age;
    }
};

int main()
{
    derived d;
    base b;
    cout << "Age: " << d.getAge() << endl;
    cout << "Age: " << d.age << endl;
    cout << "Name: " << b.name << endl;

    cout << "Name: " << d.name << endl;
    cout << "Name: " << d.getName() << endl;

    return 0;
}