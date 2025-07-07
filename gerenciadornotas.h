#ifndef GERENCIADORNOTAS_H
#define GERENCIADORNOTAS_H

#include "nota.h"
#include <QList>

class GerenciadorNotas {
public:
    QList<Nota*> getAtivas() const;
    QList<Nota*> getFinalizadas() const;

    void adicionarNota(const QString &titulo, const QString &conteudo);
    void removerNota(Nota *nota);
    void editarNota(Nota *nota, const QString &novoTitulo, const QString &novoConteudo);
    void finalizarNota(Nota *nota);

    bool carregar(const QString &caminhoArquivo);
    bool salvar(const QString &caminhoArquivo);

private:
    QList<Nota*> notasAtivas;
    QList<Nota*> notasFinalizadas;
};

#endif // GERENCIADORNOTAS_H
