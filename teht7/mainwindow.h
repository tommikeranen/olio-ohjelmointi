#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void timeout();
    void updateProgressbar();
    void setGameInfoText(QString a, short b);

private slots:
    void on_switchPlayer1_clicked();
    void on_switchPlayer2_clicked();

    void on_min2_clicked();
    void on_min5_clicked();

    void on_startGame_clicked();
    void on_stopGame_clicked();

    void updateTimer();

private:
    Ui::MainWindow *ui;

    short player1Time;
    short player2Time;
    short currentPlayer;
    short gameTime;
    QTimer *pQTimer;
};
#endif // MAINWINDOW_H
