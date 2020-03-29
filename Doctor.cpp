#include "Doctor.h"
#include <iostream>
// constructors
Doctor::Doctor()
{
	name_ = "New Employee";
	ssn_ = "***-**-****";
	salary_ = 0.0;
	specialty_ = "default";
	officeVisitFee_ = 0.0;
}
Doctor::Doctor(std::string the_name, std::string the_ssn, double the_weekly_salary, std::string spec, double fee) : SalariedEmployee(the_name, the_ssn, the_weekly_salary)
{
	specialty_ = spec;
	officeVisitFee_ = fee;
}
Doctor::Doctor(const Doctor& orig)
{
	this->name_ = orig.name_;
	this->ssn_ = orig.ssn_;
	this->salary_ = orig.salary_;
	this->specialty_ = orig.specialty_;
	this->officeVisitFee_ = orig.officeVisitFee_;
}

// accessors
std::string Doctor::getSpecialty()
{
	return specialty_;
}
double Doctor::getOfficeVisitFee()
{
	return officeVisitFee_;
}
// modifiers
void Doctor::setSpecialty(std::string spec) 
{
	specialty_ = spec;
}
void Doctor::setOfficeVisitFee(double fee)
{
	officeVisitFee_ = fee;
}
// other functions:
// this is an operator overload function that checks if a Doctor file is a duplicate file
bool Doctor::operator==(Doctor doc2)
{
	bool isADuplicate = false;
	if (this->name_ == doc2.name_)
	{
		isADuplicate = true;
	}
	return isADuplicate;
}
// this function prints out all of the member variable values
void Doctor::printDoctor()
{
	std::cout << "Name: " << name_ << std::endl;
	std::cout << "SSN: " << ssn_ << std::endl;
	std::cout << "Salary: " << salary_ << std::endl;
	std::cout << "Speciality: " << specialty_ << std::endl;
	std::cout << "Office visit fee: " << officeVisitFee_ << std::endl;
}
// destructor 
Doctor::~Doctor()
{
	
}