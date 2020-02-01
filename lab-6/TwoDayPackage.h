#ifndef TWODAY_H
#define TWODAY_H

#include "Package.h" // Package class definition

class TwoDayPackage : public Package
{
public:
    TwoDayPackage(const string &, const string &, const string &,
                  const string &, int, const string &, const string &, const string &,
                  const string &, int, double, double, double);

    void setFlatFee(double);   // set flat fee for two-day-delivery service
    double getFlatFee() const; // return flat fee

    virtual double calculateCost() const; // calculate shipping cost
private:
    double flatFee; // flat fee for two-day-delivery service
};                  // end class TwoDayPackage

#endif
