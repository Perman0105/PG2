#include "booking.h"

Booking::Booking()
{

}

double Booking::getPrice() const
{
    return price;
}

void Booking::setPrice(double newPrice)
{
    price = newPrice;
    QString qPr;
    this->qPrice=qPr.setNum(price);
}

string Booking::getFromDate() const
{
    return fromDate;
}

void Booking::setFromDate(const string &newFromDate)
{
    fromDate = newFromDate;
    qFromDate = QString::fromStdString(this->fromDate);
}

string Booking::getToDate() const
{
    return toDate;
}

void Booking::setToDate(const string &newToDate)
{
    toDate = newToDate;
    qToDate = QString::fromStdString(this->toDate);
}

string Booking::getId() const
{
    return id;
}

void Booking::setId(const string &newId)
{
    id = newId;
}

QString Booking::getQFromDate() const
{
    return qFromDate;
}

void Booking::setQFromDate(const QString &newQFromDate)
{
    qFromDate = newQFromDate;
}

QString Booking::getQToDate() const
{
    return qToDate;
}

void Booking::setQToDate(const QString &newQToDate)
{
    qToDate = newQToDate;
}

void Booking::setQPrice(const QString &newQPrice)
{
    qPrice = newQPrice;
}


