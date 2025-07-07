#ifndef NOTAWIDGET_H
#define NOTAWIDGET_H

#include <QWidget>

namespace Ui {
class notaWidget;
}

class notaWidget : public QWidget
{
    Q_OBJECT

public:
    explicit notaWidget(QWidget *parent = nullptr);
    ~notaWidget();

private:
    Ui::notaWidget *ui;
};

#endif // NOTAWIDGET_H
