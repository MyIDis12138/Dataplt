#ifndef FUNC_TRANSLATOR_H
#define FUNC_TRANSLATOR_H

#include <QDialog>
#include <QtWidgets>
#include <QRegularExpression>
#include <QRegularExpressionMatch>
#include <QVector>

QT_BEGIN_NAMESPACE
class QPushButton;
class QComboBox;;
QT_END_NAMESPACE

class func_translator : public QDialog
{
    Q_OBJECT

public:
    explicit func_translator(QWidget *parent = nullptr, int index_range=0);

    QVector<QChar> *operators_pri;
    QVector<QChar> *operators_sub;
    QVector<QVector<int>*> *terms;
    QVector<QVector<bool>> *if_ln;

    bool accept = false;
    QString formula ="";

private slots:
    void on_ok_clicked();

private:
    int index_range;
    QRegularExpression *re;
    QLineEdit *input;
    QVector<int> *indexes;

    void tanslator();

};

#endif // FUNC_TRANSLATOR_H
