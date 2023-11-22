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

    string getToDestination() const;

    string getDepartureTime() const;

    string getArrivalTime() const;
    void setArrivalTime(const string &newArrivalTime);


    vector<string> getConnectingStations() const;

private:
    string fromDestination;
    string toDestination;
    string departureTime;
    string arrivalTime;
    vector <string> connectingStations={" Erfurt Hbf ","Halle(Saale)Hbf "};
};

#endif // TRAINTICKET_H
