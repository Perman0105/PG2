#include "flightbooking.h"

FlightBooking::FlightBooking()
{

}

string FlightBooking::showDetails()
{
    return "-Flugbuchung von "+getFromDestination()+ " nach "+ getToDestination()+" mit "+
        getAirline()+ " am "+fromDate + ".Preis: "+ to_string(getPrice())+" Euro";
}

string FlightBooking::getFromDestination() const
{
    return fromDestination;
}

void FlightBooking::setFromDestination(const string &newFromDestination)
{
    fromDestination = newFromDestination;
}

string FlightBooking::getToDestination() const
{
    return toDestination;
}

void FlightBooking::setToDestination(const string &newToDestination)
{
    toDestination = newToDestination;
}

string FlightBooking::getAirline() const
{
    return airline;
}

void FlightBooking::setAirline(const string &newAirline)
{
    airline = newAirline;
}
