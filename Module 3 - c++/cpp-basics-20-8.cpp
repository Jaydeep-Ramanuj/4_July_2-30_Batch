#include <iostream>

using namespace std;

int sum(int, int);

struct remote
{
    string brandName;
    int price;
    int numberOfCells;
    bool hasMuteButton;
};

int main()
{

    // data type
    // int
    // float
    // double
    // char
    // void

    // char name[20] = "Jay";
    string name = "Jay";
    bool isLoading = true;
    isLoading = false;

    // operators

    // arithmetic operators

    // +
    // -
    // *
    // /
    // %

    // conditional operators

    // <
    // >
    // <=
    // >=
    // ==
    // !=

    // logical operators

    // AND &&
    // OR ||
    // NOT !

    // assignment operator
    // =

    string day = "sun";

    if (day == "sun")
    {
        cout << "Holiday";
    }
    else if (day == "TTS")
    {
        cout << "Lecture";
    }
    else
    {
        cout << "Lab";
    }

    int total = 0;

    for (int i = 1; i <= 100; i++)
    {
        total += i;
    }

    cout << total << endl;
    total = 0;
    int i = 1;
    while (i <= 100)
    {
        total += i;
        i++;
    }
    cout << total << endl;

    i = 1;
    total = 0;

    do
    {
        total += i;
        i++;
    } while (i <= 100);
    cout << total << endl;

    int numbers[5] = {10, 20, 30, 40, 50};

    cout << numbers[3] << endl;

    cout << sum(10, 20) << endl;

    struct remote r;

    r.brandName = "Sony";
    r.hasMuteButton = true;
    r.numberOfCells = 2;
    r.price = 300;

    cout << "brandName: " << r.brandName << endl;
    cout << "hasMuteButton: " << r.hasMuteButton << endl;
    cout << "numberOfCells: " << r.numberOfCells << endl;
    cout << "price: " << r.price << endl;

    return 0;
}

int sum(int num1, int num2)
{
    return num1 + num2;
}
