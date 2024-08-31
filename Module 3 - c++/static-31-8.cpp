#include <iostream>

using namespace std;

class Person
{
public:
    static int userId;
    string name;
    int age;

    Person(string name_, int age_)
    {
        userId++;
        name = name_;
        age = age_;
    }

    static int getUserId()
    {
        return userId;
    }
};

int Person::userId = 0;

int main()
{
    Person p1("Jay", 12);
    cout << "User p1 ID:" << p1.getUserId() << endl;

    Person p2("Sanjay", 23);
    cout << "User p2 ID:" << p2.getUserId() << endl;

    Person p3("Ajay", 45);
    cout << "User p3 ID:" << p3.getUserId() << endl;
    return 0;
}