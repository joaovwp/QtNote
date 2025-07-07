#include "notawidget.h"
#include "ui_notawidget.h"

notaWidget::notaWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::notaWidget)
{
    ui->setupUi(this);
}

notaWidget::~notaWidget()
{
    delete ui;
}
