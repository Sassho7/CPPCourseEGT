#include "Circle.h"

Circle::Circle(string color) : Shape(color)
{
	color = color;
}

void Circle::Draw()
{
	cout << "=========================================" << endl;
	cout << "Drawing a circle with color: " << color << endl;
	cout << "=========================================" << endl;
}