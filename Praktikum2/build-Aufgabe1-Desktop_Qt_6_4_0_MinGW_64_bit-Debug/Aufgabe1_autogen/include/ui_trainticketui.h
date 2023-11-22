/********************************************************************************
** Form generated from reading UI file 'trainticketui.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRAINTICKETUI_H
#define UI_TRAINTICKETUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_TrainTicketUI
{
public:
    QLabel *label;
    QLabel *lblDeTime;
    QLabel *lblFromDate;
    QLabel *lblFromStation;
    QLabel *lblToDate;
    QLabel *lblToStation;
    QLabel *lblPrice;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *lblConectStation;

    void setupUi(QDialog *TrainTicketUI)
    {
        if (TrainTicketUI->objectName().isEmpty())
            TrainTicketUI->setObjectName("TrainTicketUI");
        TrainTicketUI->resize(438, 281);
        label = new QLabel(TrainTicketUI);
        label->setObjectName("label");
        label->setGeometry(QRect(140, 0, 231, 21));
        lblDeTime = new QLabel(TrainTicketUI);
        lblDeTime->setObjectName("lblDeTime");
        lblDeTime->setGeometry(QRect(160, 30, 261, 21));
        lblFromDate = new QLabel(TrainTicketUI);
        lblFromDate->setObjectName("lblFromDate");
        lblFromDate->setGeometry(QRect(160, 70, 261, 21));
        lblFromStation = new QLabel(TrainTicketUI);
        lblFromStation->setObjectName("lblFromStation");
        lblFromStation->setGeometry(QRect(160, 110, 261, 21));
        lblToDate = new QLabel(TrainTicketUI);
        lblToDate->setObjectName("lblToDate");
        lblToDate->setGeometry(QRect(160, 140, 261, 21));
        lblToStation = new QLabel(TrainTicketUI);
        lblToStation->setObjectName("lblToStation");
        lblToStation->setGeometry(QRect(160, 180, 261, 21));
        lblPrice = new QLabel(TrainTicketUI);
        lblPrice->setObjectName("lblPrice");
        lblPrice->setGeometry(QRect(160, 240, 261, 21));
        label_2 = new QLabel(TrainTicketUI);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, 30, 141, 20));
        label_3 = new QLabel(TrainTicketUI);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(0, 70, 141, 20));
        label_4 = new QLabel(TrainTicketUI);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(0, 110, 141, 20));
        label_5 = new QLabel(TrainTicketUI);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(0, 140, 141, 20));
        label_6 = new QLabel(TrainTicketUI);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(0, 179, 141, 21));
        label_7 = new QLabel(TrainTicketUI);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(0, 240, 141, 20));
        label_8 = new QLabel(TrainTicketUI);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(0, 210, 141, 21));
        lblConectStation = new QLabel(TrainTicketUI);
        lblConectStation->setObjectName("lblConectStation");
        lblConectStation->setGeometry(QRect(160, 210, 261, 21));

        retranslateUi(TrainTicketUI);

        QMetaObject::connectSlotsByName(TrainTicketUI);
    } // setupUi

    void retranslateUi(QDialog *TrainTicketUI)
    {
        TrainTicketUI->setWindowTitle(QCoreApplication::translate("TrainTicketUI", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("TrainTicketUI", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700;\">Train Ticket Information</span></p></body></html>", nullptr));
        lblDeTime->setText(QCoreApplication::translate("TrainTicketUI", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        lblFromDate->setText(QCoreApplication::translate("TrainTicketUI", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        lblFromStation->setText(QCoreApplication::translate("TrainTicketUI", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        lblToDate->setText(QCoreApplication::translate("TrainTicketUI", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        lblToStation->setText(QCoreApplication::translate("TrainTicketUI", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        lblPrice->setText(QCoreApplication::translate("TrainTicketUI", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("TrainTicketUI", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt;\">Departure Time</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("TrainTicketUI", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt;\">From Date</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("TrainTicketUI", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt;\">From Station</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("TrainTicketUI", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt;\">To Date</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("TrainTicketUI", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">To Station</span></p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("TrainTicketUI", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">Price</span></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("TrainTicketUI", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt;\">Connecting Stations</span></p></body></html>", nullptr));
        lblConectStation->setText(QCoreApplication::translate("TrainTicketUI", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TrainTicketUI: public Ui_TrainTicketUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRAINTICKETUI_H
