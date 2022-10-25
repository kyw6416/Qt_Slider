#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui -> horizontalSlider_2, SIGNAL(valueChanged(int)),ui -> progressBar_2, SLOT(setValue(int)));
    connect(ui -> verticalSlider_2, SIGNAL(valueChanged(int)),ui -> lcdNumber_2, SLOT(display(int)));
    connect(ui -> dial_2, SIGNAL(valueChanged(int)),ui -> progressBar_3, SLOT(setValue(int)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

