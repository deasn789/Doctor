#include "ExtraFunctions.h"
#include <iostream>
#include <vector>
#include <string>

// completely fills the vector
void inputNames(vector<Doctor>& vecD, int numF)
{
	std::string tempString;
	double tempDouble = 0;
	for (int i = 0; i < numF; i++)
	{
		std::cout << "Enter the doctor's name for Doctor #" << (i + 1) << std::endl;
		cin.get();
		getline(cin, tempString);
		vecD[i].setName(tempString);
		std::cout << "Enter the doctor's SSN for Doctor #" << (i + 1) << std::endl;
		getline(cin, tempString);
		vecD[i].setSSN(tempString);
		std::cout << "Enter the doctor's salary for Doctor #" << (i + 1) << std::endl;
		std::cin >> tempDouble;
		vecD[i].set_salary(tempDouble);
		std::cout << "Enter the doctor speciality for Doctor #" << (i + 1) << std::endl;
		cin.get();
		getline(cin, tempString);
		vecD[i].setSpecialty(tempString);
		std::cout << "Enter the doctor office visit fee for Doctor #" << (i + 1) << std::endl;
		std::cin >> tempDouble;
		vecD[i].setOfficeVisitFee(tempDouble);
	}
}
// prints out all the variables in each vector
void printVec(std::vector<Doctor>& vDoc, int files)
{
	for (int i = 0; i < files; i++)
	{
		std::cout << "Doctor #" << (i + 1) << "'s files:" << std::endl;
		vDoc[i].printDoctor();
		std::cout << endl;
	}
}
// checks the users input to make sure it is within a specified parameter
void validInput(int& opt, int max, int min)
{
	do
	{
		std::cin >> opt;
		if (opt < min || opt > max)
		{
			std::cout << "Incorrect input\n" << "Input must be from " << min << " to " << max << "." << std::endl;
		}
	} while (opt < min || opt > max);

}
