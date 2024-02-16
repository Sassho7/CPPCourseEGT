#pragma once
#include <iostream>
#include <string>
#include <vector>

#include "Employee.h"

using namespace std;

class Department
{
public:
	Department();
	Department(string);
	void AddEmployee(Employee employee);
	void Print();

private:
	string department;
	vector<Employee> employees;
};