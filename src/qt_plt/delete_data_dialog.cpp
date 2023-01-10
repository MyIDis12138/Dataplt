#include "delete_data_dialog.h"
#include "ui_delete_data_dialog.h"

Delete_data_dialog::Delete_data_dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Delete_data_dialog)
{
    ui->setupUi(this);
}

Delete_data_dialog::~Delete_data_dialog()
{
    delete ui;
}
