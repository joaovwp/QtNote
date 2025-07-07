#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QInputDialog>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    qApp->setStyleSheet(R"(
    QWidget {
        font-family: "Segoe UI", sans-serif;
        font-size: 14px;
    }

    QPushButton {
        border: 1px solid #bbb;
        border-radius: 5px;
        padding: 6px 12px;
    }

    QPushButton:hover {
        border-color: #888;
    }

    QPushButton:pressed {
        border-color: #555;
    }

    QListWidget {
        border: 1px solid #ccc;
    }

    QLineEdit, QTextEdit {
        border: 1px solid #ccc;
        border-radius: 4px;
        padding: 4px;
    }

    QLabel {
        font-weight: bold;
    }
    )");


    gerenciador.carregar("notas.txt");

    connect(ui->btn_criar, &QPushButton::clicked, this, &MainWindow::criarNota);
    connect(ui->btn_editar, &QPushButton::clicked, this, &MainWindow::editarNotaAtiva);
    connect(ui->btn_remover, &QPushButton::clicked, this, &MainWindow::removerNotaAtiva);
    connect(ui->btn_remover_finalizados, &QPushButton::clicked, this, &MainWindow::removerNotaFinalizada);
    connect(ui->btn_salvar, &QPushButton::clicked, this, &MainWindow::concluirNota);
    connect(ui->notaWidget, &ListaNotaWidget::notaSelecionadaMudou, this, &MainWindow::selecionarNotaAtiva);
    connect(ui->notaWidget_finalizados, &ListaNotaWidget::notaSelecionadaMudou, this, &MainWindow::selecionarNotaFinalizada);

    ui->btn_editar_finalizados->hide();

    QPixmap pix(":/assets/foto.jpeg");
    ui->imagem->setPixmap(pix.scaled(300, 400, Qt::KeepAspectRatio));
    ui->imagem->setScaledContents(false);

    atualizarInterface();
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::criarNota()
{
    QString titulo = ui->lineEdit_titulo->text();
    QString conteudo = ui->textEdit_criar->toPlainText();

    if (titulo.isEmpty())
    {
        QMessageBox::warning(this, "Aviso", "Insira um título");
        return;
    }

    gerenciador.adicionarNota(titulo, conteudo);
    ui->lineEdit_titulo->clear();
    ui->textEdit_criar->clear();
    atualizarInterface();
}

void MainWindow::editarNotaAtiva()
{
    if (!notaAtivaSelecionada)
    {
        return;
    }

    bool ok;
    QString novoTitulo = QInputDialog::getText(this, "Editar Título", "Título:", QLineEdit::Normal, notaAtivaSelecionada->getTitulo(), &ok);
    if (!ok)
    {
        return;
    }

    QString novoConteudo = QInputDialog::getMultiLineText(this, "Editar Conteúdo", "Conteúdo:", notaAtivaSelecionada->getConteudo(), &ok);
    if (!ok)
    {
        return;
    }

    gerenciador.editarNota(notaAtivaSelecionada, novoTitulo, novoConteudo);
    atualizarInterface();
}

void MainWindow::concluirNota()
{
    if (!notaAtivaSelecionada)
    {
        return;
    }

    gerenciador.finalizarNota(notaAtivaSelecionada);
    notaAtivaSelecionada = nullptr;
    atualizarInterface();
}

void MainWindow::selecionarNotaAtiva(Nota *nota)
{
    notaAtivaSelecionada = nota;

    if (nota)
    {
        ui->textEdit_ativas->setPlainText(nota->getConteudo());
    }
    else
    {
        ui->textEdit_ativas->clear();
    }
}

void MainWindow::removerNotaAtiva()
{
    if (!notaAtivaSelecionada)
    {
        return;
    }

    gerenciador.removerNota(notaAtivaSelecionada);
    notaAtivaSelecionada = nullptr;
    atualizarInterface();
}


void MainWindow::selecionarNotaFinalizada(Nota *nota)
{
    notaFinalizadaSelecionada = nota;

    if (nota)
    {
        QString texto = nota->getConteudo().toHtmlEscaped().replace("\n", "<br>");
        ui->textEdit_finalizados->setHtml("<s>" + texto + "</s>");
    }
    else
    {
        ui->textEdit_finalizados->clear();
    }
}

void MainWindow::removerNotaFinalizada()
{
    if (!notaFinalizadaSelecionada)
    {
        return;
    }

    gerenciador.removerNota(notaFinalizadaSelecionada);
    notaFinalizadaSelecionada = nullptr;
    atualizarInterface();
}

void MainWindow::atualizarInterface()
{
    ui->notaWidget->atualizarNotas(gerenciador.getAtivas());
    ui->notaWidget_finalizados->atualizarNotas(gerenciador.getFinalizadas());

    ui->textEdit_ativas->clear();
    ui->textEdit_finalizados->clear();

    gerenciador.salvar("notas.txt");
}
