#include "Rectangle.h"

Rectangle::Rectangle(string color, int rectHeight, int rectWidth) : Shape(color)
{
	color = color;
	height = rectHeight;
	width = rectWidth;
}

void Rectangle::Draw()
{
	cout << "=========================================" << endl;
	cout << "Drawing a rectangle with color: " << color << endl;
	cout << "=========================================" << endl;
}

double Rectangle::Area()
{
	return width * height;
}