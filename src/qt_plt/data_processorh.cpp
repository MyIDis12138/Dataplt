#include "data_processorh"

data_processorh::data_processorh(QObject *parent)
    : QAbstractItemModel(parent)
{
}

int data_processorh::load(QString &path, QString &filename)
{
    int result = 0;
    QVector<double> *dataset = new QVector<double>;
    QFile file(path);
    file.open(QIODevice::ReadOnly);
    QTextStream input(&file);
    QString *line = new QString;
    QStringList *items =new QStringList;
    while(!input.atEnd()){
        line = new QString(input.readLine());
        items = new QStringList(line->split(','));
    }

    data->push_back(dataset);
    return result;
}
