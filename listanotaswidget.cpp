#include "listanotaswidget.h"
#include "ui_listanotaswidget.h"

ListaNotasWidget::ListaNotasWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ListaNotasWidget)
{
    ui->setupUi(this);
}

ListaNotasWidget::~ListaNotasWidget()
{
    delete ui;
}
