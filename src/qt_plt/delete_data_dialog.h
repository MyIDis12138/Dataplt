#ifndef DELETE_DATA_DIALOG_H
#define DELETE_DATA_DIALOG_H

#include <QDialog>

namespace Ui {
class Delete_data_dialog;
}

class Delete_data_dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Delete_data_dialog(QWidget *parent = nullptr);
    ~Delete_data_dialog();

private:
    Ui::Delete_data_dialog *ui;
};

#endif // DELETE_DATA_DIALOG_H
