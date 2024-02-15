#pragma once
#include "ShapeTwoDim.h"

#include<iostream>

using namespace std;

class Square : public ShapeTwoDim 
{
    public:
        Square(double, double, char, string);
        void print() const;
        void areaInfo() const;
        string getId();

    private:
        double position;
        double size;
        char fill;
        string name;
        const string id = "Square";
};