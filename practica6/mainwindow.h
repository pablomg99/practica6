#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsItem>
#include <QList>
#include <QObject>
#include <QTimer>
#include <cmath>
#include <iostream>
#include "cuerpo.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    int cantCuerpos;
    float T, g=1;
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_aplicarBtn_clicked();

    void on_guardarValoresBtn_clicked();

    void on_limpiarValoresBtn_clicked();

    void on_startSimBtn_clicked();

    void mover_elemento();

    void on_stopSimBtn_clicked();

private:
    Ui::MainWindow *ui;
    QGraphicsScene *escena;
    QList<cuerpo*> cuerpos;
    QTimer *time;
    void calcularDinamica();
    void calcularCinematica(cuerpo *c1);
};
#endif // MAINWINDOW_H
