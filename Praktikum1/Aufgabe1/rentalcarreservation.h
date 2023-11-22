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
    void setPickupLocation(const string &newPickupLocation);

    string getReturnLocation() const;
    void setReturnLocation(const string &newReturnLocation);

    string getCompany() const;
    void setCompany(const string &newCompany);

private:
    string pickupLocation;
    string returnLocation;
    string company;
};

#endif // RENTALCARRESERVATION_H
