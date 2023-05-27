/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_3;
    QTabWidget *TabWidget;
    QWidget *SetUpTab;
    QPushButton *aceptarBtn;
    QPushButton *defaultBtn;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *cuerpoLbl;
    QComboBox *comboBox;
    QVBoxLayout *verticalLayout_2;
    QLabel *X0Lbl;
    QSpinBox *spinBox;
    QVBoxLayout *verticalLayout_3;
    QLabel *Y0Lbl;
    QSpinBox *spinBox_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *masaLbl;
    QDoubleSpinBox *doubleSpinBox;
    QVBoxLayout *verticalLayout_5;
    QLabel *radioLbl;
    QDoubleSpinBox *doubleSpinBox_2;
    QVBoxLayout *verticalLayout_6;
    QLabel *velX0Lbl;
    QDoubleSpinBox *doubleSpinBox_3;
    QVBoxLayout *verticalLayout_7;
    QLabel *velY0Lbl;
    QDoubleSpinBox *doubleSpinBox_4;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *cantCuerposLbl;
    QSpinBox *cantCuerposSpinBox;
    QPushButton *aplicarBtn;
    QWidget *simTab;
    QGridLayout *gridLayout;
    QPushButton *stopSimBtn;
    QPushButton *startSimBtn;
    QGraphicsView *simGraphicsView;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout_3 = new QHBoxLayout(centralwidget);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        TabWidget = new QTabWidget(centralwidget);
        TabWidget->setObjectName("TabWidget");
        SetUpTab = new QWidget();
        SetUpTab->setObjectName("SetUpTab");
        aceptarBtn = new QPushButton(SetUpTab);
        aceptarBtn->setObjectName("aceptarBtn");
        aceptarBtn->setGeometry(QRect(9, 476, 80, 24));
        defaultBtn = new QPushButton(SetUpTab);
        defaultBtn->setObjectName("defaultBtn");
        defaultBtn->setGeometry(QRect(124, 476, 109, 24));
        widget = new QWidget(SetUpTab);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 110, 771, 71));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        cuerpoLbl = new QLabel(widget);
        cuerpoLbl->setObjectName("cuerpoLbl");
        cuerpoLbl->setAlignment(Qt::AlignCenter);
        cuerpoLbl->setMargin(0);

        verticalLayout->addWidget(cuerpoLbl);

        comboBox = new QComboBox(widget);
        comboBox->setObjectName("comboBox");

        verticalLayout->addWidget(comboBox);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        X0Lbl = new QLabel(widget);
        X0Lbl->setObjectName("X0Lbl");
        X0Lbl->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(X0Lbl);

        spinBox = new QSpinBox(widget);
        spinBox->setObjectName("spinBox");

        verticalLayout_2->addWidget(spinBox);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        Y0Lbl = new QLabel(widget);
        Y0Lbl->setObjectName("Y0Lbl");
        Y0Lbl->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(Y0Lbl);

        spinBox_2 = new QSpinBox(widget);
        spinBox_2->setObjectName("spinBox_2");

        verticalLayout_3->addWidget(spinBox_2);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        masaLbl = new QLabel(widget);
        masaLbl->setObjectName("masaLbl");
        masaLbl->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(masaLbl);

        doubleSpinBox = new QDoubleSpinBox(widget);
        doubleSpinBox->setObjectName("doubleSpinBox");

        verticalLayout_4->addWidget(doubleSpinBox);


        horizontalLayout->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        radioLbl = new QLabel(widget);
        radioLbl->setObjectName("radioLbl");
        radioLbl->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(radioLbl);

        doubleSpinBox_2 = new QDoubleSpinBox(widget);
        doubleSpinBox_2->setObjectName("doubleSpinBox_2");

        verticalLayout_5->addWidget(doubleSpinBox_2);


        horizontalLayout->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        velX0Lbl = new QLabel(widget);
        velX0Lbl->setObjectName("velX0Lbl");
        velX0Lbl->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(velX0Lbl);

        doubleSpinBox_3 = new QDoubleSpinBox(widget);
        doubleSpinBox_3->setObjectName("doubleSpinBox_3");

        verticalLayout_6->addWidget(doubleSpinBox_3);


        horizontalLayout->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        velY0Lbl = new QLabel(widget);
        velY0Lbl->setObjectName("velY0Lbl");
        velY0Lbl->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(velY0Lbl);

        doubleSpinBox_4 = new QDoubleSpinBox(widget);
        doubleSpinBox_4->setObjectName("doubleSpinBox_4");

        verticalLayout_7->addWidget(doubleSpinBox_4);


        horizontalLayout->addLayout(verticalLayout_7);

        widget1 = new QWidget(SetUpTab);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(0, 40, 311, 27));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        cantCuerposLbl = new QLabel(widget1);
        cantCuerposLbl->setObjectName("cantCuerposLbl");

        horizontalLayout_2->addWidget(cantCuerposLbl);

        cantCuerposSpinBox = new QSpinBox(widget1);
        cantCuerposSpinBox->setObjectName("cantCuerposSpinBox");

        horizontalLayout_2->addWidget(cantCuerposSpinBox);

        aplicarBtn = new QPushButton(widget1);
        aplicarBtn->setObjectName("aplicarBtn");

        horizontalLayout_2->addWidget(aplicarBtn);

        TabWidget->addTab(SetUpTab, QString());
        simTab = new QWidget();
        simTab->setObjectName("simTab");
        gridLayout = new QGridLayout(simTab);
        gridLayout->setObjectName("gridLayout");
        stopSimBtn = new QPushButton(simTab);
        stopSimBtn->setObjectName("stopSimBtn");

        gridLayout->addWidget(stopSimBtn, 2, 1, 1, 1);

        startSimBtn = new QPushButton(simTab);
        startSimBtn->setObjectName("startSimBtn");

        gridLayout->addWidget(startSimBtn, 2, 0, 1, 1);

        simGraphicsView = new QGraphicsView(simTab);
        simGraphicsView->setObjectName("simGraphicsView");

        gridLayout->addWidget(simGraphicsView, 0, 0, 1, 2);

        TabWidget->addTab(simTab, QString());

        horizontalLayout_3->addWidget(TabWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        TabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        aceptarBtn->setText(QCoreApplication::translate("MainWindow", "Aceptar", nullptr));
        defaultBtn->setText(QCoreApplication::translate("MainWindow", "Valores por defecto", nullptr));
        cuerpoLbl->setText(QCoreApplication::translate("MainWindow", "Cuerpo", nullptr));
        X0Lbl->setText(QCoreApplication::translate("MainWindow", "Posicion X inicial", nullptr));
        Y0Lbl->setText(QCoreApplication::translate("MainWindow", "Posicion Y inicial", nullptr));
        masaLbl->setText(QCoreApplication::translate("MainWindow", "Masa", nullptr));
        radioLbl->setText(QCoreApplication::translate("MainWindow", "Radio", nullptr));
        velX0Lbl->setText(QCoreApplication::translate("MainWindow", "Vel. X inicial", nullptr));
        velY0Lbl->setText(QCoreApplication::translate("MainWindow", "Vel. Y inicial", nullptr));
        cantCuerposLbl->setText(QCoreApplication::translate("MainWindow", "Cantidad de cuerpos", nullptr));
        aplicarBtn->setText(QCoreApplication::translate("MainWindow", "Aplicar", nullptr));
        TabWidget->setTabText(TabWidget->indexOf(SetUpTab), QCoreApplication::translate("MainWindow", "Set up", nullptr));
        stopSimBtn->setText(QCoreApplication::translate("MainWindow", "Detener simulacion", nullptr));
        startSimBtn->setText(QCoreApplication::translate("MainWindow", "Inicear simulacion", nullptr));
        TabWidget->setTabText(TabWidget->indexOf(simTab), QCoreApplication::translate("MainWindow", "Simulacion", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
