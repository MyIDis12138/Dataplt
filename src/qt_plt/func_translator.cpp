#include "func_translator.h"
#include "qpushbutton.h"

func_translator::func_translator(QWidget *parent, int index_range)
    : QDialog(parent),
    input(new QLineEdit)
{
    this->index_range = index_range;
    operators_pri =  new QVector<QChar>;
    operators_sub =  new QVector<QChar>;
    terms = new QVector<QVector<int>*>;
    if_ln = new  QVector<QVector<bool>>;

    this->setFixedSize(QSize(250,100));
    re = new QRegularExpression("^(ln)?\\d+([\\+\\-\\*\\/](ln)?\\d+)*$");

    auto okButton = new QPushButton(tr("OK"));
    auto cancelButton = new QPushButton(tr("Cancel"));

    auto buttonLayout = new QHBoxLayout;
    buttonLayout->addWidget(okButton,Qt::AlignLeft);
    buttonLayout->addWidget(cancelButton,Qt::AlignRight);

    auto mainLayout = new QVBoxLayout;
    mainLayout->addWidget(input);
    mainLayout->addLayout(buttonLayout,Qt::AlignCenter);

    connect(okButton, &QAbstractButton::clicked, this, &QDialog::accept);
    connect(cancelButton, &QAbstractButton::clicked, this, &QDialog::reject);
    connect(okButton, &QAbstractButton::clicked, this, &func_translator::on_ok_clicked);
    setLayout(mainLayout);
    setWindowTitle(tr("Write a function"));
}


void func_translator::on_ok_clicked(){
    QRegularExpressionMatch match = re->match(input->text());
    accept = true;
    if(match.hasMatch())
        tanslator();
    else
        accept = false;
}

void func_translator::tanslator()
{
    QString index = "";
    int index_num=-1;
    bool ln_flag=false;
    indexes = new QVector<int>;
    QVector<bool> ln_idx;
    formula = input->text();
    for (QString::Iterator it = formula.begin(); it != formula.end(); ++it) {
        //qDebug()<<*it;
        if(it->isDigit())
            index.append(*it);
        if(it->isLetter())
            ln_flag = true;
        if(*it=='+'||*it=='-'){
            index_num = index.toInt();
            if(index_num>index_range){
                accept = false;
                return;
            }
            else{                
                ln_idx.push_back(ln_flag);
                if_ln->push_back(ln_idx);
                indexes->push_back(index_num);
                operators_sub->push_back(*it);
                terms->push_back(indexes);
                index ="";
                ln_flag = false;
                ln_idx.clear();
                indexes = new QVector<int>;
            }
        }
        if(*it=='*'||*it=='/'){
             index_num = index.toInt();
            if(index_num>index_range){
                accept = false;
                return;
            }
            else{
                ln_idx.push_back(ln_flag);
                indexes->push_back(index_num);
                operators_pri->push_back(*it);
            }
            ln_flag = false;
            index ="";
        }
    }

    index_num = index.toInt();
    if(index_num>index_range){
        accept = false;
        return;
    }
    else{    
        ln_idx.push_back(ln_flag);
        if_ln->push_back(ln_idx);
        indexes->push_back(index_num);
        terms->push_back(indexes);
    }
}
