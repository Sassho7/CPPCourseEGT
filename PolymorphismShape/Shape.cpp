#include "Shape.h"

Shape::Shape(double pos, double s, char fill) 
{
    draw(pos, s, fill);
}

void Shape::draw(double pos, double s, char fill) 
{
    this->position = pos;
    this->size = s;
    this->fill = fill;
}

void Shape::print() const 
{
    cout << "This is shape" << endl;
}

string Shape::getId() 
{
    return this->id;
}