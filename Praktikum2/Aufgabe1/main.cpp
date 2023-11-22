#include "travelagencyui.h"
#include "flightbookingui.h"

#include <QApplication>
#include <QDateEdit>
#include <QVBoxLayout>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TravelAgencyUI w;
    w.show();
    return a.exec();

    QApplication b(argc, argv);

    FlightBookingUI f;
    f.show();
    return b.exec();
}
