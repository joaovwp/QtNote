#include "gerenciadornotas.h"

#include <QFile>
#include <QTextStream>


void GerenciadorNotas::adicionarNota(const QString &titulo, const QString &conteudo) {
    Nota *nova = new Nota(titulo, conteudo);
    notasAtivas.append(nova);
}

void GerenciadorNotas::removerNota(Nota *nota) {
    if (!nota) {
        return;
    }

    notasAtivas.removeAll(nota);
    notasFinalizadas.removeAll(nota);
    delete nota;
}

void GerenciadorNotas::editarNota(Nota *nota, const QString &novoTitulo, const QString &novoConteudo) {
    if (nota) {
        nota->setTitulo(novoTitulo);
        nota->setConteudo(novoConteudo);
    }
}

void GerenciadorNotas::finalizarNota(Nota *nota) {
    if (!nota) {
        return;
    }
    notasAtivas.removeAll(nota);
    notasFinalizadas.append(nota);
}

QList<Nota*> GerenciadorNotas::getAtivas() const {
    return notasAtivas;
}

QList<Nota*> GerenciadorNotas::getFinalizadas() const {
    return notasFinalizadas;
}






bool GerenciadorNotas::salvar(const QString &caminho) {
    QFile f(caminho);

    if (!f.open(QIODevice::WriteOnly | QIODevice::Text)) {
        return false;
    }

    QTextStream out(&f);

    out << "Ativas\n";
    for (int i = 0; i < notasAtivas.size(); ++i) {
        QString conteudo = notasAtivas[i]->getConteudo();
        conteudo.replace("\n", "\\n");
        out << notasAtivas[i]->getTitulo() << "\n";
        out << conteudo << "\n";
    }

    out << "Finalizadas\n";
    for (int i = 0; i < notasFinalizadas.size(); ++i) {
        QString conteudo = notasFinalizadas[i]->getConteudo();
        conteudo.replace("\n", "\\n");
        out << notasFinalizadas[i]->getTitulo() << "\n";
        out << conteudo << "\n";
    }

    f.close();
    return true;
}

bool GerenciadorNotas::carregar(const QString &caminho) {
    QFile f(caminho);

    if (!f.open(QIODevice::ReadOnly | QIODevice::Text)) {
        return false;
    }

    qDeleteAll(notasAtivas);
    qDeleteAll(notasFinalizadas);
    notasAtivas.clear();
    notasFinalizadas.clear();

    QTextStream in(&f);
    QString linha = in.readLine();
    QList<Nota*> *listaAtual = nullptr;

    while (!linha.isNull()) {
        if (linha == "Ativas") {
            listaAtual = &notasAtivas;
        }
        else if (linha == "Finalizadas") {
            listaAtual = &notasFinalizadas;
        }
        else if (listaAtual) {
            QString titulo = linha;
            QString conteudo = in.readLine();

            if (conteudo.isNull()) {
                break;
            }

            conteudo.replace("\\n", "\n");
            listaAtual->append(new Nota(titulo, conteudo));
        }

        linha = in.readLine();
    }

    f.close();
    return true;
}
