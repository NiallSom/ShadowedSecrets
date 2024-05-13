/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_5;
    QLabel *Title_img;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_3;
    QPlainTextEdit *plainTextEdit;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer;
    QPushButton *Start;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_13;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_2;
    QPushButton *Interrogate;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *Open;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_11;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *Pickup;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_9;
    QHBoxLayout *horizontalLayout_16;
    QSpacerItem *horizontalSpacer_15;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_16;
    QPushButton *South;
    QPushButton *North;
    QPushButton *West;
    QSpacerItem *verticalSpacer_3;
    QPushButton *East;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *Hide;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_10;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label;
    QPushButton *Investigate;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer;
    QLabel *label_6;
    QPushButton *Hit;
    QSpacerItem *horizontalSpacer_12;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *i;
    QLabel *Gun;
    QLabel *Flashlight;
    QVBoxLayout *verticalLayout_6;
    QLabel *key1;
    QLabel *key2;
    QSpacerItem *horizontalSpacer_14;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1001, 727);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 0, 1001, 611));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        Title_img = new QLabel(verticalLayoutWidget);
        Title_img->setObjectName("Title_img");

        horizontalLayout->addWidget(Title_img);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");

        horizontalLayout_5->addLayout(verticalLayout_3);

        plainTextEdit = new QPlainTextEdit(verticalLayoutWidget);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setReadOnly(true);

        horizontalLayout_5->addWidget(plainTextEdit);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_5);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        Start = new QPushButton(verticalLayoutWidget);
        Start->setObjectName("Start");

        verticalLayout->addWidget(Start);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");

        verticalLayout->addLayout(verticalLayout_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_13);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName("gridLayout_4");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout_4->addWidget(label_2);

        Interrogate = new QPushButton(verticalLayoutWidget);
        Interrogate->setObjectName("Interrogate");

        horizontalLayout_4->addWidget(Interrogate);


        gridLayout_4->addLayout(horizontalLayout_4, 2, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_2);

        Open = new QPushButton(verticalLayoutWidget);
        Open->setObjectName("Open");

        horizontalLayout_8->addWidget(Open);

        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName("label_5");

        horizontalLayout_8->addWidget(label_5);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_11);


        gridLayout_4->addLayout(horizontalLayout_8, 1, 4, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        Pickup = new QPushButton(verticalLayoutWidget);
        Pickup->setObjectName("Pickup");

        horizontalLayout_6->addWidget(Pickup);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName("label_3");

        horizontalLayout_6->addWidget(label_3);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_9);


        gridLayout_4->addLayout(horizontalLayout_6, 0, 4, 1, 1);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_15);

        label_7 = new QLabel(verticalLayoutWidget);
        label_7->setObjectName("label_7");
        QFont font;
        font.setPointSize(15);
        label_7->setFont(font);

        horizontalLayout_16->addWidget(label_7);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_16);


        gridLayout_4->addLayout(horizontalLayout_16, 4, 2, 1, 1);

        South = new QPushButton(verticalLayoutWidget);
        South->setObjectName("South");

        gridLayout_4->addWidget(South, 2, 2, 1, 1);

        North = new QPushButton(verticalLayoutWidget);
        North->setObjectName("North");

        gridLayout_4->addWidget(North, 0, 2, 1, 1);

        West = new QPushButton(verticalLayoutWidget);
        West->setObjectName("West");

        gridLayout_4->addWidget(West, 1, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_4->addItem(verticalSpacer_3, 3, 2, 1, 1);

        East = new QPushButton(verticalLayoutWidget);
        East->setObjectName("East");

        gridLayout_4->addWidget(East, 1, 3, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        Hide = new QPushButton(verticalLayoutWidget);
        Hide->setObjectName("Hide");

        horizontalLayout_7->addWidget(Hide);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName("label_4");

        horizontalLayout_7->addWidget(label_4);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_10);


        gridLayout_4->addLayout(horizontalLayout_7, 2, 4, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName("label");

        horizontalLayout_3->addWidget(label);

        Investigate = new QPushButton(verticalLayoutWidget);
        Investigate->setObjectName("Investigate");

        horizontalLayout_3->addWidget(Investigate);


        gridLayout_4->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer);

        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName("label_6");

        horizontalLayout_9->addWidget(label_6);

        Hit = new QPushButton(verticalLayoutWidget);
        Hit->setObjectName("Hit");

        horizontalLayout_9->addWidget(Hit);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_12);


        gridLayout_4->addLayout(horizontalLayout_9, 1, 0, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        i = new QHBoxLayout();
        i->setObjectName("i");
        Gun = new QLabel(verticalLayoutWidget);
        Gun->setObjectName("Gun");

        i->addWidget(Gun);

        Flashlight = new QLabel(verticalLayoutWidget);
        Flashlight->setObjectName("Flashlight");

        i->addWidget(Flashlight);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        key1 = new QLabel(verticalLayoutWidget);
        key1->setObjectName("key1");

        verticalLayout_6->addWidget(key1);

        key2 = new QLabel(verticalLayoutWidget);
        key2->setObjectName("key2");

        verticalLayout_6->addWidget(key2);


        i->addLayout(verticalLayout_6);


        verticalLayout_5->addLayout(i);


        gridLayout_4->addLayout(verticalLayout_5, 5, 2, 1, 1);


        horizontalLayout_2->addLayout(gridLayout_4);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_14);


        verticalLayout->addLayout(horizontalLayout_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1001, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Title_img->setText(QString());
        Start->setText(QCoreApplication::translate("MainWindow", "START", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Interrogate:", nullptr));
        Interrogate->setText(QCoreApplication::translate("MainWindow", "Interrogate", nullptr));
        Open->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", ":Open", nullptr));
        Pickup->setText(QCoreApplication::translate("MainWindow", "Pickup", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", ":Pickup", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Inventory", nullptr));
        South->setText(QCoreApplication::translate("MainWindow", "SOUTH", nullptr));
        North->setText(QCoreApplication::translate("MainWindow", "NORTH", nullptr));
        West->setText(QCoreApplication::translate("MainWindow", "WEST", nullptr));
        East->setText(QCoreApplication::translate("MainWindow", "EAST", nullptr));
        Hide->setText(QCoreApplication::translate("MainWindow", "Hide", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", ":Hide", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Investigate:", nullptr));
        Investigate->setText(QCoreApplication::translate("MainWindow", "Investigate", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Hit:", nullptr));
        Hit->setText(QCoreApplication::translate("MainWindow", "Hit", nullptr));
        Gun->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        Flashlight->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        key1->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        key2->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
