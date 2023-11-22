#include "auswahl.h"
#include "ui_auswahl.h"

Auswahl::Auswahl(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Auswahl)
{
    ui->setupUi(this);
}

Auswahl::~Auswahl()
{
    delete ui;
}

void Auswahl::on_Auswahl_customContextMenuRequested(const QPoint &pos)
{

}

