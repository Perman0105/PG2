#include "travelagency.h"

TravelAgency::TravelAgency()
{

}

void TravelAgency::readFile()
{
    RentalCarReservation *renCar=new RentalCarReservation();
    cout<<renCar->showDetails()<<endl;
    HotelBooking *hotel=new HotelBooking();
    cout<<hotel->showDetails()<<endl;
    FlightBooking *flight=new FlightBooking();
    cout<<flight->showDetails()<<endl;
    TrainTicket *train=new TrainTicket();
    cout<<train->showDetails()<<endl;
    delete train;
    delete renCar;
    delete flight;
    delete hotel;
}
