#ifndef DELETE_DATA_DAILOG_H
#define DELETE_DATA_DAILOG_H

#include <QDialog>

QT_BEGIN_NAMESPACE
class QPushButton;
class QComboBox;;
QT_END_NAMESPACE

class delete_data_dailog : public QDialog
{
    Q_OBJECT

public:
    delete_data_dailog(QWidget *parent = nullptr);
    QComboBox *datalist;

    void reset_datalist();
    void remove_item(int index);

signals:
    void delete_index(int index);
    void delete_all();

private slots:
    void on_okButton_clicked();
    void on_delete_all_clicked();

};

#endif // DELETE_DATA_DAILOG_H
