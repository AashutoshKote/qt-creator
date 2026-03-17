#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    //void         about         static void QMessageBox::about(Qwidget*parent,const QString & title,const QString &text)
    //void         aboutQt
    //StandardButton critical
    //StandardButton informat
    //StandardButton question
    //StandardButton warning                        //this are 4diffrent msg functions
    QMessageBox::StandardButton reply = QMessageBox::question(this, "Application name here", "custom msg here",
                          QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::Yes){
        QApplication::quit();}
            else {
            qDebug ()<< "No is clicked";
        }
}

