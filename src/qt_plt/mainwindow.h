#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTableWidgetItem>
#include <QMessageBox>

#include <algorithm>
#include <QtMath>
#include <QtGui/QColor>
#include <QVector>
#include <QIcon>
#include "myenum.h"

#include <QColorDialog>
#include "config.h"
#include "initialize_filename.h"
#include "delete_data_dailog.h"
#include "settings.h"
#include "func_translator.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    // slots of menuebar
    void on_actionLoad_dataset_triggered();
    void on_actionSave_Plots_triggered();
    void on_actionSave_datasets_triggered();
    void on_actionDelete_dataset_triggered();
    void on_actionconfig_triggered();
    void on_actionSettings_triggered();

    //slots of push button
    void on_Plot_clicked();
    void on_Add_data_clicked();
    void on_Delete_data_clicked();
    void on_Clear_all_clicked();

    void on_exit();
    void update_save_status();
    void update_plot_status();
    void update_axis();

    //private slots
    void clear_all_loaded_datasets();
    void change_color(int row, int column);
    void update_checkstate(int row, int column);
    void delete_data(int index);
    void update_changestate();


    void on_add_func_clicked();

    void on_actionadd_function_triggered();

    void on_Change_color_clicked();

signals:
    void default_changed(double x_lower, double x_upper, double y_lower, double y_upper);
    void plot_data_changd();

private:
    Ui::MainWindow *ui;
    int num_of_dataset = 0; //record the datasets to be plotted
    QVector<int> original_index;
    bool save_needed=false;
    bool all_plotted=false;
    bool data_changed =false;
    QList<QString> icons = {":/icons/file_icon.png",":/icons/csv_icon.png"};

    QVector<QString> *datasets_path = new QVector<QString>;
    QVector<QString> *datasets_names = new QVector<QString>;
    QVector<QVector<double>*> *data_x = new QVector<QVector<double>*>;// original data
    QVector<QVector<double>*> *data_y = new QVector<QVector<double>*>;
    QVector<QColor> colors;

    QVector<double> *dataset_x;
    QVector<double> *dataset_y;
    QTableWidgetItem *item;
    QBrush *brush;

    QString get_icon_path(QString &suffix);
    bool check_duplicate(QString &fileName,  QVector<QString> *data);
    bool add_dataName(QString &fileName);
    bool load_dataset(QString &file_path);
    void add_in_table();
    void inte_error(int &err_num);
    void update_with_config();
    void reset_combobox();

    void dataprocessor(func function);
    bool size_check();
    void addition();
    void production();
    void logrithm();
    void process_terms(QVector<QVector<double>> &res_terms, QVector<QVector<int>*>* &terms,QVector<QVector<bool>>* &if_ln, QVector<QChar>* &operator_pri);
    void get_result(QVector<double>* &res,QVector<QVector<double>> &res_terms, QVector<QChar>* &operator_sub);

    // Constructing a new window to ask the user to input the new font
    initialize_filename *get_fileName_dialog;// Dialog
    QColorDialog *color_dialog;
    Config *config_dialog;
    delete_data_dailog *delete_dialog;
    Settings *settings_dialog;
    func_translator *func_dialog;
};

#endif // MAINWINDOW_H
