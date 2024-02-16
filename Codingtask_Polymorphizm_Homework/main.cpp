#include <iostream>
#include <string>
#include <vector>

#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"

using namespace std;

void PrintArea(Shape* shape)
{
	cout << "Shape area: " << shape->Area() << endl;
	cout << "=========================================" << endl;
}

int main()
{
	Circle circle("Red", 5); //Red, 78.5
	Rectangle rectangle("Blue", 5, 10); //Blue, 50

	circle.Draw();
	PrintArea(&circle);

	rectangle.Draw();
	PrintArea(&rectangle);

	return 0;
}