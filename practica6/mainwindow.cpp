#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtCore/qmath.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    T=0.1;

    ui->cantCuerposSpinBox->setRange(0,7);
    ui->w1_m_dsb->setMaximum(100000000);
    ui->w1_r_dsb->setMaximum(100000000);
    ui->w1_x0_sb->setRange(-100000000, 100000000);
    ui->w1_Y0_sb->setRange(-100000000, 100000000);
    ui->w1_vx0_dsb->setRange(-100000000, 100000000);
    ui->w1_vy0_dsb->setRange(-100000000, 100000000);

    ui->w2_m_dsb->setMaximum(100000000);
    ui->w2_r_dsb->setMaximum(100000000);
    ui->w2_x0_sb->setRange(-100000000, 100000000);
    ui->w2_Y0_sb->setRange(-100000000, 100000000);
    ui->w2_vx0_dsb->setRange(-100000000, 100000000);
    ui->w2_vy0_dsb->setRange(-100000000, 100000000);

    ui->w3_m_dsb->setMaximum(100000000);
    ui->w3_r_dsb->setMaximum(100000000);
    ui->w3_x0_sb->setRange(-100000000, 100000000);
    ui->w3_Y0_sb->setRange(-100000000, 100000000);
    ui->w3_vx0_dsb->setRange(-100000000, 100000000);
    ui->w3_vy0_dsb->setRange(-100000000, 100000000);

    ui->w4_m_dsb->setMaximum(100000000);
    ui->w4_r_dsb->setMaximum(100000000);
    ui->w4_x0_sb->setRange(-100000000, 100000000);
    ui->w4_Y0_sb->setRange(-100000000, 100000000);
    ui->w4_vx0_dsb->setRange(-100000000, 100000000);
    ui->w4_vy0_dsb->setRange(-100000000, 100000000);

    ui->w5_m_dsb->setMaximum(100000000);
    ui->w5_r_dsb->setMaximum(100000000);
    ui->w5_x0_sb->setRange(-100000000, 100000000);
    ui->w5_Y0_sb->setRange(-100000000, 100000000);
    ui->w5_vx0_dsb->setRange(-100000000, 100000000);
    ui->w5_vy0_dsb->setRange(-100000000, 100000000);

    ui->w6_m_dsb->setMaximum(100000000);
    ui->w6_r_dsb->setMaximum(100000000);
    ui->w6_x0_sb->setRange(-100000000, 100000000);
    ui->w6_Y0_sb->setRange(-100000000, 100000000);
    ui->w6_vx0_dsb->setRange(-100000000, 100000000);
    ui->w6_vy0_dsb->setRange(-100000000, 100000000);

    ui->w7_m_dsb->setMaximum(100000000);
    ui->w7_r_dsb->setMaximum(100000000);
    ui->w7_x0_sb->setRange(-100000000, 100000000);
    ui->w7_Y0_sb->setRange(-100000000, 100000000);
    ui->w7_vx0_dsb->setRange(-100000000, 100000000);
    ui->w7_vy0_dsb->setRange(-100000000, 100000000);

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

    time=new QTimer;
    connect(time, SIGNAL(timeout()), this, SLOT(mover_elemento()));
}

MainWindow::~MainWindow()
{
    delete ui;
    delete time;
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

    for(int i=0; i<=7; i++){
        QList<float> dists;
        cuerpos.append(new cuerpo(0,0,0,0,0,0));
        cuerpo *aux = cuerpos.at(i);
        aux->color=i;
    }
}

void MainWindow::on_guardarValoresBtn_clicked()
{
    for(int i=0; i<cuerpos.size(); i++){
        cuerpo *aux = cuerpos.at(i);
        if(i==0){
            aux->x = ui->w1_x0_sb->value();
            aux->y = ui->w1_Y0_sb->value();
            aux->m = ui->w1_m_dsb->value();
            aux->r = ui->w1_r_dsb->value();
            aux->vx = ui->w1_vx0_dsb->value();
            aux->vy = ui->w1_vy0_dsb->value();
        }
        else if(i==1){
            aux->x = ui->w2_x0_sb->value();
            aux->y = ui->w2_Y0_sb->value();
            aux->m = ui->w2_m_dsb->value();
            aux->r = ui->w2_r_dsb->value();
            aux->vx = ui->w2_vx0_dsb->value();
            aux->vy = ui->w2_vy0_dsb->value();
        }
        else if(i==2){
            aux->x = ui->w3_x0_sb->value();
            aux->y = ui->w3_Y0_sb->value();
            aux->m = ui->w3_m_dsb->value();
            aux->r = ui->w3_r_dsb->value();
            aux->vx = ui->w3_vx0_dsb->value();
            aux->vy = ui->w3_vy0_dsb->value();
        }
        else if(i==3){
            aux->x = ui->w4_x0_sb->value();
            aux->y = ui->w4_Y0_sb->value();
            aux->m = ui->w4_m_dsb->value();
            aux->r = ui->w4_r_dsb->value();
            aux->vx = ui->w4_vx0_dsb->value();
            aux->vy = ui->w4_vy0_dsb->value();
        }
        else if(i==4){
            aux->x = ui->w5_x0_sb->value();
            aux->y = ui->w5_Y0_sb->value();
            aux->m = ui->w5_m_dsb->value();
            aux->r = ui->w5_r_dsb->value();
            aux->vx = ui->w5_vx0_dsb->value();
            aux->vy = ui->w5_vy0_dsb->value();
        }
        else if(i==5){
            aux->x = ui->w6_x0_sb->value();
            aux->y = ui->w6_Y0_sb->value();
            aux->m = ui->w6_m_dsb->value();
            aux->r = ui->w6_r_dsb->value();
            aux->vx = ui->w6_vx0_dsb->value();
            aux->vy = ui->w6_vy0_dsb->value();
        }
        else if(i==6){
            aux->x = ui->w7_x0_sb->value();
            aux->y = ui->w7_Y0_sb->value();
            aux->m = ui->w7_m_dsb->value();
            aux->r = ui->w7_r_dsb->value();
            aux->vx = ui->w7_vx0_dsb->value();
            aux->vy = ui->w7_vy0_dsb->value();
        }
    }
}


void MainWindow::on_limpiarValoresBtn_clicked()
{
    cuerpos.clear();
    this->cantCuerpos=0;

    ui->widget->setVisible(false);
    ui->w1_x0_sb->setValue(0);
    ui->w1_Y0_sb->setValue(0);
    ui->w1_m_dsb->setValue(0);
    ui->w1_r_dsb->setValue(0);
    ui->w1_vx0_dsb->setValue(0);
    ui->w1_vy0_dsb->setValue(0);

    ui->widget_2->setVisible(false);
    ui->w2_x0_sb->setValue(0);
    ui->w2_Y0_sb->setValue(0);
    ui->w2_m_dsb->setValue(0);
    ui->w2_r_dsb->setValue(0);
    ui->w2_vx0_dsb->setValue(0);
    ui->w2_vy0_dsb->setValue(0);

    ui->widget_3->setVisible(false);
    ui->w3_x0_sb->setValue(0);
    ui->w3_Y0_sb->setValue(0);
    ui->w3_m_dsb->setValue(0);
    ui->w3_r_dsb->setValue(0);
    ui->w3_vx0_dsb->setValue(0);
    ui->w3_vy0_dsb->setValue(0);

    ui->widget_4->setVisible(false);
    ui->w4_x0_sb->setValue(0);
    ui->w4_Y0_sb->setValue(0);
    ui->w4_m_dsb->setValue(0);
    ui->w4_r_dsb->setValue(0);
    ui->w4_vx0_dsb->setValue(0);
    ui->w4_vy0_dsb->setValue(0);

    ui->widget_5->setVisible(false);
    ui->w5_x0_sb->setValue(0);
    ui->w5_Y0_sb->setValue(0);
    ui->w5_m_dsb->setValue(0);
    ui->w5_r_dsb->setValue(0);
    ui->w5_vx0_dsb->setValue(0);
    ui->w5_vy0_dsb->setValue(0);

    ui->widget_6->setVisible(false);
    ui->w6_x0_sb->setValue(0);
    ui->w6_Y0_sb->setValue(0);
    ui->w6_m_dsb->setValue(0);
    ui->w6_r_dsb->setValue(0);
    ui->w6_vx0_dsb->setValue(0);
    ui->w6_vy0_dsb->setValue(0);

    ui->widget_7->setVisible(false);
    ui->w7_x0_sb->setValue(0);
    ui->w7_Y0_sb->setValue(0);
    ui->w7_m_dsb->setValue(0);
    ui->w7_r_dsb->setValue(0);
    ui->w7_vx0_dsb->setValue(0);
    ui->w7_vy0_dsb->setValue(0);

}


void MainWindow::on_startSimBtn_clicked()
{
    escena->clear();
    for(int i=0; i<cuerpos.size(); i++){
        escena->addItem(cuerpos.at(i));
    }

    time->start(T*1000);
}

void MainWindow::mover_elemento()
{
    calcularDinamica();
}


void MainWindow::on_stopSimBtn_clicked()
{
    time->stop();
}

void MainWindow::calcularDinamica()
{
    cuerpo *c1, *c2;
    float r, angulo, G;

    for(int i=0; i<cantCuerpos; i++){
        c1=cuerpos.at(i);

        for(int j=0; j<cantCuerpos; j++){
            if(j != i){
                c2=cuerpos.at(j);

                r = qSqrt(pow(c2->x,2)+pow(c1->x,2));
                angulo = std::atan((c2->y - c1->y)/(c2->x - c2->y));
                G = 1;

                c1->ax += ((G*c2->m)/pow(r,2))*(1/std::sin(angulo));
                c1->ay += ((G*c2->m)/pow(r,2))* std::sin(angulo);
            }
        }        
        calcularCinematica(c1);
    }

}

void MainWindow::calcularCinematica(cuerpo *c1)
{
    c1->vx += c1->ax * T;
    c1->vy += c1->ay * T;
    c1->x += c1->vx*T;
    c1->y += c1->vy*T;
    c1->setPos(c1->x, c1->y);
}
