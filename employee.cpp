#include "employee.h"
#include <string>

// constructors
Employee::Employee() : name_("New Employee"), ssn_("***-**-****")
{
}
Employee::Employee(std::string the_name, std::string the_ssn) : name_(the_name), ssn_(the_ssn)
{
}
Employee::Employee(Employee& orig)
{
	this->name_ = orig.name_;
	this->ssn_ = orig.ssn_;
}
// accessors
std::string Employee::getName()
{
	return name_;
}
std::string Employee::getSSN()
{
	return ssn_;
}
// modifiers
void Employee::setName(std::string the_name)
{
	name_ = the_name;
}
void Employee::setSSN(std::string the_ssn)
{
	ssn_ = the_ssn;
}
// destructor
Employee::~Employee()
{
}