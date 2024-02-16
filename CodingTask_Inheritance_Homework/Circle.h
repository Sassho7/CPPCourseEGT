#pragma once
#include <iostream>
#include <string>

#include "Shape.h"

using namespace std;

class Circle : public Shape
{
	public:
		Circle(string color);
		void Draw() override;

	private:
		string color;
};
