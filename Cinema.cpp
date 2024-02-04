#include "Cinema.h"

Cinema::Cinema(string name, string addresss, vector<Hall> hall)
{
    setName(name);
    setAddress(address);
    setHallList(hall);
}

void Cinema::print()
{
    cout << "Cinema name: " << name << "address" << address << " ";
    for (int i = 0; i < hallList.size(); i++)
    {
        hallList[i].print();
        cout << endl;
    }
}

void Cinema::addHall(Hall hall)
{
    this->hallList.push_back(hall);
}

void Cinema::setHallList(vector<Hall> hall)
{
    this->hallList = hall;
}

vector<Hall> Cinema::getHallList()
{
    return this->hallList;
}

void Cinema::setName(string name)
{
    this->name = name;
}

string Cinema::getName()
{
    return this->name;
}

void Cinema::setAddress(string address)
{
    this->address = address;
}

string Cinema::getAddress()
{
    return this->address;
}