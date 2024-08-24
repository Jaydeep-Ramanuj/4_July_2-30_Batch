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

class AcRemote : public Remote
{
    int minimumTemperatureLimit;
    bool hasACTimer;
    string modelNumber;

public:
    AcRemote(int numberOfCells_, string circuitType_, string sensorType_, string owner_, string brandName_, int price_, bool hasTimer_, int maximumTemperatureLimit_, bool hasACTimer_, string modelNumber_) : Remote(numberOfCells_, circuitType_, sensorType_, owner_, brandName_, price_, hasTimer_)
    {
        minimumTemperatureLimit = maximumTemperatureLimit_;
        hasACTimer = hasACTimer_;
        modelNumber = modelNumber_;
    }

    int getMaximumTemperatureLimit()
    {
        return minimumTemperatureLimit;
    }

    bool hasClockTimer()
    {
        return hasTimer;
    }
    string getModelNumber()
    {
        return modelNumber;
    }
};

int main()
{
    AcRemote daikin(2, "Cool", "Ultra sonic", "Raj", "Daikin", 500, true, 16, true, "daikinSuperCool");
    TVRemote lgTvRemote(4, "Fast", "super dooper", "Sanket", "LG", 450, true, 65, true);

    cout << "Ac Owner name: " << daikin.getOwner() << endl;
    cout << "TV Owner name: " << lgTvRemote.getOwner() << endl;

    cout << "Has AC clock timer ? " << daikin.hasClockTimer() << endl;
    cout << "Has Netflix button ? " << lgTvRemote.hasNetflixButton() << endl;

    return 0;
}