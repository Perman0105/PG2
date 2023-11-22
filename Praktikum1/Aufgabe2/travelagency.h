#ifndef TRAVELAGENCY_H
#define TRAVELAGENCY_H

#include "booking.h"
#include "rentalcarreservation.h"
#include "rentalcarreservation.cpp"
#include "hotelbooking.h"
#include "hotelbooking.cpp"
#include "flightbooking.h"
#include "flightbooking.cpp"
#include "trainticket.h"
#include "trainticket.cpp"

using namespace std;

class TravelAgency
{
public:
    TravelAgency();
    void readFile();
private:
    vector <Booking*> bookings;
};

#endif // TRAVELAGENCY_H
