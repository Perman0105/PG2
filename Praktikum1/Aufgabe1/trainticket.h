#ifndef TRAINTICKET_H
#define TRAINTICKET_H

#include "booking.h"
#include "booking.cpp"

using namespace std;

class TrainTicket : public Booking
{
public:
    TrainTicket();
    string showDetails();

    string getFromDestination() const;
    void setFromDestination(const string &newFromDestination);

    string getToDestination() const;
    void setToDestination(const string &newToDestination);

    string getDepartureTime() const;
    void setDepartureTime(const string &newDepartureTime);

    string getArrivalTime() const;
    void setArrivalTime(const string &newArrivalTime);

    void setConnectingStations(string conSta);

private:
    string fromDestination;
    string toDestination;
    string departureTime;
    string arrivalTime;
    vector <string> connectingStations;
};

#endif // TRAINTICKET_H
