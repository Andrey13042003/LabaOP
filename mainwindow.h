#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QFileDialog>

#include <string>
#include <fstream>

using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    int Parsing_File(string path_to_file, string region_name);

private slots:
    void on_btn_open_file_clicked();

private:
    Ui::MainWindow *ui;
    Function array[];
};
#ifndef STRUCT_H
#define STRUCT_H

#include "mainwindow.h"

struct Function{
    string region_name;
    int year;
    double npg;
    double birth_rate;
    double death_rate;
    double gdw;
    double urbanisation;
};


#endif // STRUCT_H

#endif // MAINWINDOW_H
