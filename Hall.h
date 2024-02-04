#pragma once
#include <string>
#include <vector>
#include <iostream>
#include "Screening.h"

using namespace std;

class Hall
{
    public:
        Hall(string, int);
        Hall(string, int, vector<Screening>);

        void setScreeninList(vector<Screening>);
        
        vector<Screening> getScreeningList();

        void addScreening(Screening);
        void setName(string);
        void setSeats(int);
        void print();

    private:
        string name;
        int seats;
        vector<Screening> screeningList;
};