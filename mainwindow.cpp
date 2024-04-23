#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->time_before->setText("2023-12-20");
    QString time=QDate::currentDate().toString("yyyy-M-d");
    ui->time_later->setText(time);
    QDate date=QDate::fromString(ui->time_before->text(),"yyyy-M-d");
    int data=date.daysTo(QDate::currentDate());
    ui->time_final->setText(QString("%1周%2天").arg(data/7).arg(data%7));
    ui->time_mouth->setText(QString("%1月%2天").arg(data/30).arg(data%30));
    ui->prog->setMaximum(280);
    qDebug()<<"data/280="<<data/280.0;
    ui->prog->setValue(data);
//    ui->time_final->setText(QDate::currentDate().daysTo(QDate::fromString(ui->time_before->text(),("yyyy-M-d"))));
}

MainWindow::~MainWindow()
{
    delete ui;
}
