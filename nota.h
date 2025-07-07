#ifndef NOTA_H
#define NOTA_H

#include <QString>

class Nota {
public:
    Nota(const QString &titulo, const QString &conteudo);

    QString getTitulo() const;
    QString getConteudo() const;

    void setTitulo(const QString &novoTitulo);
    void setConteudo(const QString &novoConteudo);

private:
    QString titulo;
    QString conteudo;
};

#endif // NOTA_H
