#ifndef MYENUM_H
#define MYENUM_H

enum dtype{
    csv_xy,
    csv_ny,
    txt_xy,
    txt_ny
};

enum spliter{
    comma,
    slash,
    space,
    tab
};

enum func{
    origin = 0,
    add = 1,
    product = 2,
    logrithm = 3,
    custom = 4
};


#endif // MYENUM_H
