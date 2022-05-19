#ifndef IZMER_H
#define IZMER_H
#include "Struct.h"
#include <vector>
#include <algorithm>


void CalculationNPG(vector<Region>* vector_table, double* result);
void CalculationBirth_rate(vector<Region>* vector_table, double* result);
void CalculationDeath_rate(vector<Region>* vector_table, double* result);
void CalculationGDW(vector<Region>* vector_table, double* result);
void CalculationUrbanization(vector<Region>* vector_table, double* result);
void Math_Operations(double* result);

#endif // IZMER_H
