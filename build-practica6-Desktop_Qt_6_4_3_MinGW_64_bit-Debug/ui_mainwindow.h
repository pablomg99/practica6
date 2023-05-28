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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_3;
    QTabWidget *TabWidget;
    QWidget *SetUpTab;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *cantCuerposLbl;
    QSpinBox *cantCuerposSpinBox;
    QPushButton *aplicarBtn;
    QWidget *widget;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QSpinBox *w1_x0_sb;
    QSpinBox *w1_Y0_sb;
    QDoubleSpinBox *w1_m_dsb;
    QDoubleSpinBox *w1_r_dsb;
    QDoubleSpinBox *w1_vx0_dsb;
    QDoubleSpinBox *w1_vy0_dsb;
    QWidget *widget_2;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_8;
    QSpinBox *w2_x0_sb;
    QSpinBox *w2_Y0_sb;
    QDoubleSpinBox *w2_m_dsb;
    QDoubleSpinBox *w2_r_dsb;
    QDoubleSpinBox *w2_vx0_dsb;
    QDoubleSpinBox *w2_vy0_dsb;
    QWidget *widget_3;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_9;
    QSpinBox *w3_x0_sb;
    QSpinBox *w3_Y0_sb;
    QDoubleSpinBox *w3_m_dsb;
    QDoubleSpinBox *w3_r_dsb;
    QDoubleSpinBox *w3_vx0_dsb;
    QDoubleSpinBox *w3_vy0_dsb;
    QWidget *widget_4;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_10;
    QSpinBox *w4_x0_sb;
    QSpinBox *w4_Y0_sb;
    QDoubleSpinBox *w4_m_dsb;
    QDoubleSpinBox *w4_r_dsb;
    QDoubleSpinBox *w4_vx0_dsb;
    QDoubleSpinBox *w4_vy0_dsb;
    QWidget *widget_5;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_11;
    QSpinBox *w5_x0_sb;
    QSpinBox *w5_Y0_sb;
    QDoubleSpinBox *w5_m_dsb;
    QDoubleSpinBox *w5_r_dsb;
    QDoubleSpinBox *w5_vx0_dsb;
    QDoubleSpinBox *w5_vy0_dsb;
    QWidget *widget_6;
    QWidget *layoutWidget_8;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_12;
    QSpinBox *w6_x0_sb;
    QSpinBox *w6_Y0_sb;
    QDoubleSpinBox *w6_m_dsb;
    QDoubleSpinBox *w6_r_dsb;
    QDoubleSpinBox *w6_vx0_dsb;
    QDoubleSpinBox *w6_vy0_dsb;
    QWidget *widget_7;
    QWidget *layoutWidget_9;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_13;
    QSpinBox *w7_x0_sb;
    QSpinBox *w7_Y0_sb;
    QDoubleSpinBox *w7_m_dsb;
    QDoubleSpinBox *w7_r_dsb;
    QDoubleSpinBox *w7_vx0_dsb;
    QDoubleSpinBox *w7_vy0_dsb;
    QWidget *widget_8;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout;
    QLabel *cuerpoLbl;
    QLabel *X0Lbl;
    QLabel *Y0Lbl;
    QLabel *masaLbl;
    QLabel *radioLbl;
    QLabel *velX0Lbl;
    QLabel *velY0Lbl;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *guardarValoresBtn;
    QPushButton *limpiarValoresBtn;
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
        layoutWidget = new QWidget(SetUpTab);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(0, 40, 311, 27));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        cantCuerposLbl = new QLabel(layoutWidget);
        cantCuerposLbl->setObjectName("cantCuerposLbl");

        horizontalLayout_2->addWidget(cantCuerposLbl);

        cantCuerposSpinBox = new QSpinBox(layoutWidget);
        cantCuerposSpinBox->setObjectName("cantCuerposSpinBox");

        horizontalLayout_2->addWidget(cantCuerposSpinBox);

        aplicarBtn = new QPushButton(layoutWidget);
        aplicarBtn->setObjectName("aplicarBtn");

        horizontalLayout_2->addWidget(aplicarBtn);

        widget = new QWidget(SetUpTab);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 140, 781, 31));
        layoutWidget1 = new QWidget(widget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(0, 0, 771, 27));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName("label");

        horizontalLayout_5->addWidget(label, 0, Qt::AlignHCenter);

        w1_x0_sb = new QSpinBox(layoutWidget1);
        w1_x0_sb->setObjectName("w1_x0_sb");

        horizontalLayout_5->addWidget(w1_x0_sb);

        w1_Y0_sb = new QSpinBox(layoutWidget1);
        w1_Y0_sb->setObjectName("w1_Y0_sb");

        horizontalLayout_5->addWidget(w1_Y0_sb);

        w1_m_dsb = new QDoubleSpinBox(layoutWidget1);
        w1_m_dsb->setObjectName("w1_m_dsb");

        horizontalLayout_5->addWidget(w1_m_dsb);

        w1_r_dsb = new QDoubleSpinBox(layoutWidget1);
        w1_r_dsb->setObjectName("w1_r_dsb");

        horizontalLayout_5->addWidget(w1_r_dsb);

        w1_vx0_dsb = new QDoubleSpinBox(layoutWidget1);
        w1_vx0_dsb->setObjectName("w1_vx0_dsb");

        horizontalLayout_5->addWidget(w1_vx0_dsb);

        w1_vy0_dsb = new QDoubleSpinBox(layoutWidget1);
        w1_vy0_dsb->setObjectName("w1_vy0_dsb");

        horizontalLayout_5->addWidget(w1_vy0_dsb);

        widget_2 = new QWidget(SetUpTab);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(0, 180, 781, 31));
        layoutWidget_2 = new QWidget(widget_2);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(0, 0, 771, 27));
        horizontalLayout_12 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget_2);
        label_8->setObjectName("label_8");

        horizontalLayout_12->addWidget(label_8, 0, Qt::AlignHCenter);

        w2_x0_sb = new QSpinBox(layoutWidget_2);
        w2_x0_sb->setObjectName("w2_x0_sb");

        horizontalLayout_12->addWidget(w2_x0_sb);

        w2_Y0_sb = new QSpinBox(layoutWidget_2);
        w2_Y0_sb->setObjectName("w2_Y0_sb");

        horizontalLayout_12->addWidget(w2_Y0_sb);

        w2_m_dsb = new QDoubleSpinBox(layoutWidget_2);
        w2_m_dsb->setObjectName("w2_m_dsb");

        horizontalLayout_12->addWidget(w2_m_dsb);

        w2_r_dsb = new QDoubleSpinBox(layoutWidget_2);
        w2_r_dsb->setObjectName("w2_r_dsb");

        horizontalLayout_12->addWidget(w2_r_dsb);

        w2_vx0_dsb = new QDoubleSpinBox(layoutWidget_2);
        w2_vx0_dsb->setObjectName("w2_vx0_dsb");

        horizontalLayout_12->addWidget(w2_vx0_dsb);

        w2_vy0_dsb = new QDoubleSpinBox(layoutWidget_2);
        w2_vy0_dsb->setObjectName("w2_vy0_dsb");

        horizontalLayout_12->addWidget(w2_vy0_dsb);

        widget_3 = new QWidget(SetUpTab);
        widget_3->setObjectName("widget_3");
        widget_3->setGeometry(QRect(0, 220, 781, 31));
        layoutWidget_3 = new QWidget(widget_3);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(0, 0, 771, 27));
        horizontalLayout_13 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget_3);
        label_9->setObjectName("label_9");

        horizontalLayout_13->addWidget(label_9, 0, Qt::AlignHCenter);

        w3_x0_sb = new QSpinBox(layoutWidget_3);
        w3_x0_sb->setObjectName("w3_x0_sb");

        horizontalLayout_13->addWidget(w3_x0_sb);

        w3_Y0_sb = new QSpinBox(layoutWidget_3);
        w3_Y0_sb->setObjectName("w3_Y0_sb");

        horizontalLayout_13->addWidget(w3_Y0_sb);

        w3_m_dsb = new QDoubleSpinBox(layoutWidget_3);
        w3_m_dsb->setObjectName("w3_m_dsb");

        horizontalLayout_13->addWidget(w3_m_dsb);

        w3_r_dsb = new QDoubleSpinBox(layoutWidget_3);
        w3_r_dsb->setObjectName("w3_r_dsb");

        horizontalLayout_13->addWidget(w3_r_dsb);

        w3_vx0_dsb = new QDoubleSpinBox(layoutWidget_3);
        w3_vx0_dsb->setObjectName("w3_vx0_dsb");

        horizontalLayout_13->addWidget(w3_vx0_dsb);

        w3_vy0_dsb = new QDoubleSpinBox(layoutWidget_3);
        w3_vy0_dsb->setObjectName("w3_vy0_dsb");

        horizontalLayout_13->addWidget(w3_vy0_dsb);

        widget_4 = new QWidget(SetUpTab);
        widget_4->setObjectName("widget_4");
        widget_4->setGeometry(QRect(0, 260, 781, 31));
        layoutWidget_4 = new QWidget(widget_4);
        layoutWidget_4->setObjectName("layoutWidget_4");
        layoutWidget_4->setGeometry(QRect(0, 0, 771, 27));
        horizontalLayout_14 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        horizontalLayout_14->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(layoutWidget_4);
        label_10->setObjectName("label_10");

        horizontalLayout_14->addWidget(label_10, 0, Qt::AlignHCenter);

        w4_x0_sb = new QSpinBox(layoutWidget_4);
        w4_x0_sb->setObjectName("w4_x0_sb");

        horizontalLayout_14->addWidget(w4_x0_sb);

        w4_Y0_sb = new QSpinBox(layoutWidget_4);
        w4_Y0_sb->setObjectName("w4_Y0_sb");

        horizontalLayout_14->addWidget(w4_Y0_sb);

        w4_m_dsb = new QDoubleSpinBox(layoutWidget_4);
        w4_m_dsb->setObjectName("w4_m_dsb");

        horizontalLayout_14->addWidget(w4_m_dsb);

        w4_r_dsb = new QDoubleSpinBox(layoutWidget_4);
        w4_r_dsb->setObjectName("w4_r_dsb");

        horizontalLayout_14->addWidget(w4_r_dsb);

        w4_vx0_dsb = new QDoubleSpinBox(layoutWidget_4);
        w4_vx0_dsb->setObjectName("w4_vx0_dsb");

        horizontalLayout_14->addWidget(w4_vx0_dsb);

        w4_vy0_dsb = new QDoubleSpinBox(layoutWidget_4);
        w4_vy0_dsb->setObjectName("w4_vy0_dsb");

        horizontalLayout_14->addWidget(w4_vy0_dsb);

        widget_5 = new QWidget(SetUpTab);
        widget_5->setObjectName("widget_5");
        widget_5->setGeometry(QRect(0, 300, 781, 31));
        layoutWidget_5 = new QWidget(widget_5);
        layoutWidget_5->setObjectName("layoutWidget_5");
        layoutWidget_5->setGeometry(QRect(0, 0, 771, 27));
        horizontalLayout_15 = new QHBoxLayout(layoutWidget_5);
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        horizontalLayout_15->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(layoutWidget_5);
        label_11->setObjectName("label_11");

        horizontalLayout_15->addWidget(label_11, 0, Qt::AlignHCenter);

        w5_x0_sb = new QSpinBox(layoutWidget_5);
        w5_x0_sb->setObjectName("w5_x0_sb");

        horizontalLayout_15->addWidget(w5_x0_sb);

        w5_Y0_sb = new QSpinBox(layoutWidget_5);
        w5_Y0_sb->setObjectName("w5_Y0_sb");

        horizontalLayout_15->addWidget(w5_Y0_sb);

        w5_m_dsb = new QDoubleSpinBox(layoutWidget_5);
        w5_m_dsb->setObjectName("w5_m_dsb");

        horizontalLayout_15->addWidget(w5_m_dsb);

        w5_r_dsb = new QDoubleSpinBox(layoutWidget_5);
        w5_r_dsb->setObjectName("w5_r_dsb");

        horizontalLayout_15->addWidget(w5_r_dsb);

        w5_vx0_dsb = new QDoubleSpinBox(layoutWidget_5);
        w5_vx0_dsb->setObjectName("w5_vx0_dsb");

        horizontalLayout_15->addWidget(w5_vx0_dsb);

        w5_vy0_dsb = new QDoubleSpinBox(layoutWidget_5);
        w5_vy0_dsb->setObjectName("w5_vy0_dsb");

        horizontalLayout_15->addWidget(w5_vy0_dsb);

        widget_6 = new QWidget(SetUpTab);
        widget_6->setObjectName("widget_6");
        widget_6->setGeometry(QRect(0, 340, 781, 31));
        layoutWidget_8 = new QWidget(widget_6);
        layoutWidget_8->setObjectName("layoutWidget_8");
        layoutWidget_8->setGeometry(QRect(0, 0, 771, 27));
        horizontalLayout_16 = new QHBoxLayout(layoutWidget_8);
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        horizontalLayout_16->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(layoutWidget_8);
        label_12->setObjectName("label_12");

        horizontalLayout_16->addWidget(label_12, 0, Qt::AlignHCenter);

        w6_x0_sb = new QSpinBox(layoutWidget_8);
        w6_x0_sb->setObjectName("w6_x0_sb");

        horizontalLayout_16->addWidget(w6_x0_sb);

        w6_Y0_sb = new QSpinBox(layoutWidget_8);
        w6_Y0_sb->setObjectName("w6_Y0_sb");

        horizontalLayout_16->addWidget(w6_Y0_sb);

        w6_m_dsb = new QDoubleSpinBox(layoutWidget_8);
        w6_m_dsb->setObjectName("w6_m_dsb");

        horizontalLayout_16->addWidget(w6_m_dsb);

        w6_r_dsb = new QDoubleSpinBox(layoutWidget_8);
        w6_r_dsb->setObjectName("w6_r_dsb");

        horizontalLayout_16->addWidget(w6_r_dsb);

        w6_vx0_dsb = new QDoubleSpinBox(layoutWidget_8);
        w6_vx0_dsb->setObjectName("w6_vx0_dsb");

        horizontalLayout_16->addWidget(w6_vx0_dsb);

        w6_vy0_dsb = new QDoubleSpinBox(layoutWidget_8);
        w6_vy0_dsb->setObjectName("w6_vy0_dsb");

        horizontalLayout_16->addWidget(w6_vy0_dsb);

        widget_7 = new QWidget(SetUpTab);
        widget_7->setObjectName("widget_7");
        widget_7->setGeometry(QRect(0, 380, 781, 31));
        layoutWidget_9 = new QWidget(widget_7);
        layoutWidget_9->setObjectName("layoutWidget_9");
        layoutWidget_9->setGeometry(QRect(0, 0, 771, 27));
        horizontalLayout_17 = new QHBoxLayout(layoutWidget_9);
        horizontalLayout_17->setObjectName("horizontalLayout_17");
        horizontalLayout_17->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(layoutWidget_9);
        label_13->setObjectName("label_13");

        horizontalLayout_17->addWidget(label_13, 0, Qt::AlignHCenter);

        w7_x0_sb = new QSpinBox(layoutWidget_9);
        w7_x0_sb->setObjectName("w7_x0_sb");

        horizontalLayout_17->addWidget(w7_x0_sb);

        w7_Y0_sb = new QSpinBox(layoutWidget_9);
        w7_Y0_sb->setObjectName("w7_Y0_sb");

        horizontalLayout_17->addWidget(w7_Y0_sb);

        w7_m_dsb = new QDoubleSpinBox(layoutWidget_9);
        w7_m_dsb->setObjectName("w7_m_dsb");

        horizontalLayout_17->addWidget(w7_m_dsb);

        w7_r_dsb = new QDoubleSpinBox(layoutWidget_9);
        w7_r_dsb->setObjectName("w7_r_dsb");

        horizontalLayout_17->addWidget(w7_r_dsb);

        w7_vx0_dsb = new QDoubleSpinBox(layoutWidget_9);
        w7_vx0_dsb->setObjectName("w7_vx0_dsb");

        horizontalLayout_17->addWidget(w7_vx0_dsb);

        w7_vy0_dsb = new QDoubleSpinBox(layoutWidget_9);
        w7_vy0_dsb->setObjectName("w7_vy0_dsb");

        horizontalLayout_17->addWidget(w7_vy0_dsb);

        widget_8 = new QWidget(SetUpTab);
        widget_8->setObjectName("widget_8");
        widget_8->setGeometry(QRect(0, 100, 781, 21));
        layoutWidget2 = new QWidget(widget_8);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(0, 0, 771, 18));
        horizontalLayout = new QHBoxLayout(layoutWidget2);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        cuerpoLbl = new QLabel(layoutWidget2);
        cuerpoLbl->setObjectName("cuerpoLbl");
        cuerpoLbl->setAlignment(Qt::AlignCenter);
        cuerpoLbl->setMargin(0);

        horizontalLayout->addWidget(cuerpoLbl);

        X0Lbl = new QLabel(layoutWidget2);
        X0Lbl->setObjectName("X0Lbl");
        X0Lbl->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(X0Lbl);

        Y0Lbl = new QLabel(layoutWidget2);
        Y0Lbl->setObjectName("Y0Lbl");
        Y0Lbl->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(Y0Lbl);

        masaLbl = new QLabel(layoutWidget2);
        masaLbl->setObjectName("masaLbl");
        masaLbl->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(masaLbl);

        radioLbl = new QLabel(layoutWidget2);
        radioLbl->setObjectName("radioLbl");
        radioLbl->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(radioLbl);

        velX0Lbl = new QLabel(layoutWidget2);
        velX0Lbl->setObjectName("velX0Lbl");
        velX0Lbl->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(velX0Lbl);

        velY0Lbl = new QLabel(layoutWidget2);
        velY0Lbl->setObjectName("velY0Lbl");
        velY0Lbl->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(velY0Lbl);

        layoutWidget3 = new QWidget(SetUpTab);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(9, 476, 241, 26));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        guardarValoresBtn = new QPushButton(layoutWidget3);
        guardarValoresBtn->setObjectName("guardarValoresBtn");

        horizontalLayout_4->addWidget(guardarValoresBtn);

        limpiarValoresBtn = new QPushButton(layoutWidget3);
        limpiarValoresBtn->setObjectName("limpiarValoresBtn");

        horizontalLayout_4->addWidget(limpiarValoresBtn);

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
        menubar->setNativeMenuBar(true);
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
        cantCuerposLbl->setText(QCoreApplication::translate("MainWindow", "Cantidad de cuerpos", nullptr));
        aplicarBtn->setText(QCoreApplication::translate("MainWindow", "Aplicar", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        cuerpoLbl->setText(QCoreApplication::translate("MainWindow", "Cuerpo", nullptr));
        X0Lbl->setText(QCoreApplication::translate("MainWindow", "Posicion X inicial", nullptr));
        Y0Lbl->setText(QCoreApplication::translate("MainWindow", "Posicion Y inicial", nullptr));
        masaLbl->setText(QCoreApplication::translate("MainWindow", "Masa", nullptr));
        radioLbl->setText(QCoreApplication::translate("MainWindow", "Radio", nullptr));
        velX0Lbl->setText(QCoreApplication::translate("MainWindow", "Vel. X inicial", nullptr));
        velY0Lbl->setText(QCoreApplication::translate("MainWindow", "Vel. Y inicial", nullptr));
        guardarValoresBtn->setText(QCoreApplication::translate("MainWindow", "Guardar valores", nullptr));
        limpiarValoresBtn->setText(QCoreApplication::translate("MainWindow", "Limpiar", nullptr));
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
