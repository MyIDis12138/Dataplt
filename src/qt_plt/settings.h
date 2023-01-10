#ifndef SETTINGS_H
#define SETTINGS_H

#include "myenum.h"
#include <QDialog>
#include <QRegularExpression>
#include <QRegularExpressionMatch>

namespace Ui {
class Settings;
}

class Settings : public QDialog
{
    Q_OBJECT

public:
    explicit Settings(QWidget *parent = nullptr);
    ~Settings();

    double startpoint;
    double stepsize;
    int numofdata;
    dtype d_type;
    spliter d_delim;

    dtype s_type;
    spliter s_delim;
    bool keep_scale;
    int width;
    int height;
    int resolution;
    double scale;

    bool accept = false;

    QChar getChar();

private slots:
    void set_numofdata(int num);
    void set_csvdelim(int index);
    void on_buttonBox_accepted();

    void update_savetype(int index);
    void update_savedelim(int index);
    void update_keepstate(int state);
    void update_height(const QString &text);
    void update_width(const QString &text);

    void on_buttonBox_rejected();

private:
    Ui::Settings *ui;

    QRegularExpression *re_double = new QRegularExpression();
    QRegularExpression *re_int = new QRegularExpression();

    void update_txt();
    int getIndex(dtype type);
    int getIndex(spliter delim);
    bool check_invaildwh(const QString &worh);

};

#endif // SETTINGS_H
