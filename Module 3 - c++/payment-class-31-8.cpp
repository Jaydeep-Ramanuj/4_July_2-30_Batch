#include <iostream>

using namespace std;

class Payment
{

    string upiId;
    bool isAadharLinked;
    string ownerName;
    int avalBalance = 1000;

    int secretMethod(int amount)
    {
        // secret logic you which you don't want general public to know
        return avalBalance - amount;
    }

public:
    void makePayment()
    {
        // open camera to scan qr code
        // get amount of which user want to do payment
        // code to take 6 digit pin
        int amount;
        cout << "Enter amount you want to pay: ";
        cin >> amount;
        cout << "Now available balance is:" << secretMethod(amount);
    }

    void receivePayment()
    {
    }
};

int main()
{
    Payment p;
    p.makePayment();
    return 0;
}