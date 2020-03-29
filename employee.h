#pragma once
#include <string>
// base class
class Employee
{
public:
	// constructors
	Employee();
	Employee(std::string, std::string);
	Employee(Employee&);
	// accessors
	std::string getName();
	std::string getSSN();
	// modifiers
	void setName(std::string);
	void setSSN(std::string);
	// destructor
	~Employee();

protected:
	std::string name_;
	std::string ssn_;
};

