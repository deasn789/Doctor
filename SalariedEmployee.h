#pragma once
#include <string>
#include "employee.h"

using namespace std;

namespace employeesavitch
{
		// derrived class of Employee
	class SalariedEmployee: public Employee
	{
	public:
		SalariedEmployee();
		SalariedEmployee(string the_name, string the_ssn, double the_weekly_salary);
		SalariedEmployee(SalariedEmployee&);
		double get_salary() const;
		void set_salary(double new_salary);
		void print_check();
		~SalariedEmployee();

	protected:
		double salary_; // weekly
	};
} // employeesavitch


