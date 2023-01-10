/********************************************************************************
** Form generated from reading UI file 'color_selection.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLOR_SELECTION_H
#define UI_COLOR_SELECTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>

QT_BEGIN_NAMESPACE

class Ui_Color_selection
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Color_selection)
    {
        if (Color_selection->objectName().isEmpty())
            Color_selection->setObjectName(QString::fromUtf8("Color_selection"));
        Color_selection->resize(320, 240);
        buttonBox = new QDialogButtonBox(Color_selection);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(230, 10, 81, 221));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(Color_selection);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, Color_selection, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Color_selection, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Color_selection);
    } // setupUi

    void retranslateUi(QDialog *Color_selection)
    {
        Color_selection->setWindowTitle(QCoreApplication::translate("Color_selection", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Color_selection: public Ui_Color_selection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLOR_SELECTION_H
