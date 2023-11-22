#ifndef TRAINTICKET_H
#define TRAINTICKET_H

#include "booking.h"

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

    void setAnzahlStation(int anzahl);

    string getType();

    int connectingStationsAnzahl();

    string getConnectingStation(int pos);

private:
    string fromDestination;
    string toDestination;
    string departureTime;
    string arrivalTime;
    vector <string> connectingStations;
};

#endif // TRAINTICKET_H
