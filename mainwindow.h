#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "gerenciadornotas.h"
#include "listanotawidget.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:

    void criarNota();
    void editarNotaAtiva();
    void removerNotaAtiva();
    void removerNotaFinalizada();
    void concluirNota();

    void selecionarNotaAtiva(Nota *nota);
    void selecionarNotaFinalizada(Nota *nota);

private:
    Ui::MainWindow *ui;
    GerenciadorNotas gerenciador;

    Nota *notaAtivaSelecionada = nullptr;
    Nota *notaFinalizadaSelecionada = nullptr;

    void atualizarInterface();
};

#endif // MAINWINDOW_H
