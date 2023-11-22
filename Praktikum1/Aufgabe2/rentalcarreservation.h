#ifndef RENTALCARRESERVATION_H
#define RENTALCARRESERVATION_H

#include "booking.h"

using namespace std;

class RentalCarReservation : public Booking
{
public:
    RentalCarReservation();
    string showDetails();

    string getPickupLocation() const;

    string getReturnLocation() const;

    string getCompany() const;


private:
    string pickupLocation;
    string returnLocation;
    string company;
};

#endif // RENTALCARRESERVATION_H
