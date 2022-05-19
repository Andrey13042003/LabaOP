#include "mainwindow.h"
#include "ui_mainwindow.h"

void MainWindow::CreateTable(){
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->setColumnCount(7);
    ui->tableWidget->setRowCount(vector_table->size());
    ui->tableWidget->setHorizontalHeaderLabels(QStringList()<< "Year" << "Region" << "NPG" << "Birth rate" << "Death rate" << "GDW" << "Urbanization");

    for(size_t i = 0; i < vector_table->size(); i++){
        for(size_t j = 0; j < 7; j++){
            switch (j) {
                case 0:{
                    ui->tableWidget->setItem(i, j, new QTableWidgetItem(QString::number(vector_table->at(i)._year)));
                    break;
                }
                case 1:{
                    ui->tableWidget->setItem(i, j, new QTableWidgetItem(QString::fromStdString(vector_table->at(i)._region)));
                    break;
                }
                case 2:{
                    ui->tableWidget->setItem(i, j, new QTableWidgetItem(QString::number(vector_table->at(i)._npg)));
                    break;
                }
                case 3:{
                    ui->tableWidget->setItem(i, j, new QTableWidgetItem(QString::number(vector_table->at(i)._birth_rate)));
                    break;
                }
                case 4:{
                    ui->tableWidget->setItem(i, j, new QTableWidgetItem(QString::number(vector_table->at(i)._death_rate)));
                    break;
                }
                case 5:{
                    ui->tableWidget->setItem(i, j, new QTableWidgetItem(QString::number(vector_table->at(i)._gdw)));
                    break;
                }
                case 6:{
                    ui->tableWidget->setItem(i, j, new QTableWidgetItem(QString::number(vector_table->at(i)._urbanization)));
                    break;
                }
            }
        }
    }
}
