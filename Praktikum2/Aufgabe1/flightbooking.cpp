#include "flightbooking.h"

FlightBooking::FlightBooking()
{

}

FlightBooking::FlightBooking(string fromDest, string toDest)
{
    this->fromDestination = fromDest;
}

string FlightBooking::showDetails()
{
    return "-Flugbuchung von "+getFromDestination()+ " nach "+ getToDestination()+" mit "+
           getAirline()+ " am "+fromDate+ " bis "+getToDate()+   ". Preis: "+ to_string(getPrice())+" Euro";
}


string FlightBooking::getFromDestination() const
{
    return fromDestination;
}

void FlightBooking::setFromDestination(const string &newFromDestination)
{
    fromDestination = newFromDestination;
    qFromDestination = QString::fromStdString(this->fromDestination);
}

string FlightBooking::getToDestination() const
{
    return toDestination;
}

void FlightBooking::setToDestination(const string &newToDestination)
{
    toDestination = newToDestination;
    qToDestination = QString::fromStdString(this->toDestination);
}

string FlightBooking::getAirline() const
{
    return airline;
}

void FlightBooking::setAirline(const string &newAirline)
{
    airline = newAirline;
    qAirline = QString::fromStdString(this->airline);
}

string FlightBooking::getType()
{
    return "F";
}

QString FlightBooking::getQFromDestination() const
{
    return qFromDestination;
}

QString FlightBooking::getQToDestination() const
{
    return qToDestination;
}

QString FlightBooking::getQAirline() const
{
    return qAirline;
}
