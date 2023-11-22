#include "travelagencyui.h"
#include "./ui_travelagencyui.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QFile>
#include <QString>
#include <QDebug>
#include <QCloseEvent>
#include <QListWidget>
#include "menudialog.h"

TravelAgencyUI::TravelAgencyUI(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TravelAgencyUI)
{
    ui->setupUi(this);
    travel = new TravelAgency();
}

TravelAgencyUI::~TravelAgencyUI()
{
    delete ui;
}


void TravelAgencyUI::on_actionEinlesen_triggered()
{
        QFile file=QFileDialog::getOpenFileName(this,"Open File","bookings.json");
        file.open(QIODevice::ReadOnly | QIODevice::Text);
        QTextStream fileIn(&file);
        file.close();
            travel->readFile();
            QString text = fileIn.readAll();

            string stdString = travel->getPrint();
            QString qString = QString::fromStdString(stdString);

            if(travel->getCheck()==true)
            {
                QMessageBox box;
                box.setWindowTitle("Fehler beim Einlesen der Buchungen");
                box.setText("Leeres oder ungültiges Feld");
                box.setInformativeText("Das Einlesen der Buchungen wurde in der betroffenen Zeile gestoppt. Die vorangehenden Buchungen wurden erfolgreich angelegt");
                box.setStandardButtons(QMessageBox::Retry | QMessageBox::Discard | QMessageBox::Cancel);
                box.setDetailedText("Wenn Sie die Datei bereits korrigiert haben, wählen Sie 'Retry'. "
                                    "Wählen Sie 'Discard', um alle Buchungen zu löschen und 'Cancel',"
                                    "um die vorhandenen Buchungen stehenzulassen und diesen Dialog zu verlassen");
                int result=box.exec();
                if(result==QMessageBox::Retry)
                {
                    travel->resetCheck();
                    on_actionEinlesen_triggered();
                }
                else if(result==QMessageBox::Discard)
                {
                    delete travel;
                }
            }
            else
            {
                QMessageBox::information(this,"Datei erfolgreich eingelesen",qString);
                for(int i=0;i<travel->getBookingSize();i++)
                {
                    string strShowDetails = travel->getShowDetails(i);
                    QString qString = QString::fromStdString(strShowDetails);
                    ui->listWidget->addItem(qString);
                }
                 connect(ui->listWidget,&QListWidget::itemDoubleClicked,this,&TravelAgencyUI::on_listWidget_itemDoubleClicked);
            }
}

void TravelAgencyUI::on_listWidget_itemDoubleClicked(QListWidgetItem *item)
{
            disconnect(ui->listWidget, &QListWidget::itemDoubleClicked, this, &TravelAgencyUI::on_listWidget_itemDoubleClicked);
                if(item)
                {
                    int selectedRow = ui->listWidget->row(item);
                    if(travel->getType(selectedRow)=="R")
                    {
                            RentalCarUI dialog(this);
                            dialog.setModal(true);
                            Booking* book = travel->getObjectAtPos(selectedRow);
                            RentalCarReservation *rent = dynamic_cast<RentalCarReservation*>(book);
                            if(rent)
                            {
                                string pickUpLocation = rent->getPickupLocation();

                                QString qPickUpLocation = QString::fromStdString(rent->getPickupLocation());
                                dialog.setPickupLocation(qPickUpLocation);

                                QString qReturnLocation = QString::fromStdString(rent->getReturnLocation());
                                dialog.setReturnLocation(qReturnLocation);

                                QString qCompany = QString::fromStdString(rent->getCompany());
                                dialog.setCompany(qCompany);

                                QString qFromDate = rent->getQFromDate();
                                dialog.setFromDate(qFromDate);
                                qDebug()<<dialog.getFromDate();

                                QString qToDate = rent->getQToDate();
                                dialog.setToDate(qToDate);
                                qDebug()<<dialog.getToDate();

                                double price = rent->getPrice();
                                QString str;
                                str.setNum(price);
                                dialog.setPrice(price);
                                dialog.showDetails();
                                dialog.exec();
                            }
                    }
                    else if(travel->getType(selectedRow)=="T")
                    {
                            TrainTicketUI dialog(this);
                            dialog.setModal(true);
                            Booking* book = travel->getObjectAtPos(selectedRow);
                            TrainTicket *train = dynamic_cast<TrainTicket*>(book);
                            if(train)
                            {
                                QString fromDestination = QString::fromStdString(train->getFromDestination());
                                dialog.setFromDestination(fromDestination);

                                QString toDestination = QString::fromStdString(train->getToDestination());
                                dialog.setToDestination(toDestination);

                                QString departureTime = QString::fromStdString(train->getDepartureTime());
                                dialog.setDepartureTime(departureTime);

                                QString arrivalTime = QString::fromStdString(train->getArrivalTime());
                                dialog.setArrivalTime(arrivalTime);

                                dialog.setFromDate(train->getQFromDate());

                                dialog.setToDate(train->getQToDate());

                                double price = train->getPrice();
                                QString str;
                                str.setNum(price);
                                dialog.setPrice(price);

                                for(int i=0;i<train->connectingStationsAnzahl();i++)
                                {
                                    QString connectStation= QString::fromStdString(train->getConnectingStation(i));
                                    dialog.pushStrConnectingStation(connectStation);
                                }

                                dialog.showDetails();
                                dialog.exec();
                            }
                    }
                    else if(travel->getType(selectedRow)=="H")
                    {

                            HotelBookingUI dialog(this);
                            dialog.setModal(true);
                            Booking* book = travel->getObjectAtPos(selectedRow);
                            HotelBooking *h = dynamic_cast<HotelBooking*>(book);
                            if(h)
                            {
                                QString hotel = QString::fromStdString(h->getHotel());
                                dialog.setHotel(hotel);

                                QString town = QString::fromStdString(h->getTown());
                                dialog.setTown(town);

                                dialog.setFromDate(h->getQFromDate());

                                dialog.setToDate(h->getQToDate());

                                double price = h->getPrice();
                                QString str;
                                str.setNum(price);
                                dialog.setPrice(price);

                                dialog.showDetails();
                                dialog.exec();
                            }
                    }
                    else
                    {
                            FlightBookingUI dialog(this);
                            dialog.setModal(true);
                            Booking* book = travel->getObjectAtPos(selectedRow);
                            FlightBooking *flight = dynamic_cast<FlightBooking*>(book);
                            if(flight)
                            {
                                QString fromDes = QString::fromStdString(flight->getFromDestination());
                                dialog.setFromDestination(fromDes);

                                QString toDes = QString::fromStdString(flight->getToDestination());
                                dialog.setToDestination(toDes);

                                QString airline = QString::fromStdString(flight->getAirline());
                                dialog.setAirline(airline);

                                dialog.setFromDate(flight->getQFromDate());

                                dialog.setToDate(flight->getQToDate());

                                double price = flight->getPrice();
                                QString str;
                                str.setNum(price);
                                dialog.setPrice(price);
                                dialog.showDetails();
                                dialog.exec();
                            }
                    }
              }
}

void TravelAgencyUI::closeEvent(QCloseEvent *event)
{
            if(QMessageBox::question(this, "Bestätigen nochmals ", "Bist du sicher, das Fenster auszumachen?",QMessageBox::Yes | QMessageBox::No)==QMessageBox::Yes)
                {
                    event->accept();
                }
            else
                {
                    event->ignore();
                }

}

