#include <iostream>

using namespace std;

// Class, collection of data members and member functions
// Class, it is blueprint to make objects

class Remote
{

    // Data member / attributes / properties, it is used to store information about object
private:
    string circuitType;
    string sensorType;
    bool childLock = false;

public:
    int numberOfCells;
    string owner;
    string brandName;
    int price;
    bool hasTimer;

    // Member function / methods, it is used to perform any operation using object. It may use data members while doing it.

    // Constructor, it is special type of function that is used to initialize data members. It has same name as class name and it doesn't have any return type

    // Default constructor, it initializes data members with default value, it will be called automatically when we create any object of that class

    Remote()
    {
        numberOfCells = 2;
        circuitType = "xwt";
        sensorType = "ultra";
        owner = "Raj";
        brandName = "Sony";
        price = 300;
        hasTimer = false;
    }

    // Parameterized constructor, it initializes data members with values gives as parameters
    Remote(int numberOfCells_, string circuitType_, string sensorType_, string owner_, string brandName_, int price_, bool hasTimer_)
    {
        numberOfCells = numberOfCells_;
        circuitType = circuitType_;
        sensorType = sensorType_;
        owner = owner_;
        brandName = brandName_;
        price = price_;
        hasTimer = hasTimer_;
    }

    // Destructor, it is used to release resources occupied by object

    ~Remote()
    {
        // logic to remove unecessary resources
        // ex. fclose(file);
    }

private:
    void setChildLock()
    {
        // hidden logic
        childLock = !childLock;
    }

public:
    void on(string appliance)
    {
        cout << appliance + " is ON now" << endl;
    }
    void off(string appliance)
    {
        cout << appliance + " is OFF now" << endl;
    }

    string getOwner()
    {
        return owner;
    }

    string getCircuitType(string name)
    {
        if (name == owner)
        {
            return circuitType;
        }
        else
        {
            cout << "Voh apka remote nahi hai";
        }
    }
    string getSensorType()
    {
        return sensorType;
    }

    void changeChildLock()
    {
        setChildLock();

        childLock == 1 ? cout << "Child Lock is now ON" : cout << "Child Lock is now OFF";

        // cout << " Child lock is now " + childLock << endl;
    }
};

int main()
{

    // Object, it is instance of a class which which we use to perform any operations

    // Creating object using default constructor

    // Remote sony;

    // Creating object using Parameterized constructor
    Remote sony(2, "abc", "super", "Raj", "Sony", 300, false);
    Remote lg(3, "xyz", "Super cool", "Priyanshi", "LG", 350, false);

    // sony.on("Tv");
    // sony.off("AC");
    cout << "--Sony--" << endl;
    cout << "numberOfCells: " << sony.numberOfCells << endl;
    cout << "circuitType: " << sony.getCircuitType("Raj") << endl;
    cout << "owner: " << sony.owner << endl;
    cout << "brandName: " << sony.brandName << endl;
    cout << "sensorType: " << sony.getSensorType() << endl;
    cout << "--LG--" << endl;
    cout << "numberOfCells: " << lg.numberOfCells << endl;
    // cout << "circuitType: " << lg.getCircuitType("Hemang") << endl;

    lg.changeChildLock();
    lg.changeChildLock();

    return 0;
}