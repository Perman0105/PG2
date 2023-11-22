#include "rentalcarreservation.h"

RentalCarReservation::RentalCarReservation()
{

}

string RentalCarReservation::showDetails()
{
    return "-Mietwagenreservierung mit " + getCompany() + ". Abholung am " +
                getFromDate() + " in " + getPickupLocation() + ". Rückgabe am " +
                getToDate() + " in " + getReturnLocation() + ". Preis: " +
           to_string(getPrice()) + " Euro";
}


string RentalCarReservation::getPickupLocation()
{
    return pickupLocation;
}

void RentalCarReservation::setPickupLocation(const string &newPickupLocation)
{
    pickupLocation = newPickupLocation;
}

string RentalCarReservation::getReturnLocation()
{
    return returnLocation;
}

void RentalCarReservation::setReturnLocation(const string &newReturnLocation)
{
    returnLocation = newReturnLocation;
}

string RentalCarReservation::getCompany()
{
    return company;
}

void RentalCarReservation::setCompany(const string &newCompany)
{
    company = newCompany;
}

string RentalCarReservation::getType()
{
    return "R";
}

