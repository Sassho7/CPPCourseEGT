#pragma once
#include <iostream>
#include <string>

using namespace std;

class Employee
{
public:
	Employee();
	Employee(string, string, string);
	void PrintEmp();

private:
	string name;
	string id;
	string position;
};