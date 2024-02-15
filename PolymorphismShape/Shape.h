#pragma once
#include<iostream>

using namespace std;

//bazov class
class Shape 
{

    public:
        Shape(double, double, char);
        void draw(double pos, double s, char col);
        virtual void print() const;
        virtual string getId();

    private:
        double position;
        double size;
        char fill;
        const string id = "Shape";
};