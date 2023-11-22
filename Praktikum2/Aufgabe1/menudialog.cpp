#include "menudialog.h"
#include "ui_menudialog.h"

MenuDialog::MenuDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MenuDialog)
{
    ui->setupUi(this);
    travel = new TravelAgency();
    QFile file("bookings.json");
    file.open(QIODevice::ReadOnly | QIODevice::Text);
    QTextStream fileIn(&file); //point to file
    travel->readFile();
    QString text = fileIn.readAll();
}

MenuDialog::~MenuDialog()
{
    delete ui;
}

void MenuDialog::on_btnHotel_clicked()
{
    string stdString = travel->checkType("H");
    QString qString = QString::fromStdString(stdString);

    QMessageBox box;
    box.setWindowTitle("Hotel Booking");
    box.setText(qString);
    box.setStandardButtons(QMessageBox::Ok);
    box.exec();
}


void MenuDialog::on_lblRentCar_clicked()
{
    string stdString = travel->checkType("R");
    QString qString = QString::fromStdString(stdString);

    QMessageBox box;
    box.setWindowTitle("Rental Car Reservation");
    box.setText(qString);
    box.setStandardButtons(QMessageBox::Ok);
    box.exec();
}


void MenuDialog::on_lblTrainTicket_clicked()
{
    string stdString = travel->checkType("T");
    QString qString = QString::fromStdString(stdString);

    QMessageBox box;
    box.setWindowTitle("Train Ticket");
    box.setText(qString);
//    box.setInformativeText(travel->);
    box.setStandardButtons(QMessageBox::Ok);
    box.exec();
}


void MenuDialog::on_lblFlightBooking_clicked()
{
    string stdString = travel->checkType("F");
    QString qString = QString::fromStdString(stdString);

    QMessageBox box;
    box.setWindowTitle("Flight Booking");
    box.setText(qString);
    box.setStandardButtons(QMessageBox::Ok);
    box.exec();
}
