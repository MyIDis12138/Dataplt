#ifndef INITIALIZE_FILENAME_H
#define INITIALIZE_FILENAME_H

#include <QDialog>
#include <QRegularExpression>
#include <QRegularExpressionMatch>

namespace Ui {
class Dialog;
}

class initialize_filename : public QDialog
{
    Q_OBJECT

public:
    explicit initialize_filename(QWidget *parent = nullptr, QString filename = "");
    ~initialize_filename();
    QString file_name ="";
    bool success = false;

private slots:
    void on_buttonBox_accepted();

private:
    QRegularExpression *re = new QRegularExpression();
    Ui::Dialog *ui;

};

#endif // INITIALIZE_FILENAME_H
