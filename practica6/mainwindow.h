#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsItem>
#include <QList>
#include <QObject>
#include "cuerpo.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    int cantCuerpos;
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_aplicarBtn_clicked();

    void on_guardarValoresBtn_clicked();

private:
    Ui::MainWindow *ui;
    QGraphicsScene *escena;
    QList<cuerpo*> cuerpos;
};
#endif // MAINWINDOW_H
