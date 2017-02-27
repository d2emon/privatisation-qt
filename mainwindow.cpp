#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QMessageBox>
#include <QTextCodec>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::showMessage()
{
    qDebug() << "menu clicked";
}

void MainWindow::showCards()
{
    qDebug() << "show cards";
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));

    QMessageBox msgBox;
    msgBox.setText("Картотека");
    msgBox.exec();
}
