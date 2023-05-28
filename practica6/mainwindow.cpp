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

    ui->widget->setVisible(false);
    ui->widget_2->setVisible(false);
    ui->widget_3->setVisible(false);
    ui->widget_4->setVisible(false);
    ui->widget_5->setVisible(false);
    ui->widget_6->setVisible(false);
    ui->widget_7->setVisible(false);
    ui->widget_8->setVisible(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_aplicarBtn_clicked()
{
    this->cantCuerpos = ui->cantCuerposSpinBox->value();

    if(cantCuerpos==1){
        ui->widget_8->setVisible(true);
        ui->widget->setVisible(true);
    }
    else if(cantCuerpos==2){
        ui->widget->setVisible(true);
        ui->widget_2->setVisible(true);
        ui->widget_3->setVisible(false);
        ui->widget_4->setVisible(false);
        ui->widget_5->setVisible(false);
        ui->widget_6->setVisible(false);
        ui->widget_7->setVisible(false);
        ui->widget_8->setVisible(true);
    }
    else if(cantCuerpos==3){
        ui->widget->setVisible(true);
        ui->widget_2->setVisible(true);
        ui->widget_3->setVisible(true);
        ui->widget_4->setVisible(false);
        ui->widget_5->setVisible(false);
        ui->widget_6->setVisible(false);
        ui->widget_7->setVisible(false);
        ui->widget_8->setVisible(true);
    }
    else if(cantCuerpos==4){
        ui->widget->setVisible(true);
        ui->widget_2->setVisible(true);
        ui->widget_3->setVisible(true);
        ui->widget_4->setVisible(true);
        ui->widget_5->setVisible(false);
        ui->widget_6->setVisible(false);
        ui->widget_7->setVisible(false);
        ui->widget_8->setVisible(true);
    }
    else if(cantCuerpos==5){
        ui->widget->setVisible(true);
        ui->widget_2->setVisible(true);
        ui->widget_3->setVisible(true);
        ui->widget_4->setVisible(true);
        ui->widget_5->setVisible(true);
        ui->widget_6->setVisible(false);
        ui->widget_7->setVisible(false);
        ui->widget_8->setVisible(true);
    }
    else if(cantCuerpos==6){
        ui->widget->setVisible(true);
        ui->widget_2->setVisible(true);
        ui->widget_3->setVisible(true);
        ui->widget_4->setVisible(true);
        ui->widget_5->setVisible(true);
        ui->widget_6->setVisible(true);
        ui->widget_7->setVisible(false);
        ui->widget_8->setVisible(true);
    }
    else if(cantCuerpos==7){
        ui->widget->setVisible(true);
        ui->widget_2->setVisible(true);
        ui->widget_3->setVisible(true);
        ui->widget_4->setVisible(true);
        ui->widget_5->setVisible(true);
        ui->widget_6->setVisible(true);
        ui->widget_7->setVisible(true);
        ui->widget_8->setVisible(true);
    }

    for(int i=0; i<cantCuerpos; i++){
        //ui->comboBox->addItem(QString::number(i+1));
        //cuerpos.push_back(new cuerpo(0,0,0,0,0,0));
    }
}

void MainWindow::on_guardarValoresBtn_clicked()
{

}

