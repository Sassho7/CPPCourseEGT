#include "Employee.h"

Employee::Employee()
{

}

Employee::Employee(string empName, string empId, string empPosition)
{
	name = empName;
	id = empId;
	position = empPosition;
}

void Employee::PrintEmp()
{
	cout << "====================================" << endl;
	cout << "Employee name: " << name << endl;
	cout << "Employee id: " << id << endl;
	cout << "Employee positiond: " << position << endl;
	cout << "====================================" << endl;
}