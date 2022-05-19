#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QFileDialog>

#include <string>
#include <fstream>
#include <sstream>
#include <vector>

#include <Struct.h>
#include <izmer.h>
#include "Parsing_File.h"

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

private slots:

    void on_btn_open_file_clicked();

    void on_btn_Column_clicked();

private:
    Ui::MainWindow *ui;

    vector<Region> *vector_table;

    void CreateTable();
};

#endif // MAINWINDOW_H
