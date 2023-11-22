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
#include <fstream>
#include "json.hpp"

using namespace std;
using json = nlohmann::json;

class TravelAgency
{
public:
    TravelAgency();
    void readFile();
private:
    vector <Booking*> bookings;

};

#endif // TRAVELAGENCY_H
