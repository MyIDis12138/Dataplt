#ifndef CONFIG_H
#define CONFIG_H

#include <QDialog>

namespace Ui {
class Config;
}

class Config : public QDialog
{
    Q_OBJECT

public:
    explicit Config(QWidget *parent = nullptr,
                    double x_lower_bound=0,
                    double x_upper_bound=0,
                    double y_lower_bound=0,
                    double y_upper_bound=0,
                    QString x_label="",
                    QString y_label="");
    ~Config();
    double x_lower_bound;
    double x_upper_bound;
    double y_lower_bound;
    double y_upper_bound;

    QString x_label = "";
    QString y_label = "";

    bool enable_drag = true;
    bool enable_zoom = true;

    bool x_set =false;
    bool y_set = false;

    void set_axis(double x_lower_bound,
                  double x_upper_bound,
                  double y_lower_bound,
                  double y_upper_bound);

    void set_label(QString x_label,
                   QString y_label);

    void set_model(bool enable_drag,
                   bool enable_zoom);
private slots:
    void set_lower_x_max();
    void set_upper_x_min();
    void set_lower_y_max();
    void set_upper_y_min();

    void on_buttonBox_accepted();
    void on_Reset_clicked();
    void update_default(double x_lower, double x_upper, double y_lower, double y_upper);

private:
    Ui::Config *ui;
    double default_x_lower;
    double default_x_upper;
    double default_y_lower;
    double default_y_upper;
    void update_axis_text();
    void update_label_text();
    void udpate_checkbox();
};

#endif // CONFIG_H
