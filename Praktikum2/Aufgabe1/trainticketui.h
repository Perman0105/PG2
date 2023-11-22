#ifndef TRAINTICKETUI_H
#define TRAINTICKETUI_H

#include <QDialog>
#include <QString>
#include <QVector>

namespace Ui {
class TrainTicketUI;
}

class TrainTicketUI : public QDialog
{
    Q_OBJECT

public:
    explicit TrainTicketUI(QWidget *parent = nullptr);
    ~TrainTicketUI();

    QString getFromDestination() const;
    void setFromDestination(const QString &newFromDestination);

    QString getToDestination() const;
    void setToDestination(const QString &newToDestination);

    QString getDepartureTime() const;
    void setDepartureTime(const QString &newDepartureTime);

    QString getArrivalTime() const;
    void setArrivalTime(const QString &newArrivalTime);

    void pushStrConnectingStation(const QString &conSta);

    QString getPrice() const;
    void setPrice(double newPrice);

    void showDetails();

    QString getFromDate() const;
    void setFromDate(const QString &newFromDate);

    QString getToDate() const;
    void setToDate(const QString &newToDate);

private:
    Ui::TrainTicketUI *ui;
    QString fromDestination;
    QString toDestination;
    QString departureTime;
    QString arrivalTime;
    QString fromDate;
    QString toDate;
    double price;
    QVector <QString> connectingStations;
};

#endif // TRAINTICKETUI_H
