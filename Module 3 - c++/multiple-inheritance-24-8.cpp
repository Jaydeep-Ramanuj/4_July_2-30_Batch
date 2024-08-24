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

class SmartRemote
{
    bool hasTouchKeys;
    int numberSupportedOTTPlatforms;

public:
    SmartRemote(bool hasTouchKeys_, int numberSupportedOTTPlatforms_)
    {
        hasTouchKeys = hasTouchKeys;
        numberSupportedOTTPlatforms = numberSupportedOTTPlatforms_;
    }

    bool hasSmartTouchKeys()
    {
        return hasTouchKeys;
    }

    int getNumberSupportedOTTPlatforms()
    {
        return numberSupportedOTTPlatforms;
    }
};

class TVRemote : public Remote, public SmartRemote
{
    int channelCount;
    bool hasNetflixBtn;

public:
    TVRemote(int numberOfCells_, string circuitType_, string sensorType_, string owner_, string brandName_, int price_, bool hasTimer_, bool hasTouchKeys_, int numberSupportedOTTPlatforms_, int channelCount_, bool hasNetflixBtn_) : Remote(numberOfCells_, circuitType_, sensorType_, owner_, brandName_, price_, hasTimer_), SmartRemote(hasTouchKeys_, numberSupportedOTTPlatforms_)
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

int main()
{
    TVRemote lgTvRemote(4, "Fast", "super dooper", "Sanket", "LG", 450, true, true, 3, 65, true);

    cout << "Channel count: " << lgTvRemote.getChannelCount() << endl;
    cout << "Owner: " << lgTvRemote.getOwner() << endl;
    cout << "Number of supported OTT platforms: " << lgTvRemote.getNumberSupportedOTTPlatforms() << endl;
    return 0;
}