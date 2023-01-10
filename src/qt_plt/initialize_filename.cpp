#include "initialize_filename.h"
#include "ui_change_file_name.h"

initialize_filename::initialize_filename(QWidget *parent, QString filename) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->lineEdit->setText(filename);
    re->setPattern("^\\w+$");// text format
}

initialize_filename::~initialize_filename()
{
    delete ui;
    delete re;
}

void initialize_filename::on_buttonBox_accepted()
{
    file_name=ui->lineEdit->text();
    QRegularExpressionMatch match = re->match(file_name);
    if(match.hasMatch()){
        success = true;
    }
}



