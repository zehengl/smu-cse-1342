#include <iostream>
#include <fstream> // file stream
#include <istream> // file stream
#include <string>
#include <cstring>
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <vector>
#include "Package.h"          // Package class definition
#include "TwoDayPackage.h"    // TwoDayPackage class definition
#include "OvernightPackage.h" // OvernightPackage class definition
using namespace std;

Package *getNextPackage(ifstream &);

int main()
{
    // Create vector packages
    vector<Package *> packages(0);

    // ifstream constructor opens the file
    ifstream inPackageTransaction("PackageInfo.csv", ios::in);

    // exit program if ifstream could not open file
    if (!inPackageTransaction)
    {
        cerr << "File could not be opened" << endl;
        exit(1);
    }

    Package *package;
    string headerRecord;

    // Bypass header recording
    getline(inPackageTransaction, headerRecord);

    // Read package information
    package = getNextPackage(inPackageTransaction);
    while (package != 0)
    {
        packages.push_back(package);
        package = getNextPackage(inPackageTransaction);
    }
    inPackageTransaction.close();
    double totalShippingCost = 0.0;

    cout << fixed << setprecision(2);

    // print each package's information and cost
    for (size_t i = 0; i < packages.size(); ++i)
    {
        cout << "Package " << i + 1 << "\n\nSender:\n"
             << packages[i]->getSenderName() << '\n'
             << packages[i]->getSenderAddress() << '\n'
             << packages[i]->getSenderCity() << ", "
             << packages[i]->getSenderState() << ' '
             << packages[i]->getSenderZIP();
        cout << "\n\nRecipient:\n"
             << packages[i]->getRecipientName()
             << '\n'
             << packages[i]->getRecipientAddress() << '\n'
             << packages[i]->getRecipientCity() << ", "
             << packages[i]->getRecipientState() << ' '
             << packages[i]->getRecipientZIP();

        double cost = packages[i]->calculateCost();
        cout << "\n\nCost: $" << cost << "\n\n";
        totalShippingCost += cost; // add this Package�s cost to total
    }                              // end for

    cout << "Total shipping cost: $" << totalShippingCost << endl;
}

/*
  Read a Package record from the transaction file.
 */
Package *getNextPackage(ifstream &inPackageTransaction)
{
    string customerId;
    string packageType;
    string packageId;
    string senderName;
    string senderAddress;
    string senderCity;
    string senderState;
    string senderZIP;
    string recipientName;
    string recipientAddress;
    string recipientCity;
    string recipientState;
    string recipientZIP;
    string weight;       // weight of the package
    string costPerOunce; // cost per ounce to ship the package
    string fee;

    if (inPackageTransaction.good())
    {
        getline(inPackageTransaction, customerId, ',');
        getline(inPackageTransaction, packageType, ',');
        getline(inPackageTransaction, packageId, ',');
        getline(inPackageTransaction, senderName, ',');
        getline(inPackageTransaction, senderAddress, ',');
        getline(inPackageTransaction, senderCity, ',');
        getline(inPackageTransaction, senderState, ',');
        getline(inPackageTransaction, senderZIP, ',');
        getline(inPackageTransaction, recipientName, ',');
        getline(inPackageTransaction, recipientAddress, ',');
        getline(inPackageTransaction, recipientCity, ',');
        getline(inPackageTransaction, recipientState, ',');
        getline(inPackageTransaction, recipientZIP, ',');
        getline(inPackageTransaction, weight, ',');
        getline(inPackageTransaction, costPerOunce, ',');
        getline(inPackageTransaction, fee);
    }
    else
    {
        return 0;
    }
    if (packageType == "Package")
    {
        Package *package = new Package(
            senderName,
            senderAddress,
            senderCity,
            senderState,
            atoi(senderZIP.c_str()),
            recipientName,
            recipientAddress,
            recipientCity,
            recipientState,
            atoi(recipientZIP.c_str()),
            atof(weight.c_str()),
            atof(costPerOunce.c_str()));
        return package;
    }
    if (packageType == "TwoDayPackage")
    {
        TwoDayPackage *package = new TwoDayPackage(
            senderName,
            senderAddress,
            senderCity,
            senderState,
            atoi(senderZIP.c_str()),
            recipientName,
            recipientAddress,
            recipientCity,
            recipientState,
            atoi(recipientZIP.c_str()),
            atof(weight.c_str()),
            atof(costPerOunce.c_str()),
            atof(fee.c_str()));
        return package;
    }
    if (packageType == "OvernightPackage")
    {
        OvernightPackage *package = new OvernightPackage(
            senderName,
            senderAddress,
            senderCity,
            senderState,
            atoi(senderZIP.c_str()),
            recipientName,
            recipientAddress,
            recipientCity,
            recipientState,
            atoi(recipientZIP.c_str()),
            atof(weight.c_str()),
            atof(costPerOunce.c_str()),
            atof(fee.c_str()));
        return package;
    }

    return 0;
}
