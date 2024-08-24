#include <iostream>

using namespace std;

class base
{
private:
    int private_var = 10;

protected:
    int protected_var = 20;

public:
    int public_var = 30;
};

// class derived : public base
// class derived : protected base
class derived : private base
{
public:
    // int getPrivateVar()
    // {
    //     return private_var;
    // }
    int getProtectedVar()
    {
        return protected_var;
    }
    int getPublicVar()
    {
        return public_var;
    }
};

int main()
{

    derived d;

    cout << d.getPublicVar() << endl;
    cout << d.getProtectedVar() << endl;

    // cout << d.private_var << endl;
    // cout << d.public_var << endl;
    // cout << d.getProtectedVar << endl;

    return 0;
}