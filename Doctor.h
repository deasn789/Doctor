#pragma once
#include "employee.h"
#include "SalariedEmployee.h"
#include <string>

using namespace employeesavitch;

// Doctor is a derrived class of SalariedEmployee which is a derrived class of Employee
class Doctor: public SalariedEmployee
{
public:
	// constructors
	Doctor();
	Doctor(std::string the_name, std::string the_ssn, double the_weekly_salary, std::string spec, double fee);
	Doctor(const Doctor& orig);
	// accessors
	std::string getSpecialty();
	double getOfficeVisitFee();
	// modifiers
	void setSpecialty(std::string);
	void setOfficeVisitFee(double);
	// other functions
	bool operator==(Doctor);
	void printDoctor();
	// destructor
	~Doctor();

private:
	std::string specialty_;
	double officeVisitFee_;
};

