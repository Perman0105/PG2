#include "hotelbooking.h"

HotelBooking::HotelBooking()
{

}

string HotelBooking::getHotel() const
{
    return hotel;
}

void HotelBooking::setHotel(const string &newHotel)
{
    hotel = newHotel;
}

string HotelBooking::getTown() const
{
    return town;
}

void HotelBooking::setTown(const string &newTown)
{
    town = newTown;
}

string HotelBooking::showDetails()
{
    return "-Hotelreservierung im "+ getHotel()+" in "+getTown()+" vom "+fromDate+
           " bis zum "+ getToDate()+". Preis: "+ to_string(getPrice());
}

string HotelBooking::getType()
{
    return "H";
}
