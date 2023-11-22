#include "trainticket.h"

TrainTicket::TrainTicket()
{
    this->fromDestination="Mannheim Hbf";
    this->toDestination="Magdeburg Hbf";
    this->fromDate="19.10.2021";
    this->departureTime="10:04";
    this->arrivalTime="16:23";
    this->price=161.15;
}

string TrainTicket::showDetails()
{
    string value0;
    for(auto &value1 : connectingStations)
    {
        value1=value1+","+value0;
        value0=value1;
    }
    return "-Zugticket von "+ getFromDestination()+" nach "+ getToDestination()+ " am "+ this->fromDate+
    " von "+ getDepartureTime()+" bis "+ getArrivalTime() + " ueber "+ value0+ ". Preis: "+ to_string(this->price)+ " Euro";
}

string TrainTicket::getFromDestination() const
{
    return fromDestination;
}

string TrainTicket::getToDestination() const
{
    return toDestination;
}


string TrainTicket::getDepartureTime() const
{
    return departureTime;
}


string TrainTicket::getArrivalTime() const
{
    return arrivalTime;
}

vector<string> TrainTicket::getConnectingStations() const
{
    return connectingStations;
}

