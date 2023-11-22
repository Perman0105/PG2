#include "rentalcarreservation.h"

RentalCarReservation::RentalCarReservation()
{

}

string RentalCarReservation::showDetails()
{
    return "-Mietwagenreservierung mit " + getCompany() + ". Abholung am " +
                getFromDate() + " in " + getPickupLocation() + ". Rueckgabe am " +
                getToDate() + " in " + getReturnLocation() + ". Preis: " +
                to_string(getPrice()) + " Euro";
}

string RentalCarReservation::getPickupLocation() const
{
    return pickupLocation;
}

void RentalCarReservation::setPickupLocation(const string &newPickupLocation)
{
    pickupLocation = newPickupLocation;
}

string RentalCarReservation::getReturnLocation() const
{
    return returnLocation;
}

void RentalCarReservation::setReturnLocation(const string &newReturnLocation)
{
    returnLocation = newReturnLocation;
}

string RentalCarReservation::getCompany() const
{
    return company;
}

void RentalCarReservation::setCompany(const string &newCompany)
{
    company = newCompany;
}

