#include "primeraqt.h"
#include "ui_primeraqt.h"

PrimeraQt::PrimeraQt(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PrimeraQt)
{
    ui->setupUi(this);
}

PrimeraQt::~PrimeraQt()
{
    delete ui;
}

void PrimeraQt::on_btn_user_clicked()
{
    //ui->txt_result->setText("Activado Modo Usuario");
}

void PrimeraQt::on_btn_developer_clicked()
{
    //ui->txt_result->setText("Activado Modo Desarrollador");
}
