QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    config.cpp \
    delete_data_dailog.cpp \
    func_translator.cpp \
    initialize_filename.cpp \
    main.cpp \
    mainwindow.cpp \
    qcustomplot.cpp \
    settings.cpp

HEADERS += \
    config.h \
    delete_data_dailog.h \
    func_translator.h \
    initialize_filename.h \
    mainwindow.h \
    myenum.h \
    qcustomplot.h \
    settings.h

FORMS += \
    config.ui \
    initialize_filename.ui \
    mainwindow.ui \
    settings.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resource.qrc
