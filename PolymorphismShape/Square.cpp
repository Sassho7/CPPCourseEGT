#include "Square.h"
#include "ShapeTwoDim.h"

Square::Square(double pos, double s, char fill, string name) : Shape_2D(pos, s, fill, name) 
{

}

void Square::print() const 
{
    cout << "This is Square" << endl;
}

void Square::areaInfo() const 
{
    cout << "The area of a square is (a^2)*size " << endl;
}

string Square::getId() 
{
    return this->id;
}