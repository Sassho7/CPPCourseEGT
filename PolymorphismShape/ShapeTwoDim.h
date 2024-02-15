#pragma once
#include "Shape.h"

#include<iostream>

using namespace std;

class ShapeTwoDim : public Shape 
{
    public:
        ShapeTwoDim(double, double, char, string);
        void setName(string);
        string getName();
        void print() const;
        string getId();

    private:
        double position;
        double size;
        char fill;
        string name;
        const string id = "Shape_Two_Dimentional";
};