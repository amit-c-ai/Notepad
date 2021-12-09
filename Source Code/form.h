#ifndef FORM_H
#define FORM_H

#include <QWidget>

namespace Ui {
class Form;
}

class Form : public QWidget
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = nullptr);
    ~Form();

private slots:
    void on_toolButton_2_toggled(bool checked);

    void on_toolButton_clicked(bool checked);

    void on_toolButton_3_clicked();

private:
    Ui::Form *ui;
};

#endif // FORM_H
