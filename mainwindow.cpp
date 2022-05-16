#include "mainwindow.h"
#include "ui_mainwindow.h"

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


void MainWindow::on_btn_open_file_clicked()
{
    if (ui->line_name_region->text() != "Название региона"){
        QString name = ui->line_name_region->text();
        QString path_file = ui->line_path_file->text();
        if(path_file == "Путь к файлу"){
            path_file = QFileDialog::getOpenFileName(this, tr("Open File"), "C://", "All files(*.*);;Table File(*.csv");
        }
        (Parsing_File(path_file.toStdString(), name.toStdString()) == -1)?
                    QMessageBox::warning(this, "Информация", "Не удалось открыть файл"):
                    QMessageBox::information(this, "Information", "Файл был открыт успешно");
    }
    else{
        QMessageBox::warning(this, "Информация", "Введите название региона");
    }
}

int MainWindow::Parsing_File(string path_to_file, string region_name){
    fstream file(path_to_file);
    string count;
    if(file.is_open()){
        while(getline(file, count, '\n')){
            stringstream name(count);
            string arr[7];
            int i = 0;
            while(getline(name, arr[i], ',')){
                i++;
            }
        }
    }
    else
        return -1;
    file.close();
}

