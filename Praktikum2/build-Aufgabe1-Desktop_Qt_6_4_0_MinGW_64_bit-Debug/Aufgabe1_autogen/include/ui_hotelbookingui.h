/********************************************************************************
** Form generated from reading UI file 'hotelbookingui.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOTELBOOKINGUI_H
#define UI_HOTELBOOKINGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_HotelBookingUI
{
public:
    QLabel *lblHotel;
    QLabel *lblTown;
    QLabel *lblFromDate;
    QLabel *label_2;
    QLabel *lblToDate;
    QLabel *lblPrice;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;

    void setupUi(QDialog *HotelBookingUI)
    {
        if (HotelBookingUI->objectName().isEmpty())
            HotelBookingUI->setObjectName("HotelBookingUI");
        HotelBookingUI->resize(400, 273);
        lblHotel = new QLabel(HotelBookingUI);
        lblHotel->setObjectName("lblHotel");
        lblHotel->setGeometry(QRect(90, 50, 291, 21));
        lblTown = new QLabel(HotelBookingUI);
        lblTown->setObjectName("lblTown");
        lblTown->setGeometry(QRect(90, 90, 291, 20));
        lblFromDate = new QLabel(HotelBookingUI);
        lblFromDate->setObjectName("lblFromDate");
        lblFromDate->setGeometry(QRect(90, 130, 291, 21));
        label_2 = new QLabel(HotelBookingUI);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(110, 0, 201, 31));
        lblToDate = new QLabel(HotelBookingUI);
        lblToDate->setObjectName("lblToDate");
        lblToDate->setGeometry(QRect(90, 170, 291, 21));
        lblPrice = new QLabel(HotelBookingUI);
        lblPrice->setObjectName("lblPrice");
        lblPrice->setGeometry(QRect(90, 210, 291, 21));
        label = new QLabel(HotelBookingUI);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 50, 81, 21));
        label_3 = new QLabel(HotelBookingUI);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(0, 90, 81, 21));
        label_4 = new QLabel(HotelBookingUI);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(0, 130, 81, 21));
        label_5 = new QLabel(HotelBookingUI);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(0, 170, 81, 21));
        label_6 = new QLabel(HotelBookingUI);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(0, 210, 81, 21));

        retranslateUi(HotelBookingUI);

        QMetaObject::connectSlotsByName(HotelBookingUI);
    } // setupUi

    void retranslateUi(QDialog *HotelBookingUI)
    {
        HotelBookingUI->setWindowTitle(QCoreApplication::translate("HotelBookingUI", "Dialog", nullptr));
        lblHotel->setText(QCoreApplication::translate("HotelBookingUI", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        lblTown->setText(QCoreApplication::translate("HotelBookingUI", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        lblFromDate->setText(QCoreApplication::translate("HotelBookingUI", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("HotelBookingUI", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700;\">Hotel Booking Information</span></p></body></html>", nullptr));
        lblToDate->setText(QCoreApplication::translate("HotelBookingUI", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        lblPrice->setText(QCoreApplication::translate("HotelBookingUI", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("HotelBookingUI", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt;\">Hotel</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("HotelBookingUI", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt;\">Town</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("HotelBookingUI", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt;\">From Date</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("HotelBookingUI", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt;\">To Date</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("HotelBookingUI", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt;\">Price</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HotelBookingUI: public Ui_HotelBookingUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOTELBOOKINGUI_H
