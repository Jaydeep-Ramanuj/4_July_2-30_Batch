#include <iostream>

using namespace std;

struct order
{
    string name;
    int price;
    int quantity;
};

order displayOrderDetails(order o)
{
    cout << "Your " << o.quantity << " " << o.name << " is of " << o.price * o.quantity;
}

int main()
{
    order pizza;
    pizza.name = "Pappy Paneer Pizza ";
    pizza.price = 450;
    pizza.quantity = 4;

    displayOrderDetails(pizza);
    // displayOrderDetails("Something panner", 850, 5);

    return 0;
}