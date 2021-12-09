#include "mynotepad.h"
#include "ui_mynotepad.h"
#include "form.h"

myNOTEPAD::myNOTEPAD(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::myNOTEPAD)
{
    ui->setupUi(this);
    ui->tabWidget->removeTab(1);
}

myNOTEPAD::~myNOTEPAD()
{
    QMessageBox::StandardButton save = QMessageBox::question(this, "Alert", "Do you want to save file",
                          QMessageBox::Yes|QMessageBox::No, QMessageBox::No);

    if(save==QMessageBox::Yes){
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
    delete ui;
}

#include<QObject>
void myNOTEPAD::on_actionnew_triggered()
{
    Form *myedit = new Form();
    ui->tabWidget->addTab(myedit, QString("Untitled %0").arg(ui->tabWidget->count() + 1));
    ui->tabWidget->setCurrentIndex(ui->tabWidget->count() -1);
    myedit->setObjectName("textEdit_" + QString::number(ui->tabWidget->count() + 1));
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
    QList<QPlainTextEdit*> list =  ui->tabWidget->findChildren<QPlainTextEdit*>();
    list[ui->tabWidget->currentIndex()]->setPlainText(text);
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
    QList<QPlainTextEdit*> list =  ui->tabWidget->findChildren<QPlainTextEdit*>();
    QString text = list[ui->tabWidget->currentIndex()]->toPlainText();
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
    QClipboard *clip = QApplication::clipboard();
    QString input = ui->plainTextEdit->toPlainText();
    clip->setText(input);

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

void myNOTEPAD::on_toolButton_2_toggled(bool checked)
{
    QClipboard *clip = QApplication::clipboard();
    QString input;
    if(checked){
        input = ui->plainTextEdit->toPlainText();
        clip->setText(input);
    }
}

void myNOTEPAD::on_actionFont_triggered()
{
    bool selected;
    QFont font = QFontDialog::getFont(&selected, this);
    if (selected){
        ui->plainTextEdit->setFont(font);
        ui->plainTextEdit->setPlainText(ui->plainTextEdit->toPlainText());
    }
    else{
        return;
    }
}

void myNOTEPAD::on_actionColor_triggered(){
    const QColor color = QColorDialog::getColor(Qt::white,this,"Choose color");
    if(color.isValid()) {
        QBrush br; br.setColor(color);
        QTextCharFormat tf;
        tf = ui->plainTextEdit->currentCharFormat();
        tf.setBackground(br);
        qDebug()<<"color set";
    }
}

void myNOTEPAD::updateText(int col, const QString &s)
{
    QTextCharFormat tf;
    tf = ui->plainTextEdit->currentCharFormat();
    tf.setTextOutline(QPen(col));
    ui->plainTextEdit->setCurrentCharFormat(tf);
    ui->plainTextEdit->appendPlainText(s);
}

void myNOTEPAD::on_tabWidget_tabCloseRequested(int index)
{
    ui->tabWidget->removeTab(index);
}


void myNOTEPAD::on_actionClose_Tab_triggered()
{
    on_tabWidget_tabCloseRequested(ui->tabWidget->currentIndex());
}

void myNOTEPAD::on_toolButton_3_clicked()
{
    QString text = ui->plainTextEdit->toPlainText();
    QTextToSpeech *m_speech = new QTextToSpeech(this);
    m_speech->say(text);
}
