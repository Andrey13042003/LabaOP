#include "Parsing_File.h"

vector<Region> *vector_table;
int Parsing_File(string path_to_file, string region_name){
    vector_table->clear();
    size_t error = 0;
    fstream file(path_to_file);
    string count;
    if(file.is_open()){
        getline(file, count, '\n');
        while(getline(file, count, '\n')){
            stringstream sstream(count);
            string arr[7];
            size_t index = 0;

            while(getline(sstream, arr[index], ','))
                index++;
//stoi - Из стринга в int
//stod - Из стринга в double
            if(arr[0] != "" && arr[1] == region_name && arr[2] != "" && arr[3] != "" && arr[4] != "" && arr[5] != "" && arr[6] != "")
                vector_table->push_back({stoi(arr[0]), arr[1], stod(arr[2]), stod(arr[3]), stod(arr[4]), stod(arr[5]),stod(arr[6])});
            else if(arr[0] == "" || arr[1] == "" || arr[2] == "" || arr[3] == "" || arr[4] == "" || arr[5] == "" || arr[6] != "")
                error++;
        }
    }
    else
        return -1;
    file.close();
    return error;
}
