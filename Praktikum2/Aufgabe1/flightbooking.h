#ifndef FLIGHTBOOKING_H
#define FLIGHTBOOKING_H

#include "booking.h"

using namespace std;

class FlightBooking : public Booking
{
public:
    FlightBooking();
    FlightBooking(string fromDest, string toDest);

    string showDetails();

    string getFromDestination() const;
    void setFromDestination(const string &newFromDestination);

    string getToDestination() const;
    void setToDestination(const string &newToDestination);

    string getAirline() const;
    void setAirline(const string &newAirline);

    string getType();
    QString getQFromDestination() const;

    QString getQToDestination() const;

    QString getQAirline() const;

private:
    string fromDestination;
    QString qFromDestination;
    string toDestination;
    QString qToDestination;
    string airline;
    QString qAirline;

};

#endif // FLIGHTBOOKING_H
