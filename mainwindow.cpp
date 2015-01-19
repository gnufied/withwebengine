#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QWebEngineView>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    anyDo = new QWebEngineView(this);
    anyDo->load(QUrl("https://web.any.do"));
    ui->mainLayout->addWidget(anyDo);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_action_Quit_triggered()
{
    close();
}
