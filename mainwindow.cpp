#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QTimer>
#include <QDateTime>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QTimer *timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(showTime()));
    timer->start();
}

void MainWindow::showTime()
{
    QTime time = QTime::currentTime();
    QString timeTxt = time.toString("hh : mm : ss");

    ui->My_Clock->setText(timeTxt);
}

MainWindow::~MainWindow()
{
    delete ui;
}

