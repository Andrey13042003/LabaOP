#include "EntryPoint.h"

vector<Region>* vector_table;
double* result;
string path_to_file;
string region_name;
void EntryPoint(int func){
    switch(func){
        case 0:{
            int result_pars_file = Parsing_File(path_to_file, region_name);
            break;
        }
       /* case 1:{
            if(ui->line_Column->text() != "Номер столбца"){
                switch(ui->line_Column->text().toInt()){
                    case 2:{
                        CalculationNPG(vector_table, result);
                        break;
                    }
                    case 3:{
                        CalculationBirth_rate(vector_table, result);
                        break;
                    }
                    case 4:{
                        CalculationDeath_rate(vector_table, result);
                        break;
                    }
                    case 5:{
                        CalculationGDW(vector_table, result);
                        break;
                    }
                    case 6:{
                        CalculationUrbanization(vector_table, result);
                        break;
                    }
                    default:{
                        //QMessageBox::information(this, "Выбор столбца", "Ошибка выбора столбца");
                    }
                }
            }
        }*/
    }
}

