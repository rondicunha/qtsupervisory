/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *lineEditIP;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonConnect;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonDisconnect;
    QSpacerItem *verticalSpacer_6;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QSlider *horizontalSliderMin;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLCDNumber *lcdNumberMin;
    QHBoxLayout *horizontalLayout_4;
    QSlider *horizontalSliderMax;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLCDNumber *lcdNumberMax;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QSlider *horizontalSliderTiming;
    QLCDNumber *lcdNumberTiming;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButtonStart;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButtonStop;
    QSpacerItem *verticalSpacer_5;
    QLabel *labelstatus;
    QSpacerItem *horizontalSpacer_3;
    QListWidget *listWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(689, 586);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        horizontalLayout_7 = new QHBoxLayout(centralWidget);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName("verticalLayout_3");
        lineEditIP = new QLineEdit(centralWidget);
        lineEditIP->setObjectName("lineEditIP");

        verticalLayout_3->addWidget(lineEditIP);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButtonConnect = new QPushButton(centralWidget);
        pushButtonConnect->setObjectName("pushButtonConnect");

        horizontalLayout_2->addWidget(pushButtonConnect);

        horizontalSpacer = new QSpacerItem(48, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButtonDisconnect = new QPushButton(centralWidget);
        pushButtonDisconnect->setObjectName("pushButtonDisconnect");

        horizontalLayout_2->addWidget(pushButtonDisconnect);


        verticalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout_6->addLayout(verticalLayout_3);

        verticalSpacer_6 = new QSpacerItem(20, 58, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_6);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSliderMin = new QSlider(centralWidget);
        horizontalSliderMin->setObjectName("horizontalSliderMin");
        horizontalSliderMin->setMinimum(1);
        horizontalSliderMin->setMaximum(100);
        horizontalSliderMin->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(horizontalSliderMin);

        verticalSpacer = new QSpacerItem(20, 28, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout->addItem(verticalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName("label_2");

        verticalLayout_2->addWidget(label_2);

        lcdNumberMin = new QLCDNumber(centralWidget);
        lcdNumberMin->setObjectName("lcdNumberMin");
        lcdNumberMin->setProperty("intValue", QVariant(1));

        verticalLayout_2->addWidget(lcdNumberMin);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSliderMax = new QSlider(centralWidget);
        horizontalSliderMax->setObjectName("horizontalSliderMax");
        horizontalSliderMax->setMinimum(1);
        horizontalSliderMax->setMaximum(100);
        horizontalSliderMax->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(horizontalSliderMax);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_4->addItem(verticalSpacer_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName("verticalLayout");
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        lcdNumberMax = new QLCDNumber(centralWidget);
        lcdNumberMax->setObjectName("lcdNumberMax");
        lcdNumberMax->setProperty("intValue", QVariant(1));

        verticalLayout->addWidget(lcdNumberMax);


        horizontalLayout_4->addLayout(verticalLayout);


        verticalLayout_4->addLayout(horizontalLayout_4);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label = new QLabel(centralWidget);
        label->setObjectName("label");

        horizontalLayout_3->addWidget(label);

        horizontalSliderTiming = new QSlider(centralWidget);
        horizontalSliderTiming->setObjectName("horizontalSliderTiming");
        horizontalSliderTiming->setMinimum(1);
        horizontalSliderTiming->setMaximum(100);
        horizontalSliderTiming->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(horizontalSliderTiming);

        lcdNumberTiming = new QLCDNumber(centralWidget);
        lcdNumberTiming->setObjectName("lcdNumberTiming");
        lcdNumberTiming->setProperty("intValue", QVariant(1));

        horizontalLayout_3->addWidget(lcdNumberTiming);


        verticalLayout_4->addLayout(horizontalLayout_3);


        verticalLayout_5->addLayout(verticalLayout_4);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        pushButtonStart = new QPushButton(centralWidget);
        pushButtonStart->setObjectName("pushButtonStart");

        horizontalLayout_5->addWidget(pushButtonStart);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        pushButtonStop = new QPushButton(centralWidget);
        pushButtonStop->setObjectName("pushButtonStop");

        horizontalLayout_5->addWidget(pushButtonStop);


        verticalLayout_5->addLayout(horizontalLayout_5);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_5);

        labelstatus = new QLabel(centralWidget);
        labelstatus->setObjectName("labelstatus");

        verticalLayout_5->addWidget(labelstatus);


        verticalLayout_6->addLayout(verticalLayout_5);


        horizontalLayout_6->addLayout(verticalLayout_6);

        horizontalSpacer_3 = new QSpacerItem(118, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);

        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName("listWidget");

        horizontalLayout_6->addWidget(listWidget);

        horizontalLayout_6->setStretch(2, 100);

        horizontalLayout_7->addLayout(horizontalLayout_6);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 689, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName("mainToolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(horizontalSliderMin, SIGNAL(valueChanged(int)), lcdNumberMin, SLOT(display(int)));
        QObject::connect(horizontalSliderMax, SIGNAL(valueChanged(int)), lcdNumberMax, SLOT(display(int)));
        QObject::connect(horizontalSliderTiming, SIGNAL(valueChanged(int)), lcdNumberTiming, SLOT(display(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        lineEditIP->setText(QCoreApplication::translate("MainWindow", "127.0.0.1", nullptr));
        pushButtonConnect->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        pushButtonDisconnect->setText(QCoreApplication::translate("MainWindow", "Disconnect", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Min", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Max", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Timings(s)", nullptr));
        pushButtonStart->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        pushButtonStop->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        labelstatus->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
