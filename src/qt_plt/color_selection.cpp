#include "color_selection.h"
#include "ui_color_selection.h"

Color_selection::Color_selection(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Color_selection)
{
    ui->setupUi(this);
}

Color_selection::~Color_selection()
{
    delete ui;
}
