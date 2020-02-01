#ifndef OVERNIGHT_H
#define OVERNIGHT_H

#include "Package.h" // Package class definition

class OvernightPackage : public Package
{
public:
    OvernightPackage(const string &, const string &, const string &,
                     const string &, int, const string &, const string &, const string &,
                     const string &, int, double, double, double);

    void setOvernightFeePerOunce(double);   // set overnight fee
    double getOvernightFeePerOunce() const; // return overnight fee

    virtual double calculateCost() const; // calculate shipping cost
private:
    double overnightFeePerOunce; // fee per ounce for overnight delivery
};                               // end class OvernightPackage

#endif
