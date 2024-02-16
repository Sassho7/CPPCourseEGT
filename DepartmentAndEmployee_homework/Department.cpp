#include "Department.h"

Department::Department()
{

}

Department::Department(string nameOfDepartment)
{
	department = nameOfDepartment;
}

void Department::AddEmployee(Employee employeeC)
{
	employees.push_back(employeeC);
}

void Department::Print()
{
	cout << "=====================================" << endl;
	cout << "Department name: " << department << endl;
	cout << "=====================================" << endl;
	for (int i = 0; i < employees.size(); i++)
	{
		employees[i].PrintEmp();
		cout << endl;
	}
}