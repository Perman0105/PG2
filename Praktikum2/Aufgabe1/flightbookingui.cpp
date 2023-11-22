#include "flightbookingui.h"
#include "ui_flightbookingui.h"

FlightBookingUI::FlightBookingUI(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FlightBookingUI)
{
    ui->setupUi(this);
}

FlightBookingUI::~FlightBookingUI()
{
    delete ui;
}

void FlightBookingUI::showDetails()
{
    ui->lblAirline->setText(getAirline());
    ui->lblFromDate->setText(getFromDate());
    ui->lblFromDest->setText(getFromDestination());
    if(getToDate().isNull())
    {
        ui->lblToDate->setText(getFromDate());
    }
    else
    {
        ui->lblToDate->setText(getToDate());
    }
    ui->lblToDest->setText(getToDestination());
    ui->lblPrice->setText(getPrice()+"€ ");
}

QString FlightBookingUI::getFromDestination() const
{
    return fromDestination;
}

void FlightBookingUI::setFromDestination(const QString &newFromDestination)
{
    fromDestination = newFromDestination;
}

QString FlightBookingUI::getToDestination() const
{
    return toDestination;
}

void FlightBookingUI::setToDestination(const QString &newToDestination)
{
    toDestination = newToDestination;
}

QString FlightBookingUI::getAirline() const
{
    return airline;
}

void FlightBookingUI::setAirline(const QString &newAirline)
{
    airline = newAirline;
}

QString FlightBookingUI::getFromDate() const
{
    return fromDate;
}

void FlightBookingUI::setFromDate(const QString &newFromDate)
{
    fromDate = newFromDate;
}

QString FlightBookingUI::getToDate() const
{
    return toDate;
}

void FlightBookingUI::setToDate(const QString &newToDate)
{
    toDate = newToDate;
}

QString FlightBookingUI::getPrice() const
{
    QString str;
    str.setNum(price);
    return str;
}

void FlightBookingUI::setPrice(double newPrice)
{
    price = newPrice;
}


