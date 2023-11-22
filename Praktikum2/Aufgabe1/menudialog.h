#ifndef MENUDIALOG_H
#define MENUDIALOG_H

#include <QDialog>
#include <QString>
#include <QFile>
#include <QMessageBox>
#include "travelagency.h"

namespace Ui {
class MenuDialog;
}

class MenuDialog : public QDialog
{
    Q_OBJECT

public:
    explicit MenuDialog(QWidget *parent = nullptr);
    ~MenuDialog();

private slots:
    void on_btnHotel_clicked();

    void on_lblRentCar_clicked();

    void on_lblTrainTicket_clicked();

    void on_lblFlightBooking_clicked();

private:
    Ui::MenuDialog *ui;
    TravelAgency *travel = new TravelAgency();
};

#endif // MENUDIALOG_H
