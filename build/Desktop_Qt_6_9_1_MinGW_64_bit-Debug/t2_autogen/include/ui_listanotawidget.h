/********************************************************************************
** Form generated from reading UI file 'listanotawidget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTANOTAWIDGET_H
#define UI_LISTANOTAWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ListaNotaWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QListWidget *listWidget;

    void setupUi(QWidget *ListaNotaWidget)
    {
        if (ListaNotaWidget->objectName().isEmpty())
            ListaNotaWidget->setObjectName("ListaNotaWidget");
        ListaNotaWidget->resize(95, 382);
        horizontalLayout = new QHBoxLayout(ListaNotaWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(1, 1, 1, 1);
        listWidget = new QListWidget(ListaNotaWidget);
        listWidget->setObjectName("listWidget");
        listWidget->setFrameShape(QFrame::Shape::NoFrame);

        horizontalLayout->addWidget(listWidget);


        retranslateUi(ListaNotaWidget);

        QMetaObject::connectSlotsByName(ListaNotaWidget);
    } // setupUi

    void retranslateUi(QWidget *ListaNotaWidget)
    {
        ListaNotaWidget->setWindowTitle(QCoreApplication::translate("ListaNotaWidget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ListaNotaWidget: public Ui_ListaNotaWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTANOTAWIDGET_H
