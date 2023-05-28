#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->cantCuerposSpinBox->setRange(0,6);
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
    cantCuerpos = ui->cantCuerposSpinBox->value();

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
    else if(cantCuerpos==0){
        ui->widget->setVisible(false);
        ui->widget_2->setVisible(false);
        ui->widget_3->setVisible(false);
        ui->widget_4->setVisible(false);
        ui->widget_5->setVisible(false);
        ui->widget_6->setVisible(false);
        ui->widget_7->setVisible(false);
        ui->widget_8->setVisible(false);
    }
}

void MainWindow::on_guardarValoresBtn_clicked()
{
    cuerpos.clear();
    if(ui->widget->isVisible()){
        cuerpos.push_back(new cuerpo(ui->w1_x0_sb->value(), ui->w1_Y0_sb->value(), ui->w1_m_dsb->value(), ui->w1_r_dsb->value(),
                                     ui->w1_vx0_dsb->value(), ui->w1_vy0_dsb->value()));
    }
    else if(ui->widget_2->isVisible()){
        cuerpos.push_back(new cuerpo(ui->w2_x0_sb->value(), ui->w2_Y0_sb->value(), ui->w2_m_dsb->value(),ui->w2_r_dsb->value(),
                                     ui->w2_vx0_dsb->value(), ui->w2_vy0_dsb->value()));
    }
    else if(ui->widget_3->isVisible()){
        cuerpos.push_back(new cuerpo(ui->w3_x0_sb->value(), ui->w3_Y0_sb->value(), ui->w3_m_dsb->value(), ui->w3_r_dsb->value(),
                                     ui->w3_vx0_dsb->value(), ui->w3_vy0_dsb->value()));
    }
    else if(ui->widget_4->isVisible()){
        cuerpos.push_back(new cuerpo(ui->w4_x0_sb->value(), ui->w4_Y0_sb->value(), ui->w4_m_dsb->value(), ui->w4_r_dsb->value(),
                                     ui->w4_vx0_dsb->value(), ui->w4_vy0_dsb->value()));
    }
    else if(ui->widget_5->isVisible()){
        cuerpos.push_back(new cuerpo(ui->w5_x0_sb->value(), ui->w5_Y0_sb->value(), ui->w5_m_dsb->value(), ui->w5_r_dsb->value(),
                                     ui->w5_vx0_dsb->value(), ui->w5_vy0_dsb->value()));
    }
    else if(ui->widget_6->isVisible()){
        cuerpos.push_back(new cuerpo(ui->w6_x0_sb->value(), ui->w6_Y0_sb->value(), ui->w6_m_dsb->value(), ui->w6_r_dsb->value(),
                                     ui->w6_vx0_dsb->value(), ui->w6_vy0_dsb->value()));
    }
    else if(ui->widget_7->isVisible()){
        cuerpos.push_back(new cuerpo(ui->w7_x0_sb->value(), ui->w7_Y0_sb->value(), ui->w7_m_dsb->value(), ui->w7_r_dsb->value(),
                                     ui->w7_vx0_dsb->value(), ui->w7_vy0_dsb->value()));
    }
}


void MainWindow::on_limpiarValoresBtn_clicked()
{
    this->cantCuerpos=0;
    cuerpos.clear();

    ui->widget->setVisible(false);
    ui->widget_2->setVisible(false);
    ui->widget_3->setVisible(false);
    ui->widget_4->setVisible(false);
    ui->widget_5->setVisible(false);
    ui->widget_6->setVisible(false);
    ui->widget_7->setVisible(false);
}


void MainWindow::on_startSimBtn_clicked()
{

}

