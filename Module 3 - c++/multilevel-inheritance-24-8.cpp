#include <iostream>

using namespace std;

class Remote
{

private:
    string circuitType;
    string sensorType;

public:
    int numberOfCells;
    string owner;
    string brandName;
    int price;
    bool hasTimer;

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
};

class TVRemote : public Remote
{
    int channelCount;
    bool hasNetflixBtn;

public:
    TVRemote(int numberOfCells_, string circuitType_, string sensorType_, string owner_, string brandName_, int price_, bool hasTimer_, int channelCount_, bool hasNetflixBtn_) : Remote(numberOfCells_, circuitType_, sensorType_, owner_, brandName_, price_, hasTimer_)
    {
        channelCount = channelCount_;
        hasNetflixBtn = hasNetflixBtn_;
    }
    int getChannelCount()
    {
        return channelCount;
    }
    bool hasNetflixButton()
    {
        return hasNetflixBtn;
    }
};

class SonyTVRemote : public TVRemote
{
    string modelNumber;
    bool hasMic;

public:
    SonyTVRemote(int numberOfCells_, string circuitType_, string sensorType_, string owner_, string brandName_, int price_, bool hasTimer_, int channelCount_, bool hasNetflixBtn_, string modelNumber_, bool hasMic_) : TVRemote(numberOfCells_, circuitType_, sensorType_, owner_, brandName_, price_, hasTimer_, channelCount_, hasNetflixBtn_)
    {
        modelNumber = modelNumber_;
        hasMic = hasMic_;
    }

    string getModelNumber()
    {
        return modelNumber;
    }

    bool hasMicrophone()
    {
        return hasMic;
    }
};

int main()
{

    SonyTVRemote bravia(2, "superFast", "ultra", "Hardik", "Sony", 350, true, 45, true, "Bravia64", true);

    cout << "Model number: " << bravia.getModelNumber() << endl;
    cout << "Owner: " << bravia.getOwner() << endl;

    return 0;
}