#include "hotelbookingui.h"
#include "ui_hotelbookingui.h"

HotelBookingUI::HotelBookingUI(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HotelBookingUI)
{
    ui->setupUi(this);
}

HotelBookingUI::~HotelBookingUI()
{
    delete ui;
}

QString HotelBookingUI::getHotel() const
{
    return hotel;
}

void HotelBookingUI::setHotel(const QString &newHotel)
{
    hotel = newHotel;
}

QString HotelBookingUI::getTown() const
{
    return town;
}

void HotelBookingUI::setTown(const QString &newTown)
{
    town = newTown;
}

QString HotelBookingUI::getFromDate() const
{
    return fromDate;
}

void HotelBookingUI::setFromDate(const QString &newFromDate)
{
    fromDate = newFromDate;
}

QString HotelBookingUI::getToDate() const
{
    return toDate;
}

void HotelBookingUI::setToDate(const QString &newToDate)
{
    toDate = newToDate;
}

QString HotelBookingUI::getPrice() const
{
    QString str;
    str.setNum(price);
    return str;
}

void HotelBookingUI::setPrice(double newPrice)
{
    price = newPrice;
}

void HotelBookingUI::showDetails()
{
    ui->lblFromDate->setText(getFromDate());
    ui->lblHotel->setText(getHotel());
    ui->lblPrice->setText(getPrice()+"€ ");
    if(getToDate().isNull())
    {
       ui->lblToDate->setText(getFromDate());
    }
    else
    {
       ui->lblToDate->setText(getToDate());
    }
    ui->lblTown->setText(getTown());
}

