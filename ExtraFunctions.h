#pragma once
#include "employee.h"
#include "SalariedEmployee.h"
#include "Doctor.h"
#include <vector>

using namespace std;
// completely fills the vector
void inputNames(vector<Doctor>& vecD, int numF);
// prints out all the variables in each vector
void printVec(std::vector<Doctor>& vDoc, int files);
// checks the users input to make sure it is within a specified parameter
void validInput(int& opt, int max, int min);

