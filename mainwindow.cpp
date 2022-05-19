#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    vector_table = new vector<Region>;
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete vector_table;
    delete ui;
}

void MainWindow::on_btn_open_file_clicked()
{
    if (ui->line_region->text() != "Название региона"){
        QString name = ui->line_region->text();
        QString path_file = ui->line_path->text();
        if(path_file == "Путь к файлу"){
            path_file = QFileDialog::getOpenFileName(this, tr("Open File"), "C://", "All files(*.*);;Table File(*.csv");
            ui->line_path->setText(path_file);
        }
        int result_pars_file = Parsing_File(path_file.toStdString(), name.toStdString());
        (result_pars_file == -1)?
                    QMessageBox::warning(this, "Информация", "Не удалось открыть файл"):
                    QMessageBox::information(this, "Information", QString("Всего ошибок: ") + QString::number(result_pars_file));
        if(vector_table->size() > 0)
            CreateTable();
        else
            QMessageBox::warning(this, "Шапка", "Неправильно введён регион");
    }
    else{
        QMessageBox::warning(this, "Информация", "Введите название региона");
    }
}


void MainWindow::on_btn_Column_clicked()
{
    if(vector_table->size() > 0){
        double *result = (double*)calloc(sizeof(double), 3);
        if(ui->line_Column->text() != "Номер столбца"){
            switch (ui->line_Column->text().toInt()) {
                case 3:{
                    CalculationNPG(vector_table, result);
                    break;
                }
                case 4:{
                    CalculationBirth_rate(vector_table, result);
                    break;
                }
                case 5:{
                    CalculationDeath_rate(vector_table, result);
                    break;
                }
                case 6:{
                    CalculationGDW(vector_table, result);
                    break;
                }
                case 7:{
                    CalculationUrbanization(vector_table, result);
                    break;
                }
                default:{
                    QMessageBox::information(this, "Выбор столбца", "Ошибка выбора столбца");
                }
            }
            ui->label_min->setText(QString("Min: ") + QString::number(*(result)));
            ui->label_max->setText(QString("Max: ") + QString::number(*(result + 1)));
            ui->label_avg->setText(QString("Avg: ") + QString::number(*(result + 2)));

        }
        else
            QMessageBox::warning(this, "Информация", "Введите номер столбца");
        free(result);
    }
    else
        QMessageBox::warning(this, "Шапка", "Не выбран регион!");
}

