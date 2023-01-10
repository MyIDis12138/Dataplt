#include "mainwindow.h"
#include "initialize_filename.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //initialize combobox
    delete_dialog = new delete_data_dailog(this); // No copy constructor or assignment operator in qt. Unable use two pointers point to same combobox
                                                  // https://doc.qt.io/qt-5/qobject.html#no-copy-constructor-or-assignment-operator
    settings_dialog = new Settings(this);
    //initialize config
    config_dialog = new Config(this,-10,10,-10,10,"x","y");
    update_with_config();

    // initialize table widget
    QString header = "name, color, v";
    QStringList headers = header.simplified().split(',');
    ui->tableWidget->setColumnCount(3);
    ui->tableWidget->setFixedWidth(256);
    ui->tableWidget->setHorizontalHeaderLabels(headers);
    ui->tableWidget->setColumnWidth(0,160);
    ui->tableWidget->setColumnWidth(1,30);
    ui->tableWidget->setColumnWidth(2,20);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    ui->tableWidget->insertRow(0);

    //connect the signals from table
    connect(ui->tableWidget, SIGNAL(cellDoubleClicked(int,int)),this, SLOT(change_color(int,int)));
    connect(ui->tableWidget, SIGNAL(cellClicked(int,int)),this, SLOT(update_checkstate(int,int)));

    // update need to save status
    connect(ui->Plot, SIGNAL(clicked()), this, SLOT(update_plot_status()));
    connect(ui->actionSave_Plots, SIGNAL(triggered()), this, SLOT(update_save_status()));
    connect(this,&MainWindow::plot_data_changd, this, &MainWindow::update_changestate); // practice on puerpose

    //connect(ui->customPlot->xAxis, SIGNAL(rangeChanged(QCPRange)), this, SLOT(update_axis()));
    //connect(ui->customPlot->yAxis, SIGNAL(rangeChanged(QCPRange)), this, SLOT(update_axis()));
}

MainWindow::~MainWindow()
{
    delete ui;
    delete datasets_names;
    delete datasets_path;
    delete data_x;
    delete data_y;
    delete dataset_x;
    delete dataset_y;
    delete item;
    delete brush;
    delete color_dialog;
    delete get_fileName_dialog;
    delete config_dialog;
    delete func_dialog;
}

// '''internal methods'''
bool MainWindow::add_dataName(QString &fileName)
{
/*
    Check and add a file name in memory. Return true if successful.
    When file name is alphanumric and has no duplicate name, return ture.
    Also add in delete dialog with corressponding suffix
*/

    QString dataname="";
    QString Suffix = "";
    for (QString::iterator it=fileName.end(); it!=fileName.begin(); --it){
            if (*it=='/') // stop when the first '/' is found
                break;
            dataname = *it + dataname;
            if(*it=='.'){
                Suffix = dataname;
                dataname ="";
            }
            if (*it=='\x0') // the last char of the string is '\x0' and clear the suffix
                dataname="";
    }
    get_fileName_dialog = new initialize_filename(this,dataname);
    while(true){
        get_fileName_dialog->exec();
        dataname = get_fileName_dialog->file_name;
        if(!get_fileName_dialog->result()){
            return false;
        }
        if(!get_fileName_dialog->success)
        {
            QMessageBox::information(this, tr("warning"),QString("Invaild format, filename should be alphanumeric"));
            continue;
        }
        if (check_duplicate(dataname, datasets_names)){
            QMessageBox::information(this, tr("warning"),QString("file name already existed!"));
            continue;
        }
        break;
    }

    //qDebug()<<Suffix;
    delete_dialog->datalist->addItem(QIcon(get_icon_path(Suffix)),dataname);
    datasets_names->push_back(dataname);
    return true;
}

bool MainWindow::load_dataset(QString &file_path)
{

/*
    Check and add a file path in memory

*/
    dataset_x = new QVector<double>;
    dataset_y = new QVector<double>;
    try {
        QFile file(file_path);
        if (!file.open(QIODevice::ReadOnly)) {
            QMessageBox::information(this, tr("Unable to open file"),
                file.errorString());
            return false;
        }
        QTextStream input(&file);
        QString line;
        QStringList items;
        while(!input.atEnd()){
            line = input.readLine();
            items = line.split(settings_dialog->getChar());
            dataset_x->push_back(items[0].toDouble());
            dataset_y->push_back(items[1].toDouble());
        }
        file.close();
    }
    catch(QException e){
        return false;
    }
    data_x->push_back(dataset_x);
    data_y->push_back(dataset_y);
    datasets_path->push_back(file_path);
    return true;
}

void MainWindow::add_in_table()
{
    /*
    When calling this function, correct datasets has been loaded.
    This function will add a data in table widget and assign a color to it.
    The row will be filled with dataset name, color, checkbox.
    */

    if(ui->tableWidget->itemAt(0,0)){
        ui->tableWidget->insertRow(ui->tableWidget->rowCount());
    }

    QColor st_color(QColor::colorNames()[7+num_of_dataset%140]);

    item = new QTableWidgetItem(datasets_names->back());
    ui->tableWidget->setItem(num_of_dataset,0,item);

    item = new QTableWidgetItem();
    brush = new QBrush(st_color);
    item->setBackground(*brush);
    item->setFlags(Qt::ItemIsEnabled);
    ui->tableWidget->setItem(num_of_dataset,1,item);
    colors.push_back(st_color);

    item = new QTableWidgetItem();
    item->setFlags(Qt::ItemIsEnabled);
    item->setCheckState(Qt::Checked);
    ui->tableWidget->setItem(num_of_dataset,2,item);
}

bool MainWindow::check_duplicate(QString &fileName,  QVector<QString> *data)
{
    if(std::find(data->begin(),data->end(),fileName) != data->end())
        return true;
    return false;
}

QString MainWindow::get_icon_path(QString &suffix)
{
    // translate icon path
    if(suffix==".csv")
        return icons[1];
    if(suffix==".txt")
        return icons[0];
    return "";
}

void MainWindow::update_with_config()
{
    //update config dialog with current customplot status
    ui->customPlot->xAxis->setLabel(config_dialog->x_label);
    ui->customPlot->yAxis->setLabel(config_dialog->y_label);
    ui->customPlot->xAxis->setRange(config_dialog->x_lower_bound, config_dialog->x_upper_bound);
    ui->customPlot->yAxis->setRange(config_dialog->y_lower_bound, config_dialog->y_upper_bound);
    ui->customPlot->setInteraction(QCP::iRangeDrag, config_dialog->enable_drag);
    ui->customPlot->setInteraction(QCP::iRangeZoom, config_dialog->enable_zoom);
    ui->customPlot->setAutoAddPlottableToLegend(true);
    ui->customPlot->replot();
    config_dialog->x_set = false;
    config_dialog->y_set = false;
}


// '''private slots'''
void MainWindow::update_checkstate(int row, int column)
{
    // update the visiablity check state
    if (!ui->tableWidget->itemAt(0,0)||column!=2)
        return;
    if(ui->tableWidget->item(row,column)->checkState()){
        ui->tableWidget->item(row,column)->setCheckState(Qt::Unchecked);
    }
    else{
        ui->tableWidget->item(row,column)->setCheckState(Qt::Checked);
    }
    if(all_plotted){
        ui->customPlot->graph(row)->setVisible(ui->tableWidget->item(row,column)->checkState());
        ui->customPlot->replot();
    }
}

void MainWindow::change_color(int row, int column)
{
    // change a color with coordinates in table
    if (column!=1 || !ui->tableWidget->itemAt(0,0))
        return;
    color_dialog=new QColorDialog(QColorDialog::DontUseNativeDialog);
    color_dialog->exec();
    if(!color_dialog->result())
        return;
    brush = new QBrush(color_dialog->currentColor());
    item = new QTableWidgetItem();
    item->setBackground(*brush);
    ui->tableWidget->setItem(row,1,item);
    colors[row] = color_dialog->currentColor();
    emit plot_data_changd();
}

void MainWindow::delete_data(int index)
{
    // delete a data with index
    if (num_of_dataset==0)
        return;
    emit plot_data_changd();
    if(num_of_dataset==1){
        clear_all_loaded_datasets();
        return;
    }
    if(index>-1){
        original_index.remove(index);
        ui->tableWidget->removeRow(index);
        ui->customPlot->removeGraph(index);   
        colors.remove(index);
        datasets_path->removeAt(index);
        datasets_names->removeAt(index);
        data_x->removeAt(index);
        data_y->removeAt(index);
        num_of_dataset--;
        all_plotted = false;
    }
}

void MainWindow::update_changestate()
{
    this->data_changed = true;
}

void MainWindow::clear_all_loaded_datasets()
{
    datasets_path->clear();
    datasets_names->clear();
    original_index.clear();
    data_x->clear();
    data_y->clear();
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->insertRow(0);
    colors.clear();
    num_of_dataset=0;
    ui->customPlot->clearGraphs();
    ui->customPlot->replot();
    all_plotted = false;
    emit plot_data_changd();
}


// '''actions of Menubar '''
void MainWindow::on_actionLoad_dataset_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this,
                                                    tr("Load datasets"), "",
                                                    tr("text file(*.txt);;csv file(*.csv);;All Files (*)"));
    if (fileName.isEmpty())
        return;
    if(check_duplicate(fileName, datasets_path)){
        QMessageBox::information(this, tr("Failed"),QString("File exists."));
        return;
    }
    if (!add_dataName(fileName))
        return;
    if(!load_dataset(fileName)){
        datasets_names->pop_back();
        delete_dialog->datalist->removeItem(delete_dialog->datalist->count());
        return;
    };

    add_in_table();
    all_plotted = false;
    emit plot_data_changd();
    original_index.push_back(num_of_dataset);
    num_of_dataset++;
}

void MainWindow::on_actionSave_Plots_triggered()
{
    QString filePath = QFileDialog::getSaveFileName(this,
                                                    tr("Save datasets"), "",
                                                    tr("png file(*.png);;All Files (*)"));
    if (filePath.isEmpty()){
        return;
    }
    ui->customPlot->savePng(filePath,settings_dialog->width,settings_dialog->height,settings_dialog->scale,-1,settings_dialog->resolution);
}

void MainWindow::on_actionSave_datasets_triggered()
{
    return;
    /*
    QString fileName = QFileDialog::getSaveFileName(this,
                                                    tr("Save datasets"), "",
                                                    tr("csv file(*.csv);;All Files (*)"));
    if (fileName.isEmpty())
        return;
    else{
        QFile file(fileName);
        if (!file.open(QIODevice::WriteOnly)) {
            QMessageBox::information(this, tr("Unable to open file"),
                file.errorString());
            return;
        }
        // TODO save the contents
    }*/
}

void MainWindow::on_actionDelete_dataset_triggered()
{
    // delete a data in menue bar and update in mainwindow
    connect(delete_dialog,SIGNAL(delete_index(int)),this,SLOT(delete_data(int)));
    connect(delete_dialog,SIGNAL(delete_all()),this,SLOT(clear_all_loaded_datasets()));
    delete_dialog->exec();
}

void MainWindow::on_actionconfig_triggered()
{
    update_axis();
    while(!(config_dialog->x_set && config_dialog->y_set)){
        config_dialog->exec();
        if(!config_dialog->result())
            return;
        if(!config_dialog->x_set && !config_dialog->y_set){
            QMessageBox::information(this, tr("Invaild range"),QString("the lower bound of x and y should less than upper bound"));
            continue;
        }
        if(!config_dialog->x_set)
            QMessageBox::information(this, tr("Invaild x range"),QString("the lower bound of x should less than upper bound"));
        if(!config_dialog->y_set)
            QMessageBox::information(this, tr("Invaild x range"),QString("the lower bound of y should less than upper bound"));
    }
    update_with_config();
}

void MainWindow::on_actionSettings_triggered()
{
    settings_dialog->exec();
    while(settings_dialog->result()&&!settings_dialog->accept){
        QMessageBox::information(this, tr("Invaild value"),QString("Please enter double numbers in start point and step size and a int in num of data."));
        settings_dialog->exec();
    }
}

void MainWindow::on_actionadd_function_triggered()
{
    func_dialog = new func_translator(this, num_of_dataset);
    func_dialog->exec();
    if(!func_dialog->result())
        return;
    if(!func_dialog->accept){
        QMessageBox::information(this, "Invaild formula","Data format does not match or index out of range");
        return;
    }
    else{
        QVector<QVector<double>> res_terms;
        try{
            process_terms(res_terms, func_dialog->terms, func_dialog->if_ln,func_dialog->operators_pri);
        }
        catch(const std::exception& e){
            QMessageBox::information(this,"Data processing error",e.what());
            return;
        }
        dataset_y = new QVector<double>;
        get_result(dataset_y,res_terms,func_dialog->operators_sub);
        data_x->push_back(data_x->front());
        data_y->push_back(dataset_y);
        datasets_names->push_back(func_dialog->formula);
        datasets_path->push_back(func_dialog->formula);
        add_in_table();
        original_index.push_back(-1);
        num_of_dataset++;
        all_plotted=false;
        data_changed=true;
    }
}


// '''Slots of push buttons '''
void MainWindow::on_Plot_clicked()
{
    if(num_of_dataset==0){
        QMessageBox::information(this, tr("Failed"), QString("no dataset to be plotted!"));
        return;
    }

    if(data_changed){
        // create graph and assign data to it:
        QVector<QColor>::Iterator it_color = colors.begin();
        ui->customPlot->clearGraphs();
        for (int graph_num = 0;graph_num<num_of_dataset;graph_num++){
            ui->customPlot->addGraph();
            ui->customPlot->graph(graph_num)->setPen(*it_color);
            ui->customPlot->graph(graph_num)->setName(this->datasets_names->at(graph_num));
            ui->customPlot->graph(graph_num)->setData(*data_x->at(graph_num), *data_y->at(graph_num));
            if(graph_num)
                ui->customPlot->graph(graph_num)->rescaleAxes(true);
            else
                ui->customPlot->graph(graph_num)->rescaleAxes();
            ui->customPlot->graph(graph_num)->setVisible(ui->tableWidget->item(graph_num,2)->checkState());
            it_color++;
        }
        this->all_plotted = true;
        this->data_changed = false;
        emit default_changed(ui->customPlot->xAxis->range().lower,
                             ui->customPlot->xAxis->range().upper,
                             ui->customPlot->yAxis->range().lower,
                             ui->customPlot->yAxis->range().upper);
        ui->customPlot->legend->setVisible(true);
        ui->customPlot->replot();
    }
}

void MainWindow::on_Add_data_clicked()
{
    on_actionLoad_dataset_triggered();
}

void MainWindow::on_Delete_data_clicked()
{
    delete_dialog->remove_item(ui->tableWidget->currentRow()+1);
    delete_data(ui->tableWidget->currentRow());
    ui->customPlot->replot();
}

void MainWindow::on_Clear_all_clicked()
{
    clear_all_loaded_datasets();
    delete_dialog->reset_datalist();
}

void MainWindow::on_add_func_clicked()
{
    dataprocessor(func(ui->func->currentIndex()));
}

void MainWindow::on_Change_color_clicked()
{
    if(ui->tableWidget->currentRow()>-1)
        change_color(ui->tableWidget->currentRow(),1);
}


// ''' data processor'''
void MainWindow::dataprocessor(func function)
{
    /*
    supported three functions: add all, product all, ln of all
    when custom function is added, called formual written dialog
*/
    switch(function){
    case func::origin:
        break;
    case func::add:
        if(num_of_dataset==0){
            QMessageBox::information(this, "Error",QString("No datasets loaded!"));
            return;
        }
        if(size_check())
            addition();
        else
            QMessageBox::information(this, "Error",QString("size of datasets do not match!"));
        break;
    case func::product:
        if(num_of_dataset==0){
            QMessageBox::information(this, "Error",QString("No datasets loaded!"));
            return;
        }
        if(size_check())
            production();
        else
            QMessageBox::information(this, "Error",QString("size of datasets do not match!"));
        break;
    case func::logrithm:
        if(num_of_dataset==0){
            QMessageBox::information(this, "Error",QString("No datasets loaded!"));
            return;
        }
        if(size_check())
            logrithm();
        else
            QMessageBox::information(this, "Error",QString("size of datasets do not match!"));
        break;
    case func::custom:
        on_actionadd_function_triggered();
        break;
    default:
        break;
    }
}

bool MainWindow::size_check()
{
    // check if all datasets have same x coordinates
    int size = data_x->at(0)->size();
    for (int i = 1; i < data_x->size(); ++i){
        if(size!=data_x->at(i)->size())
            return false;
    }
    return true;
}

void MainWindow::addition()
{
    dataset_y = new QVector<double>;
    for(int i = 0; i < data_y->at(0)->size(); i++){
        double sum = 0;
        for (int j = 0; j< data_y->size(); j++){
            if(std::find(original_index.begin(),original_index.end(),j) != original_index.end())
                sum+=data_y->at(j)->at(i);
        }
        dataset_y->push_back(sum);
    }
    data_x->push_back(data_x->front());
    data_y->push_back(dataset_y);
    datasets_path->push_back("addition");
    datasets_names->push_back("add_all");
    add_in_table();
    original_index.push_back(-1);
    num_of_dataset++;
    all_plotted=false;
    data_changed=true;
}

void MainWindow::production()
{
    dataset_y = new QVector<double>;
    for(int i = 0; i < data_y->at(0)->size(); i++){
        double pdt = 1;
        for (int j = 0; j< data_y->size(); j++){
            if(std::find(original_index.begin(),original_index.end(),j) != original_index.end())
                pdt*=data_y->at(j)->at(i);
        }
        dataset_y->push_back(pdt);
    }
    data_x->push_back(data_x->front());
    data_y->push_back(dataset_y);
    datasets_path->push_back("production");
    datasets_names->push_back("product_all");
    add_in_table();
    original_index.push_back(-1);
    num_of_dataset++;
    all_plotted=false;
    data_changed=true;
}

void MainWindow::logrithm()
{
    for(int n = 0; n<data_y->size(); n++){
        if(std::find(original_index.begin(),original_index.end(),n) != original_index.end())
        {
            bool fail = false;
            dataset_y = new QVector<double>;
            for(int i = 0; i < data_y->at(n)->size(); i++){
                if( data_y->at(n)->at(i)>0)
                    dataset_y->push_back(qLn(data_y->at(n)->at(i)));
                else{
                    QMessageBox::information(this,"Add ln of "+datasets_names->at(n)+" failed","The value of y can not less than or equal to zero.");
                    fail = true;
                    break;
                }
            }
            if(fail){
                continue;
            }
            data_x->push_back(data_x->front());
            data_y->push_back(dataset_y);
            datasets_path->push_back("ln_of_"+QString::number(n));
            datasets_names->push_back("ln_of_"+datasets_names->at(n));
            add_in_table();
            original_index.push_back(-1);
            num_of_dataset++;
            all_plotted=false;
            data_changed=true;
        }
    }
}

void MainWindow::process_terms(QVector<QVector<double>> &res_terms, QVector<QVector<int> *> *&terms, QVector<QVector<bool>>* &if_ln, QVector<QChar>* &operator_pri)
{
    int terms_count = 0;
    for(int t = 0; t < terms->size(); t++){
        QVector<double> term;
        int index = terms->at(t)->at(0)-1;
        if(terms->at(t)->size()==1){
            if(if_ln->at(t).at(0)){
                for (int i = 0; i <data_y->at(index)->size(); i++){
                    if (data_y->at(index)->at(i)>0)
                        term.push_back(qLn(data_y->at(index)->at(i)));
                    else
                        throw std::runtime_error("Ln of less than or equal to zero error!");
                }
                res_terms.push_back(term);
            }
            else
                res_terms.push_back(*data_y->at(index));
        }
        else{
            if(if_ln->at(t).at(0)){
                for (int i = 0; i <data_y->at(index)->size(); i++){
                    if (data_y->at(index)->at(i)>0)
                        term.push_back(qLn(data_y->at(index)->at(i)));
                    else
                        throw std::runtime_error("Ln of less than or equal to zero error!");
                }
            }
            else{
                for (int i = 0; i <data_y->at(index)->size(); i++)
                    term.push_back(data_y->at(index)->at(i));
            }

            for(int n = 1; n<terms->at(t)->size(); n++){
                index = terms->at(t)->at(n)-1;
                if(if_ln->at(t).at(n)){
                    if(operator_pri->at(terms_count)=='*'){
                        for(int i = 0; i < term.size(); i++){
                            if(data_y->at(index)->at(i)>0)
                                term[i] *= qLn(data_y->at(index)->at(i));
                            else
                                throw std::runtime_error("Ln of less than or equal to zero error!");
                        }
                    }
                    if(operator_pri->at(terms_count)=='/'){
                        for(int i = 0; i < term.size(); i++){
                            if(data_y->at(index)->at(i)>0){
                                double div = qLn(data_y->at(index)->at(i));
                                if(div!=0)
                                    term[i] /= div;
                                else
                                    throw std::runtime_error("Division by zero error!");
                            }
                            else
                                throw std::runtime_error("Ln of less than or equal to zero error!");
                        }
                        for(int i = 0; i < term.size(); i++){
                            term[i] /= data_y->at(index)->at(i);
                        }
                    }
                }
                else{
                    if(operator_pri->at(terms_count)=='*'){
                        for(int i = 0; i < term.size(); i++){
                            term[i] *= data_y->at(index)->at(i);
                        }
                    }
                    if(operator_pri->at(terms_count)=='/'){
                        for(int i = 0; i < term.size(); i++){
                            double div = data_y->at(index)->at(i);
                            if(div!=0)
                                term[i] /= div;
                            else
                                throw std::runtime_error("Division by zero error!");
                        }
                    }
                }
                terms_count++;
            }
            res_terms.push_back(term);
        }
    }
}

void MainWindow::get_result(QVector<double>* &res, QVector<QVector<double>> &res_terms, QVector<QChar>* &operator_sub)
{
    QVector<double> result;
    for(int i = 0; i < res_terms.at(0).size(); i++){
        result.push_back(res_terms.at(0).at(i));
    }
    for(int t = 0; t < operator_sub->size(); t++){
        if(operator_sub->at(t)=='+'){
            for(int i = 0; i < res_terms.at(0).size(); i++){
                result[i] += res_terms.at(t+1).at(i);
            }
        }
        if(operator_sub->at(t)=='-'){
            for(int i = 0; i < res_terms.at(0).size(); i++){
                result[i] -= res_terms.at(t+1).at(i);
            }
        }
    }
    for(QVector<double>::Iterator it = result.begin(); it != result.end(); it++){
        res->push_back(*it);
    }
}


//''' update program status, SLOTS connect to SIGNALS'''
void MainWindow::on_exit()
{

}

void MainWindow::update_save_status()
{
    save_needed=false;
}

void MainWindow::update_plot_status()
{
    save_needed=true;
}

void MainWindow::update_axis()
{
    config_dialog->set_axis(ui->customPlot->xAxis->range().lower,
                            ui->customPlot->xAxis->range().upper,
                            ui->customPlot->yAxis->range().lower,
                            ui->customPlot->yAxis->range().upper);
}










