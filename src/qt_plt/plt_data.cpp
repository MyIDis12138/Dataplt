#include "plt_data.h"
#include "qiterable.h"
#include <QVector>

plt_data::plt_data(QVector<double> *x_axis, QVector<double> *y_axis){
    this->x_axis = x_axis;
    this->y_axis = y_axis;
}


QVector<double> *plt_data::get_x_axis()
{
    return this->x_axis;
}

QVector<double> *plt_data::get_y_axis()
{
    return this->y_axis;
}

void plt_data::add_results(QVector<double> *y_axis)
{
}

