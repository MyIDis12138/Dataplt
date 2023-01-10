#include "initialize_file_name.h"
#include "ui_initialize_file_name.h"

initialize_file_name::initialize_file_name(QWidget *parent, QString filename) :
    QDialog(parent),
    ui(new Ui::initialize_file_name)
{
    ui->setupUi(this);
    ui->lineEdit->setText(filename);
    re.setPattern("^\\w+$");
}

initialize_file_name::~initialize_file_name()
{
    delete ui;
}

void initialize_file_name::on_buttonBox_accepted()
{
    file_name=ui->lineEdit->text();
    QRegularExpressionMatch match = re.match(file_name);
    if(match.hasMatch()){
        success = true;
    }
}

void initialize_file_name::on_buttonBox_rejected()
{
    success=false;
    cancle=true;
    qDebug()<<cancle;
}
