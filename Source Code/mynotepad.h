#ifndef MYNOTEPAD_H
#define MYNOTEPAD_H

#include <QMainWindow>

#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>
#include <QPrinter>
#include <QPrintDialog>
#include <QDebug>
#include <QClipboard>
#include <QFontDialog>
#include <QFont>
#include <QColorDialog>
#include <QColor>
#include <QSound>
#include <QTextToSpeech>
#include <QBrush>

QT_BEGIN_NAMESPACE
namespace Ui { class myNOTEPAD; }
QT_END_NAMESPACE

class myNOTEPAD : public QMainWindow
{
    Q_OBJECT

public:
    myNOTEPAD(QWidget *parent = nullptr);
    ~myNOTEPAD();


private slots:
    void on_actionnew_triggered();

    void on_actionopen_triggered();

    void on_actionsave_as_triggered();

    void on_actionprint_triggered();

    void on_actionexit_triggered();

    void on_actioncopy_triggered();

    void on_actionpaste_triggered();

    void on_actionundo_triggered();

    void on_actionredo_triggered();

    void on_actioncut_triggered();

    void on_actionzoom_in_triggered();

    void on_actionzoom_out_triggered();

    void on_horizontalSlider_valueChanged(int value);

    void on_toolButton_clicked(bool checked);

    void on_toolButton_2_toggled(bool checked);

    void on_actionFont_triggered();

    void on_actionColor_triggered();

    void updateText(int col, const QString &s);

    void on_tabWidget_tabCloseRequested(int index);

    void on_actionClose_Tab_triggered();

    void on_toolButton_3_clicked();

private:
    Ui::myNOTEPAD *ui;
    QString currentFile = "";
};
#endif // MYNOTEPAD_H
