/********************************************************************************
** Form generated from reading UI file 'config.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIG_H
#define UI_CONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Config
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QHBoxLayout *horizontalLayout_3;
    QDoubleSpinBox *lower_x;
    QDoubleSpinBox *upper_x;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_6;
    QDoubleSpinBox *lower_y;
    QDoubleSpinBox *upper_y;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *drag;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *zoom;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *x_label;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLineEdit *y_label;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *Reset;
    QSpacerItem *horizontalSpacer_5;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Config)
    {
        if (Config->objectName().isEmpty())
            Config->setObjectName(QString::fromUtf8("Config"));
        Config->resize(403, 203);
        verticalLayout_2 = new QVBoxLayout(Config);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(9);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setSizeConstraint(QLayout::SetDefaultConstraint);
        label = new QLabel(Config);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_4->addWidget(label, 0, Qt::AlignHCenter);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(15);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        lower_x = new QDoubleSpinBox(Config);
        lower_x->setObjectName(QString::fromUtf8("lower_x"));
        lower_x->setAccelerated(true);
        lower_x->setMinimum(-999999.000000000000000);
        lower_x->setMaximum(999999.000000000000000);
        lower_x->setSingleStep(0.100000000000000);

        horizontalLayout_3->addWidget(lower_x);

        upper_x = new QDoubleSpinBox(Config);
        upper_x->setObjectName(QString::fromUtf8("upper_x"));
        upper_x->setAccelerated(true);
        upper_x->setMinimum(-999999.000000000000000);
        upper_x->setMaximum(999999.000000000000000);
        upper_x->setSingleStep(0.100000000000000);

        horizontalLayout_3->addWidget(upper_x);


        horizontalLayout_4->addLayout(horizontalLayout_3);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(0);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_2 = new QLabel(Config);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_8->addWidget(label_2, 0, Qt::AlignHCenter);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(15);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        lower_y = new QDoubleSpinBox(Config);
        lower_y->setObjectName(QString::fromUtf8("lower_y"));
        lower_y->setAccelerated(true);
        lower_y->setMinimum(-999999.000000000000000);
        lower_y->setMaximum(999999.000000000000000);
        lower_y->setSingleStep(0.100000000000000);
        lower_y->setValue(0.000000000000000);

        horizontalLayout_6->addWidget(lower_y);

        upper_y = new QDoubleSpinBox(Config);
        upper_y->setObjectName(QString::fromUtf8("upper_y"));
        upper_y->setAccelerated(true);
        upper_y->setMinimum(-999999.000000000000000);
        upper_y->setMaximum(999999.000000000000000);
        upper_y->setSingleStep(0.100000000000000);

        horizontalLayout_6->addWidget(upper_y);


        horizontalLayout_8->addLayout(horizontalLayout_6);


        verticalLayout->addLayout(horizontalLayout_8);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_2);

        drag = new QCheckBox(Config);
        drag->setObjectName(QString::fromUtf8("drag"));

        horizontalLayout_9->addWidget(drag);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_3);

        zoom = new QCheckBox(Config);
        zoom->setObjectName(QString::fromUtf8("zoom"));
        zoom->setChecked(false);

        horizontalLayout_9->addWidget(zoom);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout_9);

        verticalSpacer = new QSpacerItem(17, 11, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(Config);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        x_label = new QLineEdit(Config);
        x_label->setObjectName(QString::fromUtf8("x_label"));

        horizontalLayout_2->addWidget(x_label);


        horizontalLayout_5->addLayout(horizontalLayout_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_4 = new QLabel(Config);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout->addWidget(label_4);

        y_label = new QLineEdit(Config);
        y_label->setObjectName(QString::fromUtf8("y_label"));

        horizontalLayout->addWidget(y_label);


        horizontalLayout_5->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        Reset = new QPushButton(Config);
        Reset->setObjectName(QString::fromUtf8("Reset"));

        horizontalLayout_7->addWidget(Reset);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);

        buttonBox = new QDialogButtonBox(Config);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_7->addWidget(buttonBox);


        verticalLayout_2->addLayout(horizontalLayout_7);


        retranslateUi(Config);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, Config, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Config, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Config);
    } // setupUi

    void retranslateUi(QDialog *Config)
    {
        Config->setWindowTitle(QCoreApplication::translate("Config", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Config", "x_axis range", nullptr));
#if QT_CONFIG(tooltip)
        lower_x->setToolTip(QCoreApplication::translate("Config", "the lower bound of x axis", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        upper_x->setToolTip(QCoreApplication::translate("Config", "the upper bound of x axis", nullptr));
#endif // QT_CONFIG(tooltip)
        label_2->setText(QCoreApplication::translate("Config", "y_axis range", nullptr));
#if QT_CONFIG(tooltip)
        lower_y->setToolTip(QCoreApplication::translate("Config", "the lower bound of y axis", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        upper_y->setToolTip(QCoreApplication::translate("Config", "the upper bound of y axis", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        drag->setToolTip(QCoreApplication::translate("Config", "enable drag in plot area", nullptr));
#endif // QT_CONFIG(tooltip)
        drag->setText(QCoreApplication::translate("Config", "Drag", nullptr));
#if QT_CONFIG(tooltip)
        zoom->setToolTip(QCoreApplication::translate("Config", "enable zoom in plot area", nullptr));
#endif // QT_CONFIG(tooltip)
        zoom->setText(QCoreApplication::translate("Config", "Zoom", nullptr));
        label_3->setText(QCoreApplication::translate("Config", "X Label", nullptr));
        label_4->setText(QCoreApplication::translate("Config", "Y Label", nullptr));
#if QT_CONFIG(tooltip)
        Reset->setToolTip(QCoreApplication::translate("Config", "Reset to default config", nullptr));
#endif // QT_CONFIG(tooltip)
        Reset->setText(QCoreApplication::translate("Config", "Reset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Config: public Ui_Config {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIG_H
