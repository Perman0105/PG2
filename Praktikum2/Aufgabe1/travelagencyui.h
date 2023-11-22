#ifndef TRAVELAGENCYUI_H
#define TRAVELAGENCYUI_H

#include <QMainWindow>
#include <QListWidgetItem>
#include <QListWidget>
#include <QMessageBox>
#include <QDebug>
#include <QDialog>
#include "travelagency.h"
#include "rentalcarui.h"
#include "hotelbookingui.h"
#include "trainticketui.h"
#include "flightbookingui.h"

using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class TravelAgencyUI; }
QT_END_NAMESPACE

class TravelAgencyUI : public QMainWindow
{
    Q_OBJECT

public:
    TravelAgencyUI(QWidget *parent = nullptr);
    string getShowDetails(int pos);
    ~TravelAgencyUI();

private slots:
    void on_actionEinlesen_triggered();
    void closeEvent(QCloseEvent *event);
    void on_listWidget_itemDoubleClicked(QListWidgetItem *item);

private:
    Ui::TravelAgencyUI *ui;
    QListWidget *listWidget;
    TravelAgency *travel;
};
#endif // TRAVELAGENCYUI_H
