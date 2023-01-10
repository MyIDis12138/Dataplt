#ifndef INITIALIZE_FILE_NAME_H
#define INITIALIZE_FILE_NAME_H

#include <QDialog>
#include <QRegularExpression>
#include <QRegularExpressionMatch>

namespace Ui {
class initialize_file_name;
}

class initialize_file_name : public QDialog
{
    Q_OBJECT

public:
    explicit initialize_file_name(QWidget *parent = nullptr, QString filename="");
    ~initialize_file_name();
    QString file_name ="";
    bool success = false;
    bool cancle = false;

private slots:
    void on_buttonBox_accepted();
    void on_buttonBox_rejected();

private:
    Ui::initialize_file_name *ui;
    QRegularExpression re;
};

#endif // INITIALIZE_FILE_NAME_H



