#ifndef NOTA_H
#define NOTA_H

#include <QString>

class Nota {
public:
    Nota(const QString &titulo, const QString &conteudo)
        : titulo(titulo), conteudo(conteudo) {}

    QString getTitulo() const { return titulo; }
    QString getConteudo() const { return conteudo; }

    void setTitulo(const QString &novoTitulo) { titulo = novoTitulo; }
    void setConteudo(const QString &novoConteudo) { conteudo = novoConteudo; }

private:
    QString titulo;
    QString conteudo;
};

#endif // NOTA_H
