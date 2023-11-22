#ifndef RENTALCARRESERVATION_H
#define RENTALCARRESERVATION_H

#include "booking.h"

using namespace std;

class RentalCarReservation : public Booking
{
public:
    RentalCarReservation();
    string showDetails();

    string getPickupLocation();
    void setPickupLocation(const string &newPickupLocation);

    string getReturnLocation();
    void setReturnLocation(const string &newReturnLocation);

    string getCompany();
    void setCompany(const string &newCompany);

    string getType();

private:
    string pickupLocation;
    string returnLocation;
    string company;
};

#endif // RENTALCARRESERVATION_H
