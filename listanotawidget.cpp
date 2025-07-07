#include "listanotawidget.h"
#include <QVBoxLayout>

ListaNotaWidget::ListaNotaWidget(QWidget *parent) : QWidget(parent) {
    auto *layout = new QVBoxLayout(this);
    listWidget = new QListWidget(this);
    layout->addWidget(listWidget);
    layout->setContentsMargins(0, 0, 0, 0);
    connect(listWidget, &QListWidget::currentRowChanged, this, &ListaNotaWidget::aoSelecionarNota);
}

void ListaNotaWidget::atualizarNotas(const QList<Nota*> &novasNotas) {
    listWidget->clear();
    notas = novasNotas;

    for (int i = 0; i < notas.size(); ++i) {
        Nota *nota = notas[i];

        QListWidgetItem *item = new QListWidgetItem();
        item->setText(nota->getTitulo());
        item->setSizeHint(QSize(0, 50));

        listWidget->addItem(item);
    }
}

void ListaNotaWidget::aoSelecionarNota() {
    int i = listWidget->currentRow();

    if (i >= 0 && i < notas.size()) {
        emit notaSelecionadaMudou(notas[i]);
    } else {
        emit notaSelecionadaMudou(nullptr);
    }
}

Nota* ListaNotaWidget::notaSelecionada() const {
    int i = listWidget->currentRow();
    if (i >= 0 && i < notas.size()) {
        return notas[i];
    }
    return nullptr;
}
