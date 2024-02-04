#include "Hall.h"

Hall::Hall(string hallName, int capacity)
{
    setName(hallName);
    setSeats(capacity);
}

Hall::Hall(string name, int seats, vector<Screening> ScreeningList)
    : screeningList(screeningList)
{
    setName(name);
    setSeats(seats);
}

void Hall::addScreening(Screening screening)
{
    this->screeningList.push_back(screening);
}

void Hall::print()
{
    cout << " Hall is " << this->name << "with" << this->seats << "seats" << " ";
    for(int i = 0; i < this->screeningList.size(); i++)
    {
        cout << "Projection is: "
            << this->screeningList.at(i).getMovieName() << " "
            << this->screeningList.at(i).getSoldTickets() << " ";
        cout << endl;
    }
}

void Hall::setName(string name)
{
    this->name = name;
}

void Hall::setSeats(int capacity)
{
    this->seats = capacity;
}