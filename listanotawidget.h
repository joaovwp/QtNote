#ifndef LISTANOTAWIDGET_H
#define LISTANOTAWIDGET_H

#include <QWidget>
#include <QListWidget>
#include "nota.h"

class ListaNotaWidget : public QWidget {
    Q_OBJECT
public:

    ListaNotaWidget(QWidget *parent = nullptr);

    void atualizarNotas(const QList<Nota*> &notas);

    Nota* notaSelecionada() const;

signals:
    void notaSelecionadaMudou(Nota *nota);

private slots:
    void aoSelecionarNota();

private:
    QListWidget *listWidget;
    QList<Nota*> notas;
};

#endif // LISTANOTAWIDGET_H
