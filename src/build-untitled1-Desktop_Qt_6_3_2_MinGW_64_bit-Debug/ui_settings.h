/********************************************************************************
** Form generated from reading UI file 'settings.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Settings
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *Data;
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QComboBox *type;
    QLabel *label_5;
    QComboBox *delim;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *startpoint;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *numofdata;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QLineEdit *stepsize;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_11;
    QWidget *Save;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_10;
    QSpacerItem *horizontalSpacer_10;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_11;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_12;
    QLineEdit *width;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_12;
    QSpacerItem *horizontalSpacer_13;
    QLineEdit *height;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_14;
    QLineEdit *resolution;
    QSpacerItem *horizontalSpacer_7;
    QVBoxLayout *verticalLayout_5;
    QSpacerItem *verticalSpacer_5;
    QCheckBox *keep_scale;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *verticalSpacer_7;
    QFrame *line;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_11;
    QSpacerItem *horizontalSpacer_11;
    QHBoxLayout *horizontalLayout_14;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_9;
    QComboBox *type_2;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_8;
    QComboBox *delim_2;
    QSpacerItem *verticalSpacer_9;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Settings)
    {
        if (Settings->objectName().isEmpty())
            Settings->setObjectName(QString::fromUtf8("Settings"));
        Settings->resize(428, 325);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Settings->sizePolicy().hasHeightForWidth());
        Settings->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(Settings);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(Settings);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        Data = new QWidget();
        Data->setObjectName(QString::fromUtf8("Data"));
        verticalLayout_9 = new QVBoxLayout(Data);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(Data);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        type = new QComboBox(Data);
        type->addItem(QString());
        type->addItem(QString());
        type->addItem(QString());
        type->addItem(QString());
        type->setObjectName(QString::fromUtf8("type"));
        type->setMinimumSize(QSize(150, 20));

        horizontalLayout_4->addWidget(type);

        label_5 = new QLabel(Data);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(0, 30));

        horizontalLayout_4->addWidget(label_5);

        delim = new QComboBox(Data);
        delim->addItem(QString());
        delim->addItem(QString());
        delim->addItem(QString());
        delim->addItem(QString());
        delim->setObjectName(QString::fromUtf8("delim"));
        delim->setMinimumSize(QSize(0, 20));

        horizontalLayout_4->addWidget(delim);


        verticalLayout_3->addLayout(horizontalLayout_4);

        verticalSpacer_3 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(Data);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 30));

        horizontalLayout->addWidget(label);

        horizontalSpacer_5 = new QSpacerItem(50, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        startpoint = new QLineEdit(Data);
        startpoint->setObjectName(QString::fromUtf8("startpoint"));
        startpoint->setMinimumSize(QSize(150, 30));

        horizontalLayout->addWidget(startpoint);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(Data);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(0, 30));

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        numofdata = new QLineEdit(Data);
        numofdata->setObjectName(QString::fromUtf8("numofdata"));
        numofdata->setMinimumSize(QSize(150, 30));

        horizontalLayout_2->addWidget(numofdata);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(Data);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(0, 30));

        horizontalLayout_3->addWidget(label_3);

        horizontalSpacer = new QSpacerItem(50, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        stepsize = new QLineEdit(Data);
        stepsize->setObjectName(QString::fromUtf8("stepsize"));
        stepsize->setMinimumSize(QSize(150, 30));

        horizontalLayout_3->addWidget(stepsize);


        verticalLayout_2->addLayout(horizontalLayout_3);


        horizontalLayout_5->addLayout(verticalLayout_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);


        verticalLayout_3->addLayout(horizontalLayout_5);


        verticalLayout_9->addLayout(verticalLayout_3);

        verticalSpacer_11 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_11);

        tabWidget->addTab(Data, QString());
        Save = new QWidget();
        Save->setObjectName(QString::fromUtf8("Save"));
        verticalLayout_6 = new QVBoxLayout(Save);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_10 = new QLabel(Save);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setMinimumSize(QSize(30, 0));

        horizontalLayout_10->addWidget(label_10);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_10);


        verticalLayout_6->addLayout(horizontalLayout_10);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_8);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_6 = new QLabel(Save);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_6->addWidget(label_6);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_12);

        width = new QLineEdit(Save);
        width->setObjectName(QString::fromUtf8("width"));
        width->setMinimumSize(QSize(100, 0));
        width->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_6->addWidget(width);


        verticalLayout_4->addLayout(horizontalLayout_6);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label_12 = new QLabel(Save);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_15->addWidget(label_12);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_13);

        height = new QLineEdit(Save);
        height->setObjectName(QString::fromUtf8("height"));
        sizePolicy.setHeightForWidth(height->sizePolicy().hasHeightForWidth());
        height->setSizePolicy(sizePolicy);
        height->setMinimumSize(QSize(100, 0));
        height->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_15->addWidget(height);


        verticalLayout_4->addLayout(horizontalLayout_15);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_7 = new QLabel(Save);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_7->addWidget(label_7);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_14);

        resolution = new QLineEdit(Save);
        resolution->setObjectName(QString::fromUtf8("resolution"));
        sizePolicy.setHeightForWidth(resolution->sizePolicy().hasHeightForWidth());
        resolution->setSizePolicy(sizePolicy);
        resolution->setMinimumSize(QSize(100, 0));
        resolution->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_7->addWidget(resolution);


        verticalLayout_4->addLayout(horizontalLayout_7);


        horizontalLayout_11->addLayout(verticalLayout_4);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_7);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_5);

        keep_scale = new QCheckBox(Save);
        keep_scale->setObjectName(QString::fromUtf8("keep_scale"));

        verticalLayout_5->addWidget(keep_scale);

        verticalSpacer_6 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_6);


        horizontalLayout_11->addLayout(verticalLayout_5);


        horizontalLayout_12->addLayout(horizontalLayout_11);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_9);


        verticalLayout_6->addLayout(horizontalLayout_12);

        verticalSpacer_7 = new QSpacerItem(17, 2, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_7);

        line = new QFrame(Save);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_6->addWidget(line);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_11 = new QLabel(Save);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_13->addWidget(label_11);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_11);


        verticalLayout_7->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_9 = new QLabel(Save);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_8->addWidget(label_9);

        type_2 = new QComboBox(Save);
        type_2->addItem(QString());
        type_2->addItem(QString());
        type_2->addItem(QString());
        type_2->addItem(QString());
        type_2->setObjectName(QString::fromUtf8("type_2"));
        type_2->setMinimumSize(QSize(150, 20));

        horizontalLayout_8->addWidget(type_2);


        horizontalLayout_14->addLayout(horizontalLayout_8);

        horizontalSpacer_6 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_6);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_8 = new QLabel(Save);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(0, 30));

        horizontalLayout_9->addWidget(label_8);

        delim_2 = new QComboBox(Save);
        delim_2->addItem(QString());
        delim_2->addItem(QString());
        delim_2->addItem(QString());
        delim_2->addItem(QString());
        delim_2->setObjectName(QString::fromUtf8("delim_2"));
        delim_2->setMinimumSize(QSize(0, 20));

        horizontalLayout_9->addWidget(delim_2);


        horizontalLayout_14->addLayout(horizontalLayout_9);


        verticalLayout_7->addLayout(horizontalLayout_14);

        verticalSpacer_9 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_9);


        verticalLayout_6->addLayout(verticalLayout_7);

        tabWidget->addTab(Save, QString());

        verticalLayout->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(Settings);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(Settings);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, Settings, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Settings, qOverload<>(&QDialog::reject));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Settings);
    } // setupUi

    void retranslateUi(QDialog *Settings)
    {
        Settings->setWindowTitle(QCoreApplication::translate("Settings", "Dialog", nullptr));
        label_4->setText(QCoreApplication::translate("Settings", "Type", nullptr));
        type->setItemText(0, QCoreApplication::translate("Settings", "csv;(x,y)", nullptr));
        type->setItemText(1, QCoreApplication::translate("Settings", "csv;(y)", nullptr));
        type->setItemText(2, QCoreApplication::translate("Settings", "txt;(x,y)", nullptr));
        type->setItemText(3, QCoreApplication::translate("Settings", "txt;(y)", nullptr));

#if QT_CONFIG(tooltip)
        type->setToolTip(QCoreApplication::translate("Settings", "data style of dataset", nullptr));
#endif // QT_CONFIG(tooltip)
        label_5->setText(QCoreApplication::translate("Settings", "Delimitation", nullptr));
        delim->setItemText(0, QCoreApplication::translate("Settings", ",", nullptr));
        delim->setItemText(1, QCoreApplication::translate("Settings", "/", nullptr));
        delim->setItemText(2, QCoreApplication::translate("Settings", "\\space", nullptr));
        delim->setItemText(3, QCoreApplication::translate("Settings", "\\tab", nullptr));

#if QT_CONFIG(tooltip)
        delim->setToolTip(QCoreApplication::translate("Settings", "only for txt; always '.' for csv ", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("Settings", "Minimum x", nullptr));
#if QT_CONFIG(tooltip)
        startpoint->setToolTip(QCoreApplication::translate("Settings", "the strart point of x axis; only for (y) data style", nullptr));
#endif // QT_CONFIG(tooltip)
        startpoint->setText(QCoreApplication::translate("Settings", "0", nullptr));
        label_2->setText(QCoreApplication::translate("Settings", "Num of data", nullptr));
#if QT_CONFIG(tooltip)
        numofdata->setToolTip(QCoreApplication::translate("Settings", "optional, if default will automatically adjust to the first loaded dataset ;only for (y) data style", nullptr));
#endif // QT_CONFIG(tooltip)
        numofdata->setText(QCoreApplication::translate("Settings", "0", nullptr));
        label_3->setText(QCoreApplication::translate("Settings", "Step size ", nullptr));
#if QT_CONFIG(tooltip)
        stepsize->setToolTip(QCoreApplication::translate("Settings", "the step size for dataset; only for (y) data style", nullptr));
#endif // QT_CONFIG(tooltip)
        stepsize->setText(QCoreApplication::translate("Settings", "1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Data), QCoreApplication::translate("Settings", "Tab 1", nullptr));
        label_10->setText(QCoreApplication::translate("Settings", "Plot", nullptr));
        label_6->setText(QCoreApplication::translate("Settings", "width", nullptr));
        label_12->setText(QCoreApplication::translate("Settings", "height", nullptr));
        label_7->setText(QCoreApplication::translate("Settings", "resolution", nullptr));
        keep_scale->setText(QCoreApplication::translate("Settings", "keep size ratio", nullptr));
        label_11->setText(QCoreApplication::translate("Settings", "Dataset", nullptr));
        label_9->setText(QCoreApplication::translate("Settings", "Type", nullptr));
        type_2->setItemText(0, QCoreApplication::translate("Settings", "csv;(x,y)", nullptr));
        type_2->setItemText(1, QCoreApplication::translate("Settings", "csv;(y)", nullptr));
        type_2->setItemText(2, QCoreApplication::translate("Settings", "txt;(x,y)", nullptr));
        type_2->setItemText(3, QCoreApplication::translate("Settings", "txt;(y)", nullptr));

#if QT_CONFIG(tooltip)
        type_2->setToolTip(QCoreApplication::translate("Settings", "data style of dataset", nullptr));
#endif // QT_CONFIG(tooltip)
        label_8->setText(QCoreApplication::translate("Settings", "Delimination", nullptr));
        delim_2->setItemText(0, QCoreApplication::translate("Settings", ",", nullptr));
        delim_2->setItemText(1, QCoreApplication::translate("Settings", "/", nullptr));
        delim_2->setItemText(2, QCoreApplication::translate("Settings", "\\space", nullptr));
        delim_2->setItemText(3, QCoreApplication::translate("Settings", "\\tab", nullptr));

#if QT_CONFIG(tooltip)
        delim_2->setToolTip(QCoreApplication::translate("Settings", "only for txt; always '.' for csv ", nullptr));
#endif // QT_CONFIG(tooltip)
        tabWidget->setTabText(tabWidget->indexOf(Save), QCoreApplication::translate("Settings", "Tab 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Settings: public Ui_Settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
