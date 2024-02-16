#pragma once
#include <iostream>
#include <string>

#include "Shape.h"

using namespace std;

class Rectangle : public Shape
{
public:
	Rectangle(string, int, int);
	void Draw() override;
	double Area() override;

private:
	int height;
	int width;
};