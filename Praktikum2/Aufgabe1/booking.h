#ifndef BOOKING_H
#define BOOKING_H

#include <iostream>
#include <vector>
#include <string>
#include <QString>

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

    virtual string getType()=0;

    QString getQFromDate() const;
    void setQFromDate(const QString &newQFromDate);

    QString getQToDate() const;
    void setQToDate(const QString &newQToDate);

    void setQPrice(const QString &newQPrice);

protected:
    string id;
    double price;
    string fromDate;
    QString qFromDate;
    string toDate;
    QString qToDate;
    QString qPrice;

};

#endif // BOOKING_H
