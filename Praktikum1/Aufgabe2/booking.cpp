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
}

string Booking::getFromDate() const
{
    return fromDate;
}

void Booking::setFromDate(const string &newFromDate)
{
    fromDate = newFromDate;
}

string Booking::getToDate() const
{
    return toDate;
}

void Booking::setToDate(const string &newToDate)
{
    toDate = newToDate;
}
