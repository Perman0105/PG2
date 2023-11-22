/********************************************************************************
** Form generated from reading UI file 'rentalcarui.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RENTALCARUI_H
#define UI_RENTALCARUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_RentalCarUI
{
public:
    QLabel *label;
    QLabel *lblCompany;
    QLabel *lblFromDate;
    QLabel *lblPickupLoca;
    QLabel *lblReturnLoca;
    QLabel *lblToDate;
    QLabel *lblPrice;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;

    void setupUi(QDialog *RentalCarUI)
    {
        if (RentalCarUI->objectName().isEmpty())
            RentalCarUI->setObjectName("RentalCarUI");
        RentalCarUI->resize(420, 284);
        label = new QLabel(RentalCarUI);
        label->setObjectName("label");
        label->setGeometry(QRect(120, 0, 171, 21));
        lblCompany = new QLabel(RentalCarUI);
        lblCompany->setObjectName("lblCompany");
        lblCompany->setGeometry(QRect(120, 30, 281, 21));
        lblFromDate = new QLabel(RentalCarUI);
        lblFromDate->setObjectName("lblFromDate");
        lblFromDate->setGeometry(QRect(120, 60, 281, 21));
        lblPickupLoca = new QLabel(RentalCarUI);
        lblPickupLoca->setObjectName("lblPickupLoca");
        lblPickupLoca->setGeometry(QRect(120, 100, 281, 21));
        lblReturnLoca = new QLabel(RentalCarUI);
        lblReturnLoca->setObjectName("lblReturnLoca");
        lblReturnLoca->setGeometry(QRect(120, 140, 281, 21));
        lblToDate = new QLabel(RentalCarUI);
        lblToDate->setObjectName("lblToDate");
        lblToDate->setGeometry(QRect(120, 180, 281, 21));
        lblPrice = new QLabel(RentalCarUI);
        lblPrice->setObjectName("lblPrice");
        lblPrice->setGeometry(QRect(120, 220, 281, 21));
        label_2 = new QLabel(RentalCarUI);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, 30, 111, 20));
        label_3 = new QLabel(RentalCarUI);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(0, 60, 111, 21));
        label_4 = new QLabel(RentalCarUI);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(0, 100, 111, 20));
        label_5 = new QLabel(RentalCarUI);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(0, 140, 111, 20));
        label_6 = new QLabel(RentalCarUI);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(0, 220, 111, 21));
        label_7 = new QLabel(RentalCarUI);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(0, 180, 111, 21));

        retranslateUi(RentalCarUI);

        QMetaObject::connectSlotsByName(RentalCarUI);
    } // setupUi

    void retranslateUi(QDialog *RentalCarUI)
    {
        RentalCarUI->setWindowTitle(QCoreApplication::translate("RentalCarUI", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("RentalCarUI", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700;\">Rental Car Reservation</span></p></body></html>", nullptr));
        lblCompany->setText(QCoreApplication::translate("RentalCarUI", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        lblFromDate->setText(QCoreApplication::translate("RentalCarUI", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        lblPickupLoca->setText(QCoreApplication::translate("RentalCarUI", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        lblReturnLoca->setText(QCoreApplication::translate("RentalCarUI", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        lblToDate->setText(QCoreApplication::translate("RentalCarUI", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        lblPrice->setText(QCoreApplication::translate("RentalCarUI", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("RentalCarUI", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt;\">Company</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("RentalCarUI", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt;\">From Date</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("RentalCarUI", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt;\">Pick up Location</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("RentalCarUI", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt;\">Return Location</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("RentalCarUI", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt;\">Price</span></p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("RentalCarUI", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt;\">To Date</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RentalCarUI: public Ui_RentalCarUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RENTALCARUI_H
