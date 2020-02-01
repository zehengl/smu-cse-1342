#include <iostream>
#include <iomanip>
#include "Package.h"          // Package class definition
#include "TwoDayPackage.h"    // TwoDayPackage class definition
#include "OvernightPackage.h" // OvernightPackage class definition
using namespace std;

int main()
{
    Package package1("Mary Brown", "3 Main St", "Boston", "MA", 11111,
                     "Lou Smith", "127 Elm St", "New York", "NY", 22222, 12.5, .55);
    TwoDayPackage package2("Bill Klein", "15 Broadway", "Somerville", "MA",
                           33333, "Lisa George", "212 Pine Rd", "Cambridge", "MA", 44444,
                           17.5, .75, 2.0);
    OvernightPackage package3("Bill Lewis", "12 Oak St", "Boston", "MA",
                              55555, "Don Kelly", "91 Main St", "Denver", "CO", 66666,
                              16.5, .75, .45);

    cout << fixed << setprecision(2);

    // Print each package's information and cost
    cout << "Package 1:\n\nSender:\n"
         << package1.getSenderName()
         << '\n'
         << package1.getSenderAddress() << '\n'
         << package1.getSenderCity() << ", " << package1.getSenderState()
         << ' ' << package1.getSenderZIP();
    cout << "\n\nRecipient:\n"
         << package1.getRecipientName()
         << '\n'
         << package1.getRecipientAddress() << '\n'
         << package1.getRecipientCity() << ", "
         << package1.getRecipientState() << ' '
         << package1.getRecipientZIP();
    cout << "\n\nCost: $" << package1.calculateCost() << endl;

    cout << "\nPackage 2:\n\nSender:\n"
         << package2.getSenderName()
         << '\n'
         << package2.getSenderAddress() << '\n'
         << package2.getSenderCity() << ", " << package2.getSenderState()
         << ' ' << package2.getSenderZIP();
    cout << "\n\nRecipient:\n"
         << package2.getRecipientName()
         << '\n'
         << package2.getRecipientAddress() << '\n'
         << package2.getRecipientCity() << ", "
         << package2.getRecipientState() << ' '
         << package2.getRecipientZIP();
    cout << "\n\nCost: $" << package2.calculateCost() << endl;

    cout << "\nPackage 3:\n\nSender:\n"
         << package3.getSenderName()
         << '\n'
         << package3.getSenderAddress() << '\n'
         << package3.getSenderCity() << ", " << package3.getSenderState()
         << ' ' << package3.getSenderZIP();
    cout << "\n\nRecipient:\n"
         << package3.getRecipientName()
         << '\n'
         << package3.getRecipientAddress() << '\n'
         << package3.getRecipientCity() << ", "
         << package3.getRecipientState() << ' '
         << package3.getRecipientZIP();
    cout << "\n\nCost: $" << package3.calculateCost() << endl;
}
