#ifndef RENTALCARUI_H
#define RENTALCARUI_H

#include <QDialog>
#include <QString>

namespace Ui {
class RentalCarUI;
}

class RentalCarUI : public QDialog
{
    Q_OBJECT

public:
    explicit RentalCarUI(QWidget *parent = nullptr);
    ~RentalCarUI();

    QString getPickupLocation() const;
    void setPickupLocation(const QString &newPickupLocation);

    QString getReturnLocation() const;
    void setReturnLocation(const QString &newReturnLocation);

    QString getCompany() const;
    void setCompany(const QString &newCompany);

    QString getFromDate() const;
    void setFromDate(const QString &newFromDate);

    QString getToDate() const;
    void setToDate(const QString &newToDate);

    QString getPrice() const;
    void setPrice(const double &newPrice);

    void showDetails();

private:
    Ui::RentalCarUI *ui;
    QString pickupLocation;
    QString returnLocation;
    QString company;
    QString fromDate;
    QString toDate;
    double price;
};

#endif // RENTALCARUI_H
