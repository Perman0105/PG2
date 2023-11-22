#ifndef BOOKING_H
#define BOOKING_H

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Booking
{
public:
    Booking();
    virtual string showDetails()=0;

    double getPrice() const;
    void setPrice(double newPrice);

    string getFromDate() const;
    void setFromDate(const string &newFromDate);

    string getToDate() const;
    void setToDate(const string &newToDate);

    string getId() const;
    void setId(const string &newId);

protected:
    string id;
    double price;
    string fromDate;
    string toDate;

};

#endif // BOOKING_H
