/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "listanotawidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab_criar;
    QVBoxLayout *verticalLayout_criar;
    QLabel *label;
    QLineEdit *lineEdit_titulo;
    QTextEdit *textEdit_criar;
    QPushButton *btn_criar;
    QWidget *tab_ativas;
    QVBoxLayout *verticalLayout_ativas;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_salvar;
    QPushButton *btn_remover;
    QPushButton *btn_editar;
    QSpacerItem *horizontalSpacer;
    QSplitter *splitter;
    ListaNotaWidget *notaWidget;
    QTextEdit *textEdit_ativas;
    QWidget *tab_finalizados;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btn_remover_finalizados;
    QPushButton *btn_editar_finalizados;
    QSpacerItem *horizontalSpacer_2;
    QSplitter *splitter_2;
    ListaNotaWidget *notaWidget_finalizados;
    QTextEdit *textEdit_finalizados;
    QWidget *tab_sobre;
    QHBoxLayout *horizontalLayout_3;
    QLabel *imagem;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(547, 408);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tab_criar = new QWidget();
        tab_criar->setObjectName("tab_criar");
        verticalLayout_criar = new QVBoxLayout(tab_criar);
        verticalLayout_criar->setObjectName("verticalLayout_criar");
        label = new QLabel(tab_criar);
        label->setObjectName("label");

        verticalLayout_criar->addWidget(label);

        lineEdit_titulo = new QLineEdit(tab_criar);
        lineEdit_titulo->setObjectName("lineEdit_titulo");

        verticalLayout_criar->addWidget(lineEdit_titulo);

        textEdit_criar = new QTextEdit(tab_criar);
        textEdit_criar->setObjectName("textEdit_criar");

        verticalLayout_criar->addWidget(textEdit_criar);

        btn_criar = new QPushButton(tab_criar);
        btn_criar->setObjectName("btn_criar");

        verticalLayout_criar->addWidget(btn_criar);

        tabWidget->addTab(tab_criar, QString());
        tab_ativas = new QWidget();
        tab_ativas->setObjectName("tab_ativas");
        verticalLayout_ativas = new QVBoxLayout(tab_ativas);
        verticalLayout_ativas->setSpacing(1);
        verticalLayout_ativas->setObjectName("verticalLayout_ativas");
        verticalLayout_ativas->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        btn_salvar = new QPushButton(tab_ativas);
        btn_salvar->setObjectName("btn_salvar");
        btn_salvar->setFlat(true);

        horizontalLayout->addWidget(btn_salvar);

        btn_remover = new QPushButton(tab_ativas);
        btn_remover->setObjectName("btn_remover");
        btn_remover->setFlat(true);

        horizontalLayout->addWidget(btn_remover);

        btn_editar = new QPushButton(tab_ativas);
        btn_editar->setObjectName("btn_editar");
        btn_editar->setFlat(true);

        horizontalLayout->addWidget(btn_editar);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_ativas->addLayout(horizontalLayout);

        splitter = new QSplitter(tab_ativas);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Orientation::Horizontal);
        splitter->setChildrenCollapsible(false);
        notaWidget = new ListaNotaWidget(splitter);
        notaWidget->setObjectName("notaWidget");
        notaWidget->setMinimumSize(QSize(100, 0));
        splitter->addWidget(notaWidget);
        textEdit_ativas = new QTextEdit(splitter);
        textEdit_ativas->setObjectName("textEdit_ativas");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textEdit_ativas->sizePolicy().hasHeightForWidth());
        textEdit_ativas->setSizePolicy(sizePolicy);
        textEdit_ativas->setMinimumSize(QSize(310, 0));
        textEdit_ativas->setFrameShape(QFrame::Shape::NoFrame);
        textEdit_ativas->setReadOnly(false);
        splitter->addWidget(textEdit_ativas);

        verticalLayout_ativas->addWidget(splitter);

        verticalLayout_ativas->setStretch(1, 1);
        tabWidget->addTab(tab_ativas, QString());
        tab_finalizados = new QWidget();
        tab_finalizados->setObjectName("tab_finalizados");
        verticalLayout_2 = new QVBoxLayout(tab_finalizados);
        verticalLayout_2->setSpacing(1);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        btn_remover_finalizados = new QPushButton(tab_finalizados);
        btn_remover_finalizados->setObjectName("btn_remover_finalizados");
        btn_remover_finalizados->setFlat(true);

        horizontalLayout_2->addWidget(btn_remover_finalizados);

        btn_editar_finalizados = new QPushButton(tab_finalizados);
        btn_editar_finalizados->setObjectName("btn_editar_finalizados");
        btn_editar_finalizados->setEnabled(false);
        btn_editar_finalizados->setFlat(true);

        horizontalLayout_2->addWidget(btn_editar_finalizados);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_2);

        splitter_2 = new QSplitter(tab_finalizados);
        splitter_2->setObjectName("splitter_2");
        splitter_2->setOrientation(Qt::Orientation::Horizontal);
        splitter_2->setChildrenCollapsible(false);
        notaWidget_finalizados = new ListaNotaWidget(splitter_2);
        notaWidget_finalizados->setObjectName("notaWidget_finalizados");
        notaWidget_finalizados->setMinimumSize(QSize(100, 0));
        splitter_2->addWidget(notaWidget_finalizados);
        textEdit_finalizados = new QTextEdit(splitter_2);
        textEdit_finalizados->setObjectName("textEdit_finalizados");
        textEdit_finalizados->setMinimumSize(QSize(310, 0));
        textEdit_finalizados->setFrameShape(QFrame::Shape::NoFrame);
        splitter_2->addWidget(textEdit_finalizados);

        verticalLayout_2->addWidget(splitter_2);

        verticalLayout_2->setStretch(1, 1);
        tabWidget->addTab(tab_finalizados, QString());
        tab_sobre = new QWidget();
        tab_sobre->setObjectName("tab_sobre");
        horizontalLayout_3 = new QHBoxLayout(tab_sobre);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        imagem = new QLabel(tab_sobre);
        imagem->setObjectName("imagem");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(imagem->sizePolicy().hasHeightForWidth());
        imagem->setSizePolicy(sizePolicy1);
        imagem->setMinimumSize(QSize(120, 120));
        imagem->setScaledContents(true);

        horizontalLayout_3->addWidget(imagem);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_2 = new QLabel(tab_sobre);
        label_2->setObjectName("label_2");

        verticalLayout_3->addWidget(label_2);


        horizontalLayout_3->addLayout(verticalLayout_3);

        tabWidget->addTab(tab_sobre, QString());

        verticalLayout->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 547, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "T\303\255tulo:", nullptr));
        btn_criar->setText(QCoreApplication::translate("MainWindow", "Criar", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_criar), QCoreApplication::translate("MainWindow", "Criar", nullptr));
        btn_salvar->setText(QCoreApplication::translate("MainWindow", "\342\234\205", nullptr));
        btn_remover->setText(QCoreApplication::translate("MainWindow", "\360\237\227\221\357\270\217", nullptr));
        btn_editar->setText(QCoreApplication::translate("MainWindow", "\342\232\231\357\270\217", nullptr));
        textEdit_ativas->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_ativas), QCoreApplication::translate("MainWindow", "Ativas", nullptr));
        btn_remover_finalizados->setText(QCoreApplication::translate("MainWindow", "\360\237\227\221\357\270\217", nullptr));
        btn_editar_finalizados->setText(QCoreApplication::translate("MainWindow", "\342\232\231\357\270\217", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_finalizados), QCoreApplication::translate("MainWindow", "Finalizados", nullptr));
        imagem->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "Jo\303\243o Vitor Wagner Pereira\n"
"24105339", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_sobre), QCoreApplication::translate("MainWindow", "Sobre", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
