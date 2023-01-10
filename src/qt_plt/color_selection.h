#ifndef COLOR_SELECTION_H
#define COLOR_SELECTION_H

#include <QDialog>

namespace Ui {
class Color_selection;
}

class Color_selection : public QDialog
{
    Q_OBJECT

public:
    explicit Color_selection(QWidget *parent = nullptr);
    ~Color_selection();

private:
    Ui::Color_selection *ui;
};

#endif // COLOR_SELECTION_H
