#include "form.h"
#include "ui_form.h"
#include "mynotepad.h"


Form::Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);
}

Form::~Form()
{
    delete ui;
}

void Form::on_toolButton_2_toggled(bool checked)
{
    QClipboard *clip = QApplication::clipboard();
    QString input;
    if(checked){
        input = ui->plainTextEdit->toPlainText();
        clip->setText(input);
    }
}

void Form::on_toolButton_clicked(bool checked)
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

void Form::on_toolButton_3_clicked()
{
    QString text = ui->plainTextEdit->toPlainText();
    QTextToSpeech *m_speech = new QTextToSpeech(this);
    m_speech->say(text);
}
