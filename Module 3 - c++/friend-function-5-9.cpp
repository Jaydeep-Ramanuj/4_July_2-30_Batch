#include <iostream>

using namespace std;

class A
{

    string name = "Some";
    int age = 12;
    bool isLoggedIn = false;

    string getName()
    {
        return name;
    }

    friend bool isEligibleForDrivingLicence();
};

bool isEligibleForDrivingLicence()
{
    A a;
    return a.age > 18 ? true : false;
}

int main()
{
    cout << isEligibleForDrivingLicence();

    return 0;
}