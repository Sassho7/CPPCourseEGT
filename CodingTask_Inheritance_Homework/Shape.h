#pragma once
#include <iostream>
#include <string>

using namespace std;

class Shape
{
	public:

		Shape(string);
		virtual void Draw();

	protected:
		string color;
};