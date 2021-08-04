#include "mynotepad.h"
#include "ui_mynotepad.h"

myNOTEPAD::myNOTEPAD(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::myNOTEPAD)
{
    ui->setupUi(this);
//    this->setCentralWidget(ui->plainTextEdit);
}

myNOTEPAD::~myNOTEPAD()
{
    delete ui;
}

#include<QObject>
void myNOTEPAD::on_actionnew_triggered()
{
    currentFile.clear();
    ui->plainTextEdit->setPlainText(QString());
//    QPlainTextEdit *myedit=new QPlainTextEdit;
//    ui->tabWidget->addTab(myedit,"My new Tab ");
//    connect(myedit,SIGNAL(textChanged()),this,SLOT(on_actionsave_as_triggered()));
}

void myNOTEPAD::on_actionopen_triggered()
{
    QString filename = QFileDialog::getOpenFileName(this, "open file");
    QFile file(filename);
    currentFile = filename;
    if(!file.open(QIODevice::ReadOnly | QFile::Text)){
        QMessageBox::warning(this, "Warning", "Can't open this file: " + file.errorString());
        return;
    }
    setWindowTitle(filename);
    QTextStream in(&file);
    QString text = in.readAll();
    ui->plainTextEdit->setPlainText(text);
    file.close();
}

void myNOTEPAD::on_actionsave_as_triggered()
{
    QString fileName = QFileDialog::getSaveFileName(this, "save as");
    QFile file(fileName);
    currentFile = fileName;
    if(!file.open(QFile::WriteOnly | QFile::Text)){
        QMessageBox::warning(this, "Warning", "Can't open file: " + file.errorString());
        return;
    }
    setWindowTitle(fileName);
    QTextStream out(&file);
    QString text = ui->plainTextEdit->toPlainText();
    out<<text;
    file.close();
}

void myNOTEPAD::on_actionprint_triggered()
{
    QPrinter printer;
    printer.setPrinterName("printo");
    QPrintDialog pDialog(&printer, this);
    if(pDialog.exec() == QPrintDialog::Rejected){
        QMessageBox::warning(this, "Warning", "Can't execute printer");
        return;
    }
    ui->plainTextEdit->print(&printer);
}

void myNOTEPAD::on_actionexit_triggered()
{
    QApplication::quit();
}

void myNOTEPAD::on_actioncopy_triggered()
{
    ui->plainTextEdit->copy();
}

void myNOTEPAD::on_actionpaste_triggered()
{
    ui->plainTextEdit->paste();
}

void myNOTEPAD::on_actionundo_triggered()
{
    ui->plainTextEdit->undo();
}

void myNOTEPAD::on_actionredo_triggered()
{
    ui->plainTextEdit->redo();
}

void myNOTEPAD::on_actioncut_triggered()
{
    ui->plainTextEdit->cut();
}

void myNOTEPAD::on_actionzoom_in_triggered()
{
    ui->plainTextEdit->zoomIn() ;
}

void myNOTEPAD::on_actionzoom_out_triggered()
{
    ui->plainTextEdit->zoomOut();
}


void myNOTEPAD::on_horizontalSlider_valueChanged(int value)
{
    setWindowOpacity(1 - (value/100.0));
}

void myNOTEPAD::on_toolButton_clicked(bool checked)
{
    if(checked){
        QFile f(":/QDarkStyleSheet/qdarkstyle/dark/style.qss");

        if (!f.exists())   {
            qDebug()<<"Unable to set stylesheet, file not found\n";
        }
        else   {
            f.open(QFile::ReadOnly | QFile::Text);
            QTextStream ts(&f);
            qApp->setStyleSheet(ts.readAll());
        }
    }
    else{
        qApp->setStyleSheet("");
    }
}
