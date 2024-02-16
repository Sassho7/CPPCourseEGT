#include "Rectangle.h"

Rectangle::Rectangle(string color) : Shape(color)
{
	color = color;
}

void Rectangle::Draw()
{
	cout << "=========================================" << endl;
	cout << "Drawing a rectangle with color: " << color << endl;
	cout << "=========================================" << endl;
}