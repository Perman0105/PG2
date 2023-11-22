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
#include <stdexcept>

using namespace std;
using json = nlohmann::json;

class TravelAgency
{
public:
    TravelAgency();
    ~TravelAgency();
    void readFile();
    void readBinaryFile();
    void checkFehler();
    void deleteVector();
private:
    vector <Booking*> bookings;
    int lineNummer = 0;
    bool check=false;

};

#endif // TRAVELAGENCY_H
