#include "config.h"
#include "ui_config.h"

Config::Config(QWidget *parent,
               double x_lower_bound,
               double x_upper_bound,
               double y_lower_bound,
               double y_upper_bound,
               QString x_label,
               QString y_label):
    QDialog(parent),
    ui(new Ui::Config)
{
    ui->setupUi(this);
    set_axis(x_lower_bound,x_upper_bound,y_lower_bound,y_upper_bound);
    set_label(x_label,y_label);
    set_model(true,true);
    update_default(x_lower_bound,x_upper_bound,y_lower_bound,y_upper_bound);

    connect(parent,SIGNAL(default_changed(double, double, double, double)), this, SLOT(update_default(double, double, double, double)));
    connect(ui->lower_x,SIGNAL(valueChanged(double)), this, SLOT(set_upper_x_min()));
    connect(ui->upper_x,SIGNAL(valueChanged(double)), this, SLOT(set_lower_x_max()));
    connect(ui->lower_y,SIGNAL(valueChanged(double)), this, SLOT(set_upper_y_min()));
    connect(ui->upper_y,SIGNAL(valueChanged(double)), this, SLOT(set_lower_y_max()));
}

Config::~Config()
{
    delete ui;
}

void Config::set_axis(double x_lower_bound,
                      double x_upper_bound,
                      double y_lower_bound,
                      double y_upper_bound)
{
    this->x_lower_bound = x_lower_bound;
    this->x_upper_bound = x_upper_bound;
    this->y_lower_bound = y_lower_bound;
    this->y_upper_bound = y_upper_bound;
    update_axis_text();
}

void Config::set_label(QString x_label, QString y_label)
{
    this->x_label = x_label;
    this->y_label = y_label;
    update_label_text();
}

void Config::set_model(bool enable_drag, bool enable_zoom)
{
    this->enable_drag = enable_drag;
    this->enable_zoom = enable_zoom;
    udpate_checkbox();
}

void Config::update_axis_text()
{
    ui->lower_x->setValue(x_lower_bound);
    ui->upper_x->setValue(x_upper_bound);
    ui->lower_y->setValue(y_lower_bound);
    ui->upper_y->setValue(y_upper_bound);
}

void Config::update_label_text()
{
    ui->x_label->setText(x_label);
    ui->y_label->setText(y_label);
}

void Config::udpate_checkbox()
{
    ui->drag->setChecked(this->enable_drag);
    ui->zoom->setChecked(this->enable_zoom);
}


void Config::set_lower_x_max()
{
    //qDebug()<<"Called";
    ui->lower_x->setMaximum(ui->upper_x->value());
}

void Config::set_upper_x_min()
{
    //()<<"Called";
    ui->upper_x->setMinimum(ui->lower_x->value());
}

void Config::set_lower_y_max()
{
    ui->lower_y->setMaximum(ui->upper_y->value());
}

void Config::set_upper_y_min()
{
    ui->upper_y->setMinimum(ui->lower_y->value());
}


void Config::on_buttonBox_accepted()
{
    if(ui->lower_x->value()<ui->upper_x->value()){
        this->x_lower_bound = ui->lower_x->value();
        this->x_upper_bound = ui->upper_x->value();
        x_set = true;
    }

    if(ui->lower_y->value()<ui->upper_y->value()){
        this->y_lower_bound = ui->lower_y->value();
        this->y_upper_bound = ui->upper_y->value();
        y_set = true;
    }
    this->enable_drag = ui->drag->checkState();
    this->enable_zoom = ui->zoom->checkState();
    this->x_label = ui->x_label->text();
    this->y_label = ui->y_label->text();
}

void Config::on_Reset_clicked()
{
    set_axis(default_x_lower,default_x_upper,default_y_lower,default_y_upper);
    set_model(true,true);
}

void Config::update_default(double x_lower, double x_upper, double y_lower, double y_upper)
{
    default_x_lower = x_lower;
    default_x_upper = x_upper;
    default_y_lower = y_lower;
    default_y_upper = y_upper;
    //qDebug()<<"called";
}

