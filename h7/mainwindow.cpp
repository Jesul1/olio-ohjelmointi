#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnCount_clicked()
{
    count += 1;
}


void MainWindow::on_btnReset_clicked()
{
    QString s = QString::number(count);
    ui->labelInfo->setText("Painiketta Count painettu " + s + " kertaa");
    ui->txtResult->setText(s);
    count = 0;
}


