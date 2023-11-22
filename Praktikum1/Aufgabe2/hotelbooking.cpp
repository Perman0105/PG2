#include "hotelbooking.h"

HotelBooking::HotelBooking()
{
    this->hotel="Residence 1898";
    this->town="Warschau";
    this->fromDate="02.06.2021";
    this->toDate="03.06.2021";
    this->price=256.02;
}

string HotelBooking::getHotel() const
{
    return hotel;
}


string HotelBooking::getTown() const
{
    return town;
}


string HotelBooking::showDetails()
{
    return "-Hotelreservierung im "+ getHotel()+" in "+getTown()+" vom "+fromDate+
    " bis zum "+ getToDate()+".Preis: "+ to_string(getPrice());
}
