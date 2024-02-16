#pragma once
#include <iostream>
#include <string>

using namespace std;

class Shape
{
public:

	Shape(string);
	virtual void Draw();
	virtual double Area() = 0;

protected:
	string color;
};