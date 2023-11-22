/********************************************************************************
** Form generated from reading UI file 'travelagencyui.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRAVELAGENCYUI_H
#define UI_TRAVELAGENCYUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TravelAgencyUI
{
public:
    QAction *actionEinlesen;
    QWidget *centralwidget;
    QListWidget *listWidget;
    QMenuBar *menubar;
    QMenu *menuDatei;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *TravelAgencyUI)
    {
        if (TravelAgencyUI->objectName().isEmpty())
            TravelAgencyUI->setObjectName("TravelAgencyUI");
        TravelAgencyUI->resize(1348, 719);
        actionEinlesen = new QAction(TravelAgencyUI);
        actionEinlesen->setObjectName("actionEinlesen");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icon/Image/datei-hinzufugen.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEinlesen->setIcon(icon);
        centralwidget = new QWidget(TravelAgencyUI);
        centralwidget->setObjectName("centralwidget");
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(0, 0, 1351, 631));
        TravelAgencyUI->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TravelAgencyUI);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1348, 21));
        menuDatei = new QMenu(menubar);
        menuDatei->setObjectName("menuDatei");
        TravelAgencyUI->setMenuBar(menubar);
        statusbar = new QStatusBar(TravelAgencyUI);
        statusbar->setObjectName("statusbar");
        TravelAgencyUI->setStatusBar(statusbar);
        toolBar = new QToolBar(TravelAgencyUI);
        toolBar->setObjectName("toolBar");
        TravelAgencyUI->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuDatei->menuAction());
        menuDatei->addAction(actionEinlesen);
        toolBar->addAction(actionEinlesen);

        retranslateUi(TravelAgencyUI);

        QMetaObject::connectSlotsByName(TravelAgencyUI);
    } // setupUi

    void retranslateUi(QMainWindow *TravelAgencyUI)
    {
        TravelAgencyUI->setWindowTitle(QCoreApplication::translate("TravelAgencyUI", "TravelAgencyUI", nullptr));
        actionEinlesen->setText(QCoreApplication::translate("TravelAgencyUI", "Einlesen", nullptr));
        menuDatei->setTitle(QCoreApplication::translate("TravelAgencyUI", "Datei", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("TravelAgencyUI", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TravelAgencyUI: public Ui_TravelAgencyUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRAVELAGENCYUI_H
