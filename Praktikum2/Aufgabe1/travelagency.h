#ifndef TRAVELAGENCY_H
#define TRAVELAGENCY_H

#include "rentalcarreservation.h"
#include "hotelbooking.h"
#include "flightbooking.h"
#include "trainticket.h"
#include <fstream>
#include "json.hpp"
#include <QDate>
#include <QString>
#include <QWidget>
#include <QDateEdit>
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
    string getPrint() const;
    void setPrint(const string &newPrint);

    bool getCheck() const;
    void resetCheck();

    string getShowDetails(int pos);

    int getBookingSize();

    string checkType(string type);
    string getType(int pos);
    Booking* getObjectAtPos(int pos);

private:
    vector <Booking*> bookings;
    bool check=false;
    string print;

};

#endif // TRAVELAGENCY_H
