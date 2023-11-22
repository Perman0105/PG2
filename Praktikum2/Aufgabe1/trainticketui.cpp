#include "trainticketui.h"
#include "ui_trainticketui.h"

TrainTicketUI::TrainTicketUI(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TrainTicketUI)
{
    ui->setupUi(this);
}

TrainTicketUI::~TrainTicketUI()
{
    delete ui;
}

QString TrainTicketUI::getFromDestination() const
{
    return fromDestination;
}

void TrainTicketUI::setFromDestination(const QString &newFromDestination)
{
    fromDestination = newFromDestination;
}

QString TrainTicketUI::getToDestination() const
{
    return toDestination;
}

void TrainTicketUI::setToDestination(const QString &newToDestination)
{
    toDestination = newToDestination;
}

QString TrainTicketUI::getDepartureTime() const
{
    return departureTime;
}

void TrainTicketUI::setDepartureTime(const QString &newDepartureTime)
{
    departureTime = newDepartureTime;
}

QString TrainTicketUI::getArrivalTime() const
{
    return arrivalTime;
}

void TrainTicketUI::setArrivalTime(const QString &newArrivalTime)
{
    arrivalTime = newArrivalTime;
}

void TrainTicketUI::pushStrConnectingStation(const QString &conSta)
{
    connectingStations.push_back(conSta);
}


QString TrainTicketUI::getPrice() const
{
    QString str;
    str.setNum(price);
    return str;
}

void TrainTicketUI::setPrice(double newPrice)
{
    price = newPrice;
}

void TrainTicketUI::showDetails()
{
    QString connectSta;
    if(connectingStations.size()>0)
    {
        for(int i=0;i<connectingStations.size();i++)
        {
            connectSta=connectingStations[i]+"  "+connectSta;
        }
    }
    else
    {
        connectSta="Keine Verbindungsbahnhöfe";
    }
    ui->lblConectStation->setText(connectSta);
    ui->lblDeTime->setText(getDepartureTime());
    ui->lblFromDate->setText(getFromDate());
    if(getToDate().isNull())
    {
        ui->lblToDate->setText(getFromDate());
    }
    else
    {
        ui->lblToDate->setText(getToDate());
    }
    ui->lblFromStation->setText(getFromDestination());
    ui->lblToStation->setText(getToDestination());
    ui->lblPrice->setText(getPrice()+"€ ");
}

QString TrainTicketUI::getFromDate() const
{
    return fromDate;
}

void TrainTicketUI::setFromDate(const QString &newFromDate)
{
    fromDate = newFromDate;
}

QString TrainTicketUI::getToDate() const
{
    return toDate;
}

void TrainTicketUI::setToDate(const QString &newToDate)
{
    toDate = newToDate;
}


