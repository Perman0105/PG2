/********************************************************************************
** Form generated from reading UI file 'flightbookingui.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLIGHTBOOKINGUI_H
#define UI_FLIGHTBOOKINGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_FlightBookingUI
{
public:
    QLabel *label;
    QLabel *lblAirline;
    QLabel *lblFromDate;
    QLabel *lblFromDest;
    QLabel *lblToDate;
    QLabel *lblToDest;
    QLabel *lblPrice;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;

    void setupUi(QDialog *FlightBookingUI)
    {
        if (FlightBookingUI->objectName().isEmpty())
            FlightBookingUI->setObjectName("FlightBookingUI");
        FlightBookingUI->resize(400, 283);
        label = new QLabel(FlightBookingUI);
        label->setObjectName("label");
        label->setGeometry(QRect(110, 0, 191, 41));
        lblAirline = new QLabel(FlightBookingUI);
        lblAirline->setObjectName("lblAirline");
        lblAirline->setGeometry(QRect(100, 30, 281, 31));
        lblFromDate = new QLabel(FlightBookingUI);
        lblFromDate->setObjectName("lblFromDate");
        lblFromDate->setGeometry(QRect(98, 70, 281, 31));
        lblFromDest = new QLabel(FlightBookingUI);
        lblFromDest->setObjectName("lblFromDest");
        lblFromDest->setGeometry(QRect(98, 110, 281, 31));
        lblToDate = new QLabel(FlightBookingUI);
        lblToDate->setObjectName("lblToDate");
        lblToDate->setGeometry(QRect(100, 150, 281, 31));
        lblToDest = new QLabel(FlightBookingUI);
        lblToDest->setObjectName("lblToDest");
        lblToDest->setGeometry(QRect(100, 190, 281, 31));
        lblPrice = new QLabel(FlightBookingUI);
        lblPrice->setObjectName("lblPrice");
        lblPrice->setGeometry(QRect(100, 230, 281, 31));
        label_2 = new QLabel(FlightBookingUI);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 30, 71, 31));
        label_3 = new QLabel(FlightBookingUI);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 70, 71, 31));
        label_4 = new QLabel(FlightBookingUI);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 110, 71, 31));
        label_5 = new QLabel(FlightBookingUI);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 150, 71, 31));
        label_6 = new QLabel(FlightBookingUI);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 190, 71, 31));
        label_7 = new QLabel(FlightBookingUI);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(10, 230, 71, 31));

        retranslateUi(FlightBookingUI);

        QMetaObject::connectSlotsByName(FlightBookingUI);
    } // setupUi

    void retranslateUi(QDialog *FlightBookingUI)
    {
        FlightBookingUI->setWindowTitle(QCoreApplication::translate("FlightBookingUI", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("FlightBookingUI", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700;\">Flight Booking Information</span></p></body></html>", nullptr));
        lblAirline->setText(QCoreApplication::translate("FlightBookingUI", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        lblFromDate->setText(QCoreApplication::translate("FlightBookingUI", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        lblFromDest->setText(QCoreApplication::translate("FlightBookingUI", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        lblToDate->setText(QCoreApplication::translate("FlightBookingUI", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        lblToDest->setText(QCoreApplication::translate("FlightBookingUI", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        lblPrice->setText(QCoreApplication::translate("FlightBookingUI", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("FlightBookingUI", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt;\">Airline</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("FlightBookingUI", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt;\">From Date</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("FlightBookingUI", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt;\">From Dest</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("FlightBookingUI", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt;\">To Date</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("FlightBookingUI", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt;\">To Dest</span></p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("FlightBookingUI", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt;\">Price</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FlightBookingUI: public Ui_FlightBookingUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLIGHTBOOKINGUI_H
