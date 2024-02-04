#pragma once
#include <string>
#include <vector>
#include <iostream>

#include "Hall.h"

using namespace std;

class Cinema 
{
    public:

        Cinema(string, string, vector<Hall>);
        void setName(string);
        string getName();
        void setAddress(string);
        string getAddress();
        void setHallList(vector<Hall>);
        vector<Hall> getHallList();
        void addHall(Hall);
        void print();
        
    private:
        string name;
        string address;
        vector<Hall> hallList;
};