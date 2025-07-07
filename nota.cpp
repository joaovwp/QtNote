#include "nota.h"

Nota::Nota(const QString &titulo, const QString &conteudo)
    : titulo(titulo), conteudo(conteudo) {}

QString Nota::getTitulo() const {
    return titulo;
}

QString Nota::getConteudo() const {
    return conteudo;
}

void Nota::setTitulo(const QString &novoTitulo) {
    titulo = novoTitulo;
}

void Nota::setConteudo(const QString &novoConteudo) {
    conteudo = novoConteudo;
}
