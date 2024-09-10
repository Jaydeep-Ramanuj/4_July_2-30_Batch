#include <iostream>

using namespace std;

template <typename T>

T add(T a, T b)
{
    return a + b;
}

template <typename H>
class some
{
    H name;
};
// int add(int a, int b)
// {
//     return a + b;
// }

// float add(float a, float b)
// {
//     return a + b;
// }

// string sum(string a, string b)
// {
//     return a + b;
// }

int main()
{
    string str1 = "new";
    string str2 = "york";

    cout << add(10, 20) << endl;
    cout << add(40.20, 30.20) << endl;
    cout << add(str1, str2) << endl;

    return 0;
}
