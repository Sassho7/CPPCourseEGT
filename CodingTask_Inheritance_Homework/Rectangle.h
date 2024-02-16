#pragma once
#include <iostream>
#include <string>

#include "Shape.h"

using namespace std;

class Rectangle : public Shape
{
	public:
		Rectangle(string);
		void Draw() override;
	private:
		string color;
};