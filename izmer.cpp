#include "izmer.h"

void Math_Operations(double* result, vector<double> copy_vector)
{
    sort(copy_vector.begin(), copy_vector.end());
    *(result) = copy_vector[0];
    *(result + 1) = copy_vector[copy_vector.size() - 1];
    if(copy_vector.size() % 2 != 0)
        *(result + 2) = copy_vector[(copy_vector.size() / 2)];
    else
        *(result + 2) = (copy_vector[(copy_vector.size() / 2)] + copy_vector[(copy_vector.size() / 2) - 1]) / 2;
}

void CalculationNPG(vector<Region>* vector_table, double* result){
    vector<double> copy_vector;
    for(size_t i = 0; i < vector_table->size(); i++)
        copy_vector.push_back(vector_table->at(i)._npg);
    Math_Operations(result, copy_vector);
}

void CalculationBirth_rate(vector<Region>* vector_table, double* result){
    vector<double> copy_vector;
    for(size_t i = 0; i < vector_table->size(); i++)
        copy_vector.push_back(vector_table->at(i)._birth_rate);
    Math_Operations(result, copy_vector);
}

void CalculationDeath_rate(vector<Region>* vector_table, double* result){
    vector<double> copy_vector;
    for(size_t i = 0; i < vector_table->size(); i++)
        copy_vector.push_back(vector_table->at(i)._death_rate);
    Math_Operations(result, copy_vector);
}

void CalculationGDW(vector<Region>* vector_table, double* result){
    vector<double> copy_vector;
    for(size_t i = 0; i < vector_table->size(); i++)
        copy_vector.push_back(vector_table->at(i)._gdw);
    Math_Operations(result, copy_vector);
}

void CalculationUrbanization(vector<Region>* vector_table, double* result){
    vector<double> copy_vector;
    for(size_t i = 0; i < vector_table->size(); i++)
        copy_vector.push_back(vector_table->at(i)._urbanization);
    Math_Operations(result, copy_vector);
}
