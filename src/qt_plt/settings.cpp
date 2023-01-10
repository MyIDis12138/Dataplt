#include "settings.h"
#include "ui_settings.h"

Settings::Settings(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Settings)
{
    ui->setupUi(this);

    ui->tabWidget->setTabText(0,QString("Load"));
    ui->tabWidget->setTabText(1,QString("Save"));

    startpoint = 0;
    stepsize = 1;
    numofdata = 0;
    d_type = dtype::txt_xy;
    d_delim = spliter::tab;

    s_type = dtype::txt_xy;
    s_delim = spliter::tab;
    width = 200;
    height = 200;
    resolution = 100;
    keep_scale = false;
    scale = 1;

    update_txt();

    re_double->setPattern("^\\d+\\.?\\d*$");
    re_int->setPattern("^\\d+$");

    ui->delim->setEnabled(false);
    connect(ui->type,SIGNAL(currentIndexChanged(int)),this,SLOT(set_csvdelim(int)));
    connect(ui->type,SIGNAL(currentIndexChanged(int)), this,SLOT(update_savetype(int)));
    connect(ui->delim,SIGNAL(currentIndexChanged(int)), this, SLOT(update_savedelim(int)));
    connect(ui->width,SIGNAL(textChanged(const QString)),this, SLOT(update_height(const QString)));
    connect(ui->height,SIGNAL(textChanged(const QString)),this, SLOT(update_width(const QString)));
    connect(ui->keep_scale, SIGNAL(stateChanged(int)), this, SLOT(update_keepstate(int)));
}

Settings::~Settings()
{
    delete ui;
    delete re_double;
    delete re_int;
}

void Settings::update_txt()
{
    ui->startpoint->setText(QString::number(this->startpoint));
    ui->numofdata->setText(QString::number(this->numofdata));
    ui->stepsize->setText(QString::number(this->stepsize));
    ui->type->setCurrentIndex(getIndex(d_type));
    ui->delim->setCurrentIndex(getIndex(d_delim));

    ui->type_2->setCurrentIndex(getIndex(s_type));
    ui->delim_2->setCurrentIndex(getIndex(s_delim));
    ui->keep_scale->setChecked(this->keep_scale);
    ui->resolution->setText(QString::number(this->resolution));
    ui->width->setText(QString::number(int(this->width*scale)));
    ui->height->setText(QString::number(int(this->height*scale)));

}

void Settings::set_numofdata(int num)
{
    numofdata = num;
}

void Settings::set_csvdelim(int index)
{
    if(index<2){
        ui->delim->setCurrentIndex(0);
        ui->delim->setEnabled(false);
        return;
    }
    ui->delim->setEnabled(true);
}

void Settings::update_savedelim(int index)
{
    ui->delim_2->setCurrentIndex(index);
}

void Settings::update_keepstate(int state)
{
    keep_scale = bool(state);
}

void Settings::update_height(const QString &text)
{
    if(!keep_scale)
        return;
    QRegularExpressionMatch match = re_int->match(text);
    if(!match.hasMatch())
        return;
    int w = text.toInt();
    if(w<=0)
        return;
    scale =double(w)/double(this->width);
    int h = int(this->height*scale);
    qDebug()<<h;
    ui->height->blockSignals(true);
    ui->height->setText(QString::number(h));
    ui->height->blockSignals(false);
}

void Settings::update_width(const QString &text)
{
    if(!keep_scale)
        return;
    QRegularExpressionMatch match = re_int->match(text);
    if(!match.hasMatch())
        return;
    int h= text.toInt();
    if(h<=0)
        return;
    scale = double(h)/double(this->height);
    int w = int(this->width*scale);
    qDebug()<<w;
    ui->width->blockSignals(true);
    ui->width->setText(QString::number(w));
    ui->width->blockSignals(false);
}

void Settings::update_savetype(int index)
{
    ui->type_2->setCurrentIndex(index);
}

int Settings::getIndex(dtype type)
{
    switch (type) {
        case dtype::csv_xy:
            return 0;
        case dtype::csv_ny:
            return 1;
        case dtype::txt_xy:
            return 2;
        case dtype::txt_ny:
            return 3;
        default:
            return -1;
    }
}

int Settings::getIndex(spliter delim){
    switch (delim) {
        case spliter::comma:
            return 0;
        case spliter::slash:
            return 1;
        case spliter::space:
            return 2;
        case spliter::tab:
            return 3;
        default:
            return -1;
    }
}

bool Settings::check_invaildwh(const QString &worh)
{
QRegularExpressionMatch match = re_int->match(worh);
    if(!match.hasMatch())
        return false;
    int n= worh.toInt();
    if(n<=0)
        return false;
    return true;
}

QChar Settings::getChar(){
    switch (d_delim) {
        case spliter::comma:
            return ',';
        case spliter::slash:
            return '/';
        case spliter::space:
            return ' ';
        case spliter::tab:
            return '\t';
        default:
            return ',';
    }
}


void Settings::on_buttonBox_accepted()
{
    accept = false;
    QRegularExpressionMatch match_startp = re_double->match(ui->startpoint->text());
    QRegularExpressionMatch match_numd = re_int->match(ui->numofdata->text());
    QRegularExpressionMatch match_step = re_double->match(ui->stepsize->text());
    QRegularExpressionMatch math_w = re_int->match(ui->width->text());
    QRegularExpressionMatch math_h = re_int->match(ui->height->text());

    if(match_startp.hasMatch()&&match_numd.hasMatch()&&match_step.hasMatch()){
        accept = true;
        startpoint = ui->startpoint->text().toDouble();
        numofdata = ui->numofdata->text().toInt();
        stepsize = ui->stepsize->text().toDouble();
        d_type = (dtype)ui->type->currentIndex();
        d_delim = (spliter)ui->delim->currentIndex();
    }
    if(check_invaildwh(ui->width->text())&&check_invaildwh(ui->height->text())&&check_invaildwh(ui->resolution->text())){
        accept = true;
        s_type = (dtype)ui->type_2->currentIndex();
        s_delim = (spliter)ui->delim_2->currentIndex();
        resolution = ui->resolution->text().toInt();
        if(!keep_scale){
            width = ui->width->text().toInt();
            height = ui->height->text().toInt();
            scale = 1;
        }
    }
    update_txt();
}

void Settings::on_buttonBox_rejected()
{
    update_txt();
}

