#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->cantCuerposSpinBox->setRange(1,6);
    escena= new QGraphicsScene;
    ui->simGraphicsView->setScene(escena);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_aplicarBtn_clicked()
{
    this->cantCuerpos = ui->cantCuerposSpinBox->value();
}
