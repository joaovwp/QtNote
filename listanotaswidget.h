#ifndef LISTANOTASWIDGET_H
#define LISTANOTASWIDGET_H

#include <QWidget>

namespace Ui {
class ListaNotasWidget;
}

class ListaNotasWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ListaNotasWidget(QWidget *parent = nullptr);
    ~ListaNotasWidget();

private:
    Ui::ListaNotasWidget *ui;
};

#endif // LISTANOTASWIDGET_H
