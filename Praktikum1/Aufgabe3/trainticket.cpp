#include "trainticket.h"

TrainTicket::TrainTicket()
{

}

string TrainTicket::showDetails()
{
        if(connectingStations.size()>0)
        {
                string result;
                for(auto &value : connectingStations)
                    {
                        result= value+" "+result;
                    }
                    return "-Zugticket von "+ getFromDestination()+" nach "+ getToDestination()+ " am "+getFromDate()+
                    " von "+ getDepartureTime()+" bis "+getArrivalTime()+" ueber "+result +". Preis: "+ to_string(this->price)+ " Euro";
        }
        else
        {
            return "-Zugticket von "+getFromDestination()+" nach "+getToDestination()+" am "+getFromDate()+
            " um "+getDepartureTime()+" ueber nichts. Preis: "+to_string(this->price)+ " Euro";
        }
}

string TrainTicket::getFromDestination() const
{
    return fromDestination;
}

void TrainTicket::setFromDestination(const string &newFromDestination)
{
    fromDestination = newFromDestination;
}

string TrainTicket::getToDestination() const
{
    return toDestination;
}

void TrainTicket::setToDestination(const string &newToDestination)
{
    toDestination = newToDestination;
}

string TrainTicket::getDepartureTime() const
{
    return departureTime;
}

void TrainTicket::setDepartureTime(const string &newDepartureTime)
{
    departureTime = newDepartureTime;
}

string TrainTicket::getArrivalTime() const
{
    return arrivalTime;
}

void TrainTicket::setArrivalTime(const string &newArrivalTime)
{
    arrivalTime = newArrivalTime;
}

void TrainTicket::setConnectingStations(string conSta)
{
    connectingStations.push_back(conSta);
}

void TrainTicket::setAnzahlStation(int anzahl)
{
    anzahl=connectingStations.size();
}

