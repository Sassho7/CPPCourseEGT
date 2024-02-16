#include <iostream>
#include <string>
#include <vector>

#include "Employee.h"
#include "Department.h"

using namespace std;

int main()
{
	Department department("Team 2");

	Employee firstEmployee("Tosho", "24887", "Manager");
	Employee secondEmploye("Tisho", "25786", "Planing");

	department.AddEmployee(firstEmployee);
	department.AddEmployee(secondEmploye);

	department.Print();

	return 0;
}