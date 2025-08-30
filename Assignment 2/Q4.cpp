#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class Package
{
protected:
    string senderName, senderAddress, senderCity, senderState, senderZip;
    string recipientName, recipientAddress, recipientCity, recipientState, recipientZip;
    float weight;
    float costPerOunce;

public:
    Package(string sName, string sAddress, string sCity, string sState, string sZip,
            string rName, string rAddress, string rCity, string rState, string rZip,
            float w, float cost)
    {

        senderName = sName;
        senderAddress = sAddress;
        senderCity = sCity;
        senderState = sState;
        senderZip = sZip;

        recipientName = rName;
        recipientAddress = rAddress;
        recipientCity = rCity;
        recipientState = rState;
        recipientZip = rZip;

        if (w > 0)
        {
            weight = w;
        }
        else
        {
            weight = 0;
        }

        if (cost > 0)
        {
            costPerOunce = cost;
        }
        else
        {
            costPerOunce = 0;
        }
    }

    virtual double calculateCost() const
    {
        return weight * costPerOunce;
    }
    virtual void displayInfo() const
    {
        cout << "\nSender: " << senderName << ", " << senderAddress << ", " << senderCity << ", " << senderState << ", " << senderZip;
        cout << "\nRecipient: " << recipientName << ", " << recipientAddress << ", " << recipientCity << ", " << recipientState << ", " << recipientZip;
        cout << "\nWeight: " << weight << " ounces";
        cout << "\nCost per Ounce: $" << costPerOunce;
    }

    virtual ~Package() {}
};

class TwoDayPackage : public Package
{
    float flatFee;

public:
    TwoDayPackage(string sName, string sAddress, string sCity, string sState, string sZip,
                  string rName, string rAddress, string rCity, string rState, string rZip,
                  float w, float cost, float fee)
        : Package(sName, sAddress, sCity, sState, sZip, rName, rAddress, rCity, rState, rZip, w, cost)
    {
        if (fee > 0)
        {
            flatFee = fee;
        }
        else
        {
            flatFee = 0;
        }
    }

    double calculateCost() const override
    {
        return Package::calculateCost() + flatFee;
    }
    void displayInfo() const override
    {
        cout << "\n--- Two Day Package ---";
        Package::displayInfo();
        cout << "\nFlat Fee: $" << flatFee;
        cout << "\nTotal Cost: $" << calculateCost() << endl;
    }
};

class OvernightPackage : public Package
{
    float extraPerOunce;

public:
    OvernightPackage(string sName, string sAddress, string sCity, string sState, string sZip,
                     string rName, string rAddress, string rCity, string rState, string rZip,
                     float w, float cost, float extra)
        : Package(sName, sAddress, sCity, sState, sZip, rName, rAddress, rCity, rState, rZip, w, cost)
    {
        extraPerOunce = (extra > 0) ? extra : 0;
    }

    double calculateCost() const override
    {
        return weight * (costPerOunce + extraPerOunce);
    }

    void displayInfo() const override
    {
        cout << "\n--- Overnight Package ---";
        Package::displayInfo();
        cout << "\nExtra per Ounce: $" << extraPerOunce;
        cout << "\nTotal Cost: $" << calculateCost() << endl;
    }
};
int main()
{
    const int maxPackages = 10;
    Package *packages[maxPackages];
    int count = 0;
    int choice;

    do
    {
        cout << "\n1. Add Two Day Package";
        cout << "\n2. Add Overnight Package";
        cout << "\n3. Show All Packages";
        cout << "\n0. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;
        cin.ignore();

        if (choice == 1 || choice == 2)
        {
            string sName, sAddress, sCity, sState, sZip;
            string rName, rAddress, rCity, rState, rZip;
            float weight, cost, extra;

            cout << "\nSender Name: ";
            getline(cin, sName);
            cout << "Sender Address: ";
            getline(cin, sAddress);
            cout << "Sender City: ";
            getline(cin, sCity);
            cout << "Sender State: ";
            getline(cin, sState);
            cout << "Sender Zip: ";
            getline(cin, sZip);

            cout << "Recipient Name: ";
            getline(cin, rName);
            cout << "Recipient Address: ";
            getline(cin, rAddress);
            cout << "Recipient City: ";
            getline(cin, rCity);
            cout << "Recipient State: ";
            getline(cin, rState);
            cout << "Recipient Zip: ";
            getline(cin, rZip);
            cout << "Weight (oz): ";
            cin >> weight;
            cout << "Cost per Ounce: $";
            cin >> cost;

            if (choice == 1)
            {
                cout << "Flat Fee for Two Day: $";
                cin >> extra;
                packages[count++] = new TwoDayPackage(sName, sAddress, sCity, sState, sZip,
                                                      rName, rAddress, rCity, rState, rZip,
                                                      weight, cost, extra);
            }
            else if (choice == 2)
            {
                cout << "Extra Cost per Ounce for Overnight: $";
                cin >> extra;
                packages[count++] = new OvernightPackage(sName, sAddress, sCity, sState, sZip,
                                                         rName, rAddress, rCity, rState, rZip,
                                                         weight, cost, extra);
            }
            cin.ignore();
        }
        else if (choice == 3)
        {
            for (int i = 0; i < count; i++)
            {
                packages[i]->displayInfo();
            }
        }

    } while (choice != 0);

    for (int i = 0; i < count; i++)
    {
        delete packages[i];
    }

    return 0;
}