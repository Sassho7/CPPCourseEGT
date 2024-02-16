#include <iostream>
#include <string>

#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"

using namespace std;

int main()
{
	Circle circle("Red");
	Rectangle rectangle("Blue");

	circle.Draw();
	rectangle.Draw();

	return 0;
}