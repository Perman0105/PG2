#include "rentalcarreservation.h"

RentalCarReservation::RentalCarReservation()
{
    this->pickupLocation="Hamburg Flughafen";
    this->returnLocation="Aarus Flughafen";
    this->company="Europcar";
    this->fromDate="13.03.2021";
    this->toDate="21.03.2021";
    this->price=500.203;
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

string RentalCarReservation::getReturnLocation() const
{
    return returnLocation;
}

string RentalCarReservation::getCompany() const
{
    return company;
}

