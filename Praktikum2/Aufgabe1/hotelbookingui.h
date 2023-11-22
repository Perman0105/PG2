#ifndef HOTELBOOKINGUI_H
#define HOTELBOOKINGUI_H

#include <QDialog>
#include <QString>

namespace Ui {
class HotelBookingUI;
}

class HotelBookingUI : public QDialog
{
    Q_OBJECT

public:
    explicit HotelBookingUI(QWidget *parent = nullptr);
    ~HotelBookingUI();

    QString getHotel() const;
    void setHotel(const QString &newHotel);

    QString getTown() const;
    void setTown(const QString &newTown);

    QString getFromDate() const;
    void setFromDate(const QString &newFromDate);

    QString getToDate() const;
    void setToDate(const QString &newToDate);

    QString getPrice() const;
    void setPrice(double newPrice);

    void showDetails();

private:
    Ui::HotelBookingUI *ui;
    QString hotel;
    QString town;
    QString fromDate;
    QString toDate;
    double price;
};

#endif // HOTELBOOKINGUI_H
