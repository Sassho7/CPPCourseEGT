#pragma once
#include <string>
#include <iostream>

using namespace std;

class Screening
{
    public:
        Screening(string, int);
        void setMovieName(string);
        void setSoldTickets(int);
        string getMovieName();
        int getSoldTickets();
        void print();
    
    private:
        string movieName;
        int soldTickets;
};

