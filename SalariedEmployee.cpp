#include "SalariedEmployee.h"
#include "employee.h"
#include <iostream>

using namespace employeesavitch;

// constructors
SalariedEmployee::SalariedEmployee() 
{
	name_ = "New Employee";
	ssn_ = "***-**-****";
	salary_ = 0.0;
}
SalariedEmployee::SalariedEmployee(string the_name, string the_ssn, double the_weekly_salary) : Employee(the_name, the_ssn), salary_(the_weekly_salary)
{
}
SalariedEmployee::SalariedEmployee(SalariedEmployee& orig)
{
	this->name_ = orig.name_;
	this->ssn_ = orig.ssn_;
	this->salary_ = orig.salary_;
}

// accessors
double SalariedEmployee::get_salary() const
{
	return salary_;
}
// modifiers
void SalariedEmployee::set_salary(double new_salary)
{
	salary_ = new_salary;
}
// other functions:
// print check prints out the monthly check amount.
void SalariedEmployee::print_check()
{
	std::cout << "The monthly amount is " << salary_ << std::endl;
}
// destructor
SalariedEmployee::~SalariedEmployee()
{
}