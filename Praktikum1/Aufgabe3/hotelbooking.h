#ifndef HOTELBOOKING_H
#define HOTELBOOKING_H

#include "booking.h"

using namespace std;

class HotelBooking : public Booking
{
public:
    HotelBooking();
    string getHotel() const;
    void setHotel(const string &newHotel);

    string getTown() const;
    void setTown(const string &newTown);

    string showDetails();

private:
    string hotel;
    string town;
};

#endif // HOTELBOOKING_H
