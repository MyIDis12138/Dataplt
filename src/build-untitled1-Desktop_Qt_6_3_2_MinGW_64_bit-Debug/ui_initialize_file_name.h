/********************************************************************************
** Form generated from reading UI file 'initialize_file_name.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INITIALIZE_FILE_NAME_H
#define UI_INITIALIZE_FILE_NAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_initialize_file_name
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *lineEdit;
    QLabel *label;

    void setupUi(QDialog *initialize_file_name)
    {
        if (initialize_file_name->objectName().isEmpty())
            initialize_file_name->setObjectName(QString::fromUtf8("initialize_file_name"));
        initialize_file_name->resize(388, 128);
        buttonBox = new QDialogButtonBox(initialize_file_name);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(10, 90, 370, 25));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        lineEdit = new QLineEdit(initialize_file_name);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(10, 50, 370, 30));
        label = new QLabel(initialize_file_name);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 370, 25));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        retranslateUi(initialize_file_name);

        QMetaObject::connectSlotsByName(initialize_file_name);
    } // setupUi

    void retranslateUi(QDialog *initialize_file_name)
    {
        initialize_file_name->setWindowTitle(QCoreApplication::translate("initialize_file_name", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("initialize_file_name", "Enter the name of the file:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class initialize_file_name: public Ui_initialize_file_name {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INITIALIZE_FILE_NAME_H
