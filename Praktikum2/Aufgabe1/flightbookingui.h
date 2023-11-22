#ifndef FLIGHTBOOKINGUI_H
#define FLIGHTBOOKINGUI_H

#include <QDialog>

namespace Ui {
class FlightBookingUI;
}

class FlightBookingUI : public QDialog
{
    Q_OBJECT

public:
    explicit FlightBookingUI(QWidget *parent = nullptr);
    ~FlightBookingUI();

    void showDetails();
    QString getFromDestination() const;
    void setFromDestination(const QString &newFromDestination);

    QString getToDestination() const;
    void setToDestination(const QString &newToDestination);

    QString getAirline() const;
    void setAirline(const QString &newAirline);


    QString getFromDate() const;
    void setFromDate(const QString &newFromDate);

    QString getToDate() const;
    void setToDate(const QString &newToDate);

    QString getPrice() const;
    void setPrice(double newPrice);

private:
    Ui::FlightBookingUI *ui;
    QString fromDestination;
    QString toDestination;
    QString airline;
    QString fromDate;
    QString toDate;
    double price;
};

#endif // FLIGHTBOOKINGUI_H
