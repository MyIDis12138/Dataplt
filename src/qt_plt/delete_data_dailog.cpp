#include "delete_data_dailog.h"
#include <QtWidgets>

delete_data_dailog::delete_data_dailog(QWidget *parent)
    : QDialog(parent),
      datalist(new QComboBox)
{
    reset_datalist();
    this->setFixedSize(QSize(250,100));
    auto okButton = new QPushButton(tr("OK"));
    auto cancelButton = new QPushButton(tr("Cancel"));
    auto deleteall_Button = new QPushButton(tr("Delete all"));

    auto buttonLayout = new QHBoxLayout;
    buttonLayout->addWidget(deleteall_Button, Qt::AlignLeft);
    buttonLayout->addWidget(okButton);
    buttonLayout->addWidget(cancelButton);

    auto mainLayout = new QVBoxLayout;
    mainLayout->addWidget(datalist);
    mainLayout->addLayout(buttonLayout,Qt::AlignRight);

    connect(okButton, &QAbstractButton::clicked, this, &QDialog::accept);
    connect(cancelButton, &QAbstractButton::clicked, this, &QDialog::reject);
    connect(okButton, &QAbstractButton::clicked, this, &delete_data_dailog::on_okButton_clicked);
    connect(deleteall_Button, &QAbstractButton::clicked, this, &delete_data_dailog::on_delete_all_clicked);
    connect(deleteall_Button, &QAbstractButton::clicked, this, &QDialog::accept);

    setLayout(mainLayout);
    setWindowTitle(tr("Delete a dataset"));
}

void delete_data_dailog::on_okButton_clicked()
{
    if(datalist->currentIndex()>0){
        emit delete_index(datalist->currentIndex());
        datalist->removeItem(datalist->currentIndex());
    }
}

void delete_data_dailog::on_delete_all_clicked(){
    emit delete_all();
    reset_datalist();
}

void delete_data_dailog::reset_datalist()
{
    datalist->clear();
    datalist->addItem(QIcon(":/icons/file_icon.png"),"no dataset");
}

void delete_data_dailog::remove_item(int index)
{
    if(index>0){
        datalist->removeItem(index);
    }
}

