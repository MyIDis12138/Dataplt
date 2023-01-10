#ifndef PLT_DATA_H
#define PLT_DATA_H

#include <QVector>

class plt_data
{
public:
    plt_data(QVector<double> *x_axis, QVector<double> *y_axis);
    QVector<double> *get_x_axis();
    QVector<double> *get_y_axis();

private:
    QVector<double> *x_axis;
    QVector<double> *y_axis;
    void add_results(QVector<double> *y_axis);
};

#endif // PLT_DATA_H
