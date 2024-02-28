#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , player1Time(0)
    , player2Time(0)
    , currentPlayer(1)
{
    ui->setupUi(this);

    pQTimer = new QTimer(this);
    connect(pQTimer, &QTimer::timeout, this, &MainWindow::updateTimer);
    ui->label->setText("Select time");
    ui->progressBar1->setValue(100);
    ui->progressBar2->setValue(100);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_switchPlayer1_clicked()
{
    if(currentPlayer == 1){
        currentPlayer = 2;
    }
}


void MainWindow::on_switchPlayer2_clicked()
{
    if(currentPlayer == 2){
        currentPlayer = 1;
    }
}


void MainWindow::on_min2_clicked()
{
    gameTime = 120; //120sec=2min
    ui->label->setText("2 min selected");
}


void MainWindow::on_min5_clicked()
{
    gameTime = 300; //300sec=5min
    ui->label->setText("5 min selected");
}


void MainWindow::on_startGame_clicked()
{
    player1Time = gameTime;
    player2Time = gameTime;

    pQTimer->start(1000); //update once a second
    ui->label->setText("Game ongoing");
    ui->progressBar1->setValue(100);
    ui->progressBar2->setValue(100);
}


void MainWindow::on_stopGame_clicked()
{
    currentPlayer = 1;

    pQTimer->stop();
    ui->label->setText("Game stopped");
}


void MainWindow::updateTimer()
{
    if(currentPlayer == 1){
        player1Time--;
    } else{
        player2Time--;
    }

    if(player1Time <= 0) {
        pQTimer->stop();
        ui->label->setText("Player 1 ran out of time");
    }

    if(player2Time <= 0) {
        pQTimer->stop();
        ui->label->setText("Player 2 ran out of time");
    }

    ui->progressBar1->setValue(100*player1Time/gameTime);
    ui->progressBar2->setValue(100*player2Time/gameTime);
}
