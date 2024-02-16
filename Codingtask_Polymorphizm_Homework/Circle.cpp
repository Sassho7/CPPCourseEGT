#include "Circle.h"

Circle::Circle(string color, double circleRaduis) : Shape(color)
{
	color = color;
	radius = circleRaduis;
	pi = pi;
}

void Circle::Draw()
{
	cout << "=========================================" << endl;
	cout << "Drawing a circle with color: " << color << endl;
	cout << "=========================================" << endl;
}

double Circle::Area()
{
	return pi * (radius * radius);
}