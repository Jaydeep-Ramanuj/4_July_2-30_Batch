#include <iostream>

using namespace std;

class Person
{
public:
    string name;
    int age;
    bool isLoggedIn;

    Person(
        string name_, int age_, bool isLoggedIn_)
    {
        name = name_;
        age = age_;
        isLoggedIn = isLoggedIn_;
    }
};

Person getPersonDetail()
{
    string name;
    int age;
    bool isLoggedIn;
    cout << "Enter your name :";
    cin >> name;
    cout << "Enter your age :";
    cin >> age;
    cout << "Are you logged In :";
    cin >> isLoggedIn;

    Person person(name, age, isLoggedIn);

    return person;
}

int main()
{
    Person user = getPersonDetail();
    cout << user.age;

    return 0;
}