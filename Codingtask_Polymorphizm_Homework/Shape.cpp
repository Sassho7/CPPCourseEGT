#include "Shape.h"

Shape::Shape(string shapeColor)
{
	color = shapeColor;
}

void Shape::Draw()
{
	cout << "==============================================" << endl;
	cout << "Drawing shape with colour: " << color << endl;
	cout << "==============================================" << endl;
}