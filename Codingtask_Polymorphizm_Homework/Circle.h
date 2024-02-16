#pragma once
#include <iostream>
#include <string>

#include "Shape.h"

using namespace std;

class Circle : public Shape
{
public:
	Circle(string, double);
	void Draw() override;
	double Area() override;

private:
	double radius;
	double pi = 3.14;
};
