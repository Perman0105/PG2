#include "rentalcarui.h"
#include "ui_rentalcarui.h"

RentalCarUI::RentalCarUI(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RentalCarUI)
{
    ui->setupUi(this);
}

RentalCarUI::~RentalCarUI()
{
    delete ui;
}

QString RentalCarUI::getPickupLocation() const
{
    return pickupLocation;
}

void RentalCarUI::setPickupLocation(const QString &newPickupLocation)
{
    pickupLocation = newPickupLocation;
}

QString RentalCarUI::getReturnLocation() const
{
    return returnLocation;
}

void RentalCarUI::setReturnLocation(const QString &newReturnLocation)
{
    returnLocation = newReturnLocation;
}

QString RentalCarUI::getCompany() const
{
    return company;
}

void RentalCarUI::setCompany(const QString &newCompany)
{
    company = newCompany;
}

QString RentalCarUI::getFromDate() const
{
    return fromDate;
}

void RentalCarUI::setFromDate(const QString &newFromDate)
{
    fromDate = newFromDate;
}

QString RentalCarUI::getToDate() const
{
    return toDate;
}

void RentalCarUI::setToDate(const QString &newToDate)
{
    toDate = newToDate;
}

QString RentalCarUI::getPrice() const
{
    QString str;
    str.setNum(price);
    return str;
}

void RentalCarUI::setPrice(const double &newPrice)
{
    price = newPrice;
}

void RentalCarUI::showDetails()
{
    ui->lblCompany->setText(getCompany());
    ui->lblPickupLoca->setText(getPickupLocation());
    ui->lblReturnLoca->setText(getReturnLocation());
    ui->lblFromDate->setText(getFromDate());
    if(getToDate().isNull())
    {
        ui->lblToDate->setText(getFromDate());
    }
    else
    {
        ui->lblToDate->setText(getToDate());
    }
    ui->lblPrice->setText(getPrice()+"€");
}

