/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionLoad_dataset;
    QAction *actionSave_Plots;
    QAction *actionadd_function;
    QAction *actionSave_datasets;
    QAction *actionconfig;
    QAction *actionDelete_dataset;
    QAction *actionSettings;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QCustomPlot *customPlot;
    QHBoxLayout *right_half;
    QHBoxLayout *options;
    QTableWidget *tableWidget;
    QSpacerItem *horizontalSpacer;
    QGridLayout *options_2;
    QGridLayout *plot_data;
    QPushButton *Plot;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QComboBox *func;
    QPushButton *add_func;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *add_data;
    QVBoxLayout *verticalLayout_2;
    QPushButton *Add_data;
    QPushButton *Delete_data;
    QPushButton *Clear_all;
    QPushButton *Change_color;
    QMenuBar *menubar;
    QMenu *files;
    QMenu *edit;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1050, 525);
        MainWindow->setMinimumSize(QSize(1050, 525));
        actionLoad_dataset = new QAction(MainWindow);
        actionLoad_dataset->setObjectName(QString::fromUtf8("actionLoad_dataset"));
        actionSave_Plots = new QAction(MainWindow);
        actionSave_Plots->setObjectName(QString::fromUtf8("actionSave_Plots"));
        actionadd_function = new QAction(MainWindow);
        actionadd_function->setObjectName(QString::fromUtf8("actionadd_function"));
        actionSave_datasets = new QAction(MainWindow);
        actionSave_datasets->setObjectName(QString::fromUtf8("actionSave_datasets"));
        actionconfig = new QAction(MainWindow);
        actionconfig->setObjectName(QString::fromUtf8("actionconfig"));
        actionDelete_dataset = new QAction(MainWindow);
        actionDelete_dataset->setObjectName(QString::fromUtf8("actionDelete_dataset"));
        actionSettings = new QAction(MainWindow);
        actionSettings->setObjectName(QString::fromUtf8("actionSettings"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        centralwidget->setMinimumSize(QSize(948, 468));
        horizontalLayout_4 = new QHBoxLayout(centralwidget);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        customPlot = new QCustomPlot(centralwidget);
        customPlot->setObjectName(QString::fromUtf8("customPlot"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(customPlot->sizePolicy().hasHeightForWidth());
        customPlot->setSizePolicy(sizePolicy1);
        customPlot->setMinimumSize(QSize(540, 400));

        horizontalLayout_3->addWidget(customPlot);

        right_half = new QHBoxLayout();
        right_half->setObjectName(QString::fromUtf8("right_half"));
        options = new QHBoxLayout();
        options->setSpacing(6);
        options->setObjectName(QString::fromUtf8("options"));
        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy2);
        tableWidget->setEditTriggers(QAbstractItemView::AnyKeyPressed|QAbstractItemView::EditKeyPressed);
        tableWidget->setAlternatingRowColors(false);

        options->addWidget(tableWidget);

        horizontalSpacer = new QSpacerItem(20, 450, QSizePolicy::Fixed, QSizePolicy::Minimum);

        options->addItem(horizontalSpacer);

        options_2 = new QGridLayout();
        options_2->setObjectName(QString::fromUtf8("options_2"));
        plot_data = new QGridLayout();
        plot_data->setObjectName(QString::fromUtf8("plot_data"));
        Plot = new QPushButton(centralwidget);
        Plot->setObjectName(QString::fromUtf8("Plot"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(Plot->sizePolicy().hasHeightForWidth());
        Plot->setSizePolicy(sizePolicy3);
        Plot->setMinimumSize(QSize(200, 50));

        plot_data->addWidget(Plot, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(200, 98, QSizePolicy::Minimum, QSizePolicy::Expanding);

        plot_data->addItem(verticalSpacer, 1, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_3->addWidget(label, 0, Qt::AlignHCenter);

        func = new QComboBox(centralwidget);
        func->addItem(QString());
        func->addItem(QString());
        func->addItem(QString());
        func->addItem(QString());
        func->addItem(QString());
        func->setObjectName(QString::fromUtf8("func"));
        sizePolicy3.setHeightForWidth(func->sizePolicy().hasHeightForWidth());
        func->setSizePolicy(sizePolicy3);
        func->setMinimumSize(QSize(200, 25));

        verticalLayout_3->addWidget(func);

        add_func = new QPushButton(centralwidget);
        add_func->setObjectName(QString::fromUtf8("add_func"));

        verticalLayout_3->addWidget(add_func);


        plot_data->addLayout(verticalLayout_3, 0, 0, 1, 1);


        options_2->addLayout(plot_data, 2, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(200, 48, QSizePolicy::Minimum, QSizePolicy::Expanding);

        options_2->addItem(verticalSpacer_2, 1, 0, 1, 1);

        add_data = new QVBoxLayout();
        add_data->setObjectName(QString::fromUtf8("add_data"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));

        add_data->addLayout(verticalLayout_2);

        Add_data = new QPushButton(centralwidget);
        Add_data->setObjectName(QString::fromUtf8("Add_data"));
        sizePolicy3.setHeightForWidth(Add_data->sizePolicy().hasHeightForWidth());
        Add_data->setSizePolicy(sizePolicy3);
        Add_data->setMinimumSize(QSize(200, 35));

        add_data->addWidget(Add_data, 0, Qt::AlignHCenter);

        Delete_data = new QPushButton(centralwidget);
        Delete_data->setObjectName(QString::fromUtf8("Delete_data"));
        sizePolicy3.setHeightForWidth(Delete_data->sizePolicy().hasHeightForWidth());
        Delete_data->setSizePolicy(sizePolicy3);
        Delete_data->setMinimumSize(QSize(200, 35));

        add_data->addWidget(Delete_data, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        Clear_all = new QPushButton(centralwidget);
        Clear_all->setObjectName(QString::fromUtf8("Clear_all"));
        sizePolicy3.setHeightForWidth(Clear_all->sizePolicy().hasHeightForWidth());
        Clear_all->setSizePolicy(sizePolicy3);
        Clear_all->setMinimumSize(QSize(200, 35));

        add_data->addWidget(Clear_all, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        Change_color = new QPushButton(centralwidget);
        Change_color->setObjectName(QString::fromUtf8("Change_color"));
        sizePolicy3.setHeightForWidth(Change_color->sizePolicy().hasHeightForWidth());
        Change_color->setSizePolicy(sizePolicy3);
        Change_color->setMinimumSize(QSize(200, 35));

        add_data->addWidget(Change_color);


        options_2->addLayout(add_data, 0, 0, 1, 1);


        options->addLayout(options_2);


        right_half->addLayout(options);


        horizontalLayout_3->addLayout(right_half);


        horizontalLayout_4->addLayout(horizontalLayout_3);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1050, 21));
        files = new QMenu(menubar);
        files->setObjectName(QString::fromUtf8("files"));
        edit = new QMenu(menubar);
        edit->setObjectName(QString::fromUtf8("edit"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(files->menuAction());
        menubar->addAction(edit->menuAction());
        files->addAction(actionLoad_dataset);
        files->addAction(actionDelete_dataset);
        files->addSeparator();
        files->addAction(actionSave_Plots);
        files->addAction(actionSave_datasets);
        files->addSeparator();
        files->addAction(actionSettings);
        edit->addAction(actionadd_function);
        edit->addAction(actionconfig);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionLoad_dataset->setText(QCoreApplication::translate("MainWindow", "Load a dataset", nullptr));
#if QT_CONFIG(shortcut)
        actionLoad_dataset->setShortcut(QCoreApplication::translate("MainWindow", "Alt+L", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave_Plots->setText(QCoreApplication::translate("MainWindow", "Save Plots", nullptr));
#if QT_CONFIG(shortcut)
        actionSave_Plots->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionadd_function->setText(QCoreApplication::translate("MainWindow", "Custom_function", nullptr));
#if QT_CONFIG(shortcut)
        actionadd_function->setShortcut(QCoreApplication::translate("MainWindow", "Alt+F", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave_datasets->setText(QCoreApplication::translate("MainWindow", "Save datasets", nullptr));
#if QT_CONFIG(shortcut)
        actionSave_datasets->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+D", nullptr));
#endif // QT_CONFIG(shortcut)
        actionconfig->setText(QCoreApplication::translate("MainWindow", "Config", nullptr));
#if QT_CONFIG(tooltip)
        actionconfig->setToolTip(QCoreApplication::translate("MainWindow", "config of plot", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionconfig->setShortcut(QCoreApplication::translate("MainWindow", "Alt+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDelete_dataset->setText(QCoreApplication::translate("MainWindow", "Delete a dataset", nullptr));
#if QT_CONFIG(shortcut)
        actionDelete_dataset->setShortcut(QCoreApplication::translate("MainWindow", "Alt+D", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSettings->setText(QCoreApplication::translate("MainWindow", "Settings", nullptr));
#if QT_CONFIG(shortcut)
        actionSettings->setShortcut(QCoreApplication::translate("MainWindow", "Alt+S", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        Plot->setToolTip(QCoreApplication::translate("MainWindow", "plot the files in plot list", nullptr));
#endif // QT_CONFIG(tooltip)
        Plot->setText(QCoreApplication::translate("MainWindow", "Plot", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Functions", nullptr));
        func->setItemText(0, QCoreApplication::translate("MainWindow", "original", nullptr));
        func->setItemText(1, QCoreApplication::translate("MainWindow", "addition", nullptr));
        func->setItemText(2, QCoreApplication::translate("MainWindow", "product", nullptr));
        func->setItemText(3, QCoreApplication::translate("MainWindow", "logarithm", nullptr));
        func->setItemText(4, QCoreApplication::translate("MainWindow", "custom", nullptr));

#if QT_CONFIG(tooltip)
        func->setToolTip(QCoreApplication::translate("MainWindow", "functional plot options", nullptr));
#endif // QT_CONFIG(tooltip)
        add_func->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
#if QT_CONFIG(tooltip)
        Add_data->setToolTip(QCoreApplication::translate("MainWindow", "add a loaded file", nullptr));
#endif // QT_CONFIG(tooltip)
        Add_data->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
#if QT_CONFIG(tooltip)
        Delete_data->setToolTip(QCoreApplication::translate("MainWindow", "delete a file from plot list", nullptr));
#endif // QT_CONFIG(tooltip)
        Delete_data->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
#if QT_CONFIG(tooltip)
        Clear_all->setToolTip(QCoreApplication::translate("MainWindow", "clear all file in plot list", nullptr));
#endif // QT_CONFIG(tooltip)
        Clear_all->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        Change_color->setText(QCoreApplication::translate("MainWindow", "Change Color", nullptr));
        files->setTitle(QCoreApplication::translate("MainWindow", "Files", nullptr));
        edit->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
