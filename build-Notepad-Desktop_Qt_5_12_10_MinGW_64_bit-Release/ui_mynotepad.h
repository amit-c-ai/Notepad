/********************************************************************************
** Form generated from reading UI file 'mynotepad.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYNOTEPAD_H
#define UI_MYNOTEPAD_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_myNOTEPAD
{
public:
    QAction *actionnew;
    QAction *actionopen;
    QAction *actionsave_as;
    QAction *actionprint;
    QAction *actionexit;
    QAction *actioncopy;
    QAction *actionpaste;
    QAction *actionundo;
    QAction *actionredo;
    QAction *actioncut;
    QAction *actionzoom_in;
    QAction *actionzoom_out;
    QAction *actiondefault_zoom;
    QAction *actionFont;
    QAction *actionColor;
    QAction *actionClose_Tab;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QPlainTextEdit *plainTextEdit;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *toolButton;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QToolButton *toolButton_2;
    QToolButton *toolButton_3;
    QWidget *tab_2;
    QSlider *horizontalSlider;
    QMenuBar *menubar;
    QMenu *menufile;
    QMenu *menuedit;
    QMenu *menuview;
    QMenu *menuFormat;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *myNOTEPAD)
    {
        if (myNOTEPAD->objectName().isEmpty())
            myNOTEPAD->setObjectName(QString::fromUtf8("myNOTEPAD"));
        myNOTEPAD->resize(1109, 676);
        myNOTEPAD->setFocusPolicy(Qt::StrongFocus);
        actionnew = new QAction(myNOTEPAD);
        actionnew->setObjectName(QString::fromUtf8("actionnew"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/Icons/New.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionnew->setIcon(icon);
        actionopen = new QAction(myNOTEPAD);
        actionopen->setObjectName(QString::fromUtf8("actionopen"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/Icons/Open.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionopen->setIcon(icon1);
        actionsave_as = new QAction(myNOTEPAD);
        actionsave_as->setObjectName(QString::fromUtf8("actionsave_as"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/Icons/Save.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionsave_as->setIcon(icon2);
        actionprint = new QAction(myNOTEPAD);
        actionprint->setObjectName(QString::fromUtf8("actionprint"));
        actionexit = new QAction(myNOTEPAD);
        actionexit->setObjectName(QString::fromUtf8("actionexit"));
        actioncopy = new QAction(myNOTEPAD);
        actioncopy->setObjectName(QString::fromUtf8("actioncopy"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/Icons/Copy.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actioncopy->setIcon(icon3);
        actionpaste = new QAction(myNOTEPAD);
        actionpaste->setObjectName(QString::fromUtf8("actionpaste"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/Icons/Paste.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionpaste->setIcon(icon4);
        actionundo = new QAction(myNOTEPAD);
        actionundo->setObjectName(QString::fromUtf8("actionundo"));
        actionredo = new QAction(myNOTEPAD);
        actionredo->setObjectName(QString::fromUtf8("actionredo"));
        actioncut = new QAction(myNOTEPAD);
        actioncut->setObjectName(QString::fromUtf8("actioncut"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/Icons/Cut.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        icon5.addFile(QString::fromUtf8(":/images/Icons/Cut.bmp"), QSize(), QIcon::Normal, QIcon::On);
        actioncut->setIcon(icon5);
        actionzoom_in = new QAction(myNOTEPAD);
        actionzoom_in->setObjectName(QString::fromUtf8("actionzoom_in"));
        actionzoom_out = new QAction(myNOTEPAD);
        actionzoom_out->setObjectName(QString::fromUtf8("actionzoom_out"));
        actiondefault_zoom = new QAction(myNOTEPAD);
        actiondefault_zoom->setObjectName(QString::fromUtf8("actiondefault_zoom"));
        actionFont = new QAction(myNOTEPAD);
        actionFont->setObjectName(QString::fromUtf8("actionFont"));
        actionColor = new QAction(myNOTEPAD);
        actionColor->setObjectName(QString::fromUtf8("actionColor"));
        actionClose_Tab = new QAction(myNOTEPAD);
        actionClose_Tab->setObjectName(QString::fromUtf8("actionClose_Tab"));
        centralwidget = new QWidget(myNOTEPAD);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));

        gridLayout->addLayout(verticalLayout_2, 2, 0, 1, 1);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setLayoutDirection(Qt::LeftToRight);
        tabWidget->setAutoFillBackground(false);
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Triangular);
        tabWidget->setElideMode(Qt::ElideLeft);
        tabWidget->setTabsClosable(true);
        tabWidget->setMovable(true);
        tabWidget->setTabBarAutoHide(true);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        plainTextEdit = new QPlainTextEdit(tab);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(plainTextEdit->sizePolicy().hasHeightForWidth());
        plainTextEdit->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(plainTextEdit, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        toolButton = new QToolButton(tab);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(toolButton->sizePolicy().hasHeightForWidth());
        toolButton->setSizePolicy(sizePolicy1);
        toolButton->setMouseTracking(false);
        QIcon icon6;
        QString iconThemeName = QString::fromUtf8("dark");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon6 = QIcon::fromTheme(iconThemeName);
        } else {
            icon6.addFile(QString::fromUtf8(":/images/Icons/dark-mode.png"), QSize(), QIcon::Normal, QIcon::Off);
            icon6.addFile(QString::fromUtf8(":/images/Icons/bright-mode.png"), QSize(), QIcon::Normal, QIcon::On);
        }
        toolButton->setIcon(icon6);
        toolButton->setIconSize(QSize(40, 40));
        toolButton->setCheckable(true);
        toolButton->setAutoRaise(true);

        horizontalLayout_2->addWidget(toolButton);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_3->addItem(horizontalSpacer);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_3->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout_3);

        toolButton_2 = new QToolButton(tab);
        toolButton_2->setObjectName(QString::fromUtf8("toolButton_2"));
        toolButton_2->setAutoFillBackground(false);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/Icons/cpy.jpg"), QSize(), QIcon::Selected, QIcon::Off);
        icon7.addFile(QString::fromUtf8(":/images/Icons/cpyied.png"), QSize(), QIcon::Selected, QIcon::On);
        toolButton_2->setIcon(icon7);
        toolButton_2->setIconSize(QSize(40, 40));
        toolButton_2->setCheckable(true);
        toolButton_2->setChecked(false);
        toolButton_2->setAutoRepeat(true);
        toolButton_2->setAutoExclusive(false);
        toolButton_2->setAutoRepeatDelay(3);
        toolButton_2->setAutoRepeatInterval(300);
        toolButton_2->setPopupMode(QToolButton::DelayedPopup);
        toolButton_2->setAutoRaise(true);

        horizontalLayout_2->addWidget(toolButton_2);

        toolButton_3 = new QToolButton(tab);
        toolButton_3->setObjectName(QString::fromUtf8("toolButton_3"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/Icons/Speaker.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_3->setIcon(icon8);
        toolButton_3->setIconSize(QSize(40, 40));

        horizontalLayout_2->addWidget(toolButton_3);


        gridLayout_2->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tab_2->setLayoutDirection(Qt::LeftToRight);
        tabWidget->addTab(tab_2, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        horizontalSlider = new QSlider(centralwidget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(horizontalSlider->sizePolicy().hasHeightForWidth());
        horizontalSlider->setSizePolicy(sizePolicy2);
        horizontalSlider->setMinimumSize(QSize(300, 22));
        horizontalSlider->setMinimum(0);
        horizontalSlider->setMaximum(70);
        horizontalSlider->setValue(0);
        horizontalSlider->setSliderPosition(0);
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider->setInvertedControls(false);

        gridLayout->addWidget(horizontalSlider, 1, 0, 1, 1);

        myNOTEPAD->setCentralWidget(centralwidget);
        menubar = new QMenuBar(myNOTEPAD);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1109, 26));
        menufile = new QMenu(menubar);
        menufile->setObjectName(QString::fromUtf8("menufile"));
        menuedit = new QMenu(menubar);
        menuedit->setObjectName(QString::fromUtf8("menuedit"));
        menuview = new QMenu(menubar);
        menuview->setObjectName(QString::fromUtf8("menuview"));
        menuFormat = new QMenu(menubar);
        menuFormat->setObjectName(QString::fromUtf8("menuFormat"));
        myNOTEPAD->setMenuBar(menubar);
        statusbar = new QStatusBar(myNOTEPAD);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        myNOTEPAD->setStatusBar(statusbar);

        menubar->addAction(menufile->menuAction());
        menubar->addAction(menuedit->menuAction());
        menubar->addAction(menuview->menuAction());
        menubar->addAction(menuFormat->menuAction());
        menufile->addSeparator();
        menufile->addAction(actionnew);
        menufile->addAction(actionopen);
        menufile->addAction(actionClose_Tab);
        menufile->addAction(actionsave_as);
        menufile->addAction(actionprint);
        menufile->addAction(actionexit);
        menuedit->addAction(actioncopy);
        menuedit->addAction(actionpaste);
        menuedit->addAction(actioncut);
        menuedit->addAction(actionundo);
        menuedit->addAction(actionredo);
        menuview->addAction(actionzoom_in);
        menuview->addAction(actionzoom_out);
        menuview->addSeparator();
        menuFormat->addAction(actionFont);
        menuFormat->addAction(actionColor);
        menuFormat->addSeparator();

        retranslateUi(myNOTEPAD);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(myNOTEPAD);
    } // setupUi

    void retranslateUi(QMainWindow *myNOTEPAD)
    {
        myNOTEPAD->setWindowTitle(QApplication::translate("myNOTEPAD", "myNOTEPAD", nullptr));
        actionnew->setText(QApplication::translate("myNOTEPAD", "Newn", nullptr));
#ifndef QT_NO_SHORTCUT
        actionnew->setShortcut(QApplication::translate("myNOTEPAD", "Ctrl+N", nullptr));
#endif // QT_NO_SHORTCUT
        actionopen->setText(QApplication::translate("myNOTEPAD", "Open", nullptr));
#ifndef QT_NO_SHORTCUT
        actionopen->setShortcut(QApplication::translate("myNOTEPAD", "Ctrl+O", nullptr));
#endif // QT_NO_SHORTCUT
        actionsave_as->setText(QApplication::translate("myNOTEPAD", "Save As...", nullptr));
#ifndef QT_NO_SHORTCUT
        actionsave_as->setShortcut(QApplication::translate("myNOTEPAD", "Ctrl+S", nullptr));
#endif // QT_NO_SHORTCUT
        actionprint->setText(QApplication::translate("myNOTEPAD", "Print...", nullptr));
#ifndef QT_NO_SHORTCUT
        actionprint->setShortcut(QApplication::translate("myNOTEPAD", "Ctrl+P", nullptr));
#endif // QT_NO_SHORTCUT
        actionexit->setText(QApplication::translate("myNOTEPAD", "Exit", nullptr));
        actioncopy->setText(QApplication::translate("myNOTEPAD", "Copy", nullptr));
#ifndef QT_NO_SHORTCUT
        actioncopy->setShortcut(QApplication::translate("myNOTEPAD", "Ctrl+C", nullptr));
#endif // QT_NO_SHORTCUT
        actionpaste->setText(QApplication::translate("myNOTEPAD", "Paste", nullptr));
#ifndef QT_NO_SHORTCUT
        actionpaste->setShortcut(QApplication::translate("myNOTEPAD", "Ctrl+V", nullptr));
#endif // QT_NO_SHORTCUT
        actionundo->setText(QApplication::translate("myNOTEPAD", "Undo", nullptr));
#ifndef QT_NO_SHORTCUT
        actionundo->setShortcut(QApplication::translate("myNOTEPAD", "Ctrl+Z", nullptr));
#endif // QT_NO_SHORTCUT
        actionredo->setText(QApplication::translate("myNOTEPAD", "Redo", nullptr));
#ifndef QT_NO_SHORTCUT
        actionredo->setShortcut(QApplication::translate("myNOTEPAD", "Ctrl+Y", nullptr));
#endif // QT_NO_SHORTCUT
        actioncut->setText(QApplication::translate("myNOTEPAD", "Cut", nullptr));
#ifndef QT_NO_SHORTCUT
        actioncut->setShortcut(QApplication::translate("myNOTEPAD", "Ctrl+X", nullptr));
#endif // QT_NO_SHORTCUT
        actionzoom_in->setText(QApplication::translate("myNOTEPAD", "Zoom In", nullptr));
#ifndef QT_NO_SHORTCUT
        actionzoom_in->setShortcut(QApplication::translate("myNOTEPAD", "Ctrl+=", nullptr));
#endif // QT_NO_SHORTCUT
        actionzoom_out->setText(QApplication::translate("myNOTEPAD", "Zoom Out", nullptr));
#ifndef QT_NO_SHORTCUT
        actionzoom_out->setShortcut(QApplication::translate("myNOTEPAD", "Ctrl+-", nullptr));
#endif // QT_NO_SHORTCUT
        actiondefault_zoom->setText(QApplication::translate("myNOTEPAD", "default zoom", nullptr));
#ifndef QT_NO_SHORTCUT
        actiondefault_zoom->setShortcut(QApplication::translate("myNOTEPAD", "Ctrl+D", nullptr));
#endif // QT_NO_SHORTCUT
        actionFont->setText(QApplication::translate("myNOTEPAD", "Font", nullptr));
        actionColor->setText(QApplication::translate("myNOTEPAD", "Color", nullptr));
        actionClose_Tab->setText(QApplication::translate("myNOTEPAD", "Close Tab", nullptr));
#ifndef QT_NO_SHORTCUT
        actionClose_Tab->setShortcut(QApplication::translate("myNOTEPAD", "Ctrl+W", nullptr));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_WHATSTHIS
        plainTextEdit->setWhatsThis(QApplication::translate("myNOTEPAD", "Text Edit", nullptr));
#endif // QT_NO_WHATSTHIS
        plainTextEdit->setPlainText(QString());
        toolButton->setText(QString());
        toolButton_2->setText(QApplication::translate("myNOTEPAD", "...", nullptr));
        toolButton_3->setText(QApplication::translate("myNOTEPAD", "...", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("myNOTEPAD", "Untitled1", nullptr));
        tabWidget->setTabToolTip(tabWidget->indexOf(tab), QApplication::translate("myNOTEPAD", "Current Tab", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("myNOTEPAD", "Tab 2", nullptr));
        menufile->setTitle(QApplication::translate("myNOTEPAD", "File", nullptr));
        menuedit->setTitle(QApplication::translate("myNOTEPAD", "Edit", nullptr));
        menuview->setTitle(QApplication::translate("myNOTEPAD", "View", nullptr));
        menuFormat->setTitle(QApplication::translate("myNOTEPAD", "Format", nullptr));
    } // retranslateUi

};

namespace Ui {
    class myNOTEPAD: public Ui_myNOTEPAD {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYNOTEPAD_H
