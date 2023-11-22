#ifndef HOTELBOOKING_H
#define HOTELBOOKING_H

#include "booking.h"

using namespace std;

class HotelBooking : public Booking
{
public:
    HotelBooking();
    string getHotel() const;

    string getTown() const;

    string showDetails();

private:
    string hotel;
    string town;
};

#endif // HOTELBOOKING_H
