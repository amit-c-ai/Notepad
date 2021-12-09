QT       += core gui  printsupport qml
QT += multimedia
QT += texttospeech
#INCLUDEPATH += "C:/Program Files (x86)/Windows Kits/10/Include/10.0.16299.0/ucrt"
#LIBS += -L"C:/Program Files (x86)/Windows Kits/10/Lib/10.0.16299.0/ucrt/x64"

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    form.cpp \
    main.cpp \
    mynotepad.cpp

HEADERS += \
    form.h \
    mynotepad.h

FORMS += \
    form.ui \
    mynotepad.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc

DISTFILES +=
