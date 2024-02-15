#include "Shape.h"
#include "ShapeTwoDim.h"
using namespace std;

ShapeTwoDim::ShapeTwoDim(double pos, double s, char fill, string name) : Shape(pos, s, fill) 
{

}

void ShapeTwoDim::print() const 
{
    cout << "This is 2D shape" << endl;
}

void ShapeTwoDim::setName(string name) 
{
    this->name = name;
}

string ShapeTwoDim::getName() 
{
    return this->name;
}

string ShapeTwoDim::getId() 
{
    return this->id;
}