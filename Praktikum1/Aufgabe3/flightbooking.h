#ifndef FLIGHTBOOKING_H
#define FLIGHTBOOKING_H

#include "booking.h"

using namespace std;

class FlightBooking : public Booking
{
public:
    FlightBooking();
    string showDetails();

    string getFromDestination() const;
    void setFromDestination(const string &newFromDestination);

    string getToDestination() const;
    void setToDestination(const string &newToDestination);

    string getAirline() const;
    void setAirline(const string &newAirline);
private:
    string fromDestination;
    string toDestination;
    string airline;

};

#endif // FLIGHTBOOKING_H
