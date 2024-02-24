#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , state(1)
    , operand(0)
    , result(0.0)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_N1_clicked()
{
    numberClickedHandler("1");
}

void MainWindow::on_N2_clicked()
{
    numberClickedHandler("2");
}

void MainWindow::on_N3_clicked()
{
    numberClickedHandler("3");
}

void MainWindow::on_N4_clicked()
{
    numberClickedHandler("4");
}

void MainWindow::on_N5_clicked()
{
    numberClickedHandler("5");
}

void MainWindow::on_N6_clicked()
{
    numberClickedHandler("6");
}

void MainWindow::on_N7_clicked()
{
    numberClickedHandler("7");
}

void MainWindow::on_N8_clicked()
{
    numberClickedHandler("8");
}

void MainWindow::on_N9_clicked()
{
    numberClickedHandler("9");
}

void MainWindow::on_N0_clicked()
{
    numberClickedHandler("0");
}



void MainWindow::on_add_clicked()
{
    addSubMulDivClickHandler("+");
}

void MainWindow::on_sub_clicked()
{
    addSubMulDivClickHandler("-");

}

void MainWindow::on_mul_clicked()
{
    addSubMulDivClickHandler("*");

}

void MainWindow::on_div_clicked()
{
    addSubMulDivClickHandler("/");

}



void MainWindow::on_clear_clicked()
{
    resetLineEdits();

}

void MainWindow::on_enter_clicked()
{
    clearAndEnterClickHandler();

}

void MainWindow::numberClickedHandler(const QString &digit)
{
    if (state == 1) {
        number1 += digit;
        ui->num1->setText(number1);
    } else if (state == 2) {
        number2 += digit;
        ui->num2->setText(number2);
    }
}

void MainWindow::addSubMulDivClickHandler(const QString &operation)
{
    if (operation == "+") {
        operand = 0;
    } else if (operation == "-") {
        operand = 1;
    } else if (operation == "*") {
        operand = 2;
    } else if (operation == "/") {
        operand = 3;
    }
    state = 2;
}

void MainWindow::clearAndEnterClickHandler()
{

    float num1 = number1.toFloat();
    float num2 = number2.toFloat();

    resetLineEdits();

    switch (operand) {
    case 0:
        result = num1 + num2;
        break;
    case 1:
        result = num1 - num2;
        break;
    case 2:
        result = num1 * num2;
        break;
    case 3:
        result = num1 / num2;
        break;
    }
    ui->result->setText(QString::number(result));
}

void MainWindow::resetLineEdits()
{
    state = 1;
    number1 = "";
    number2 = "";
    ui->num1->clear();
    ui->num2->clear();
    ui->result->clear();
}
