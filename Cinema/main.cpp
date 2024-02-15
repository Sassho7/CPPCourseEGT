#include<iostream>

#include "Screening.h"
#include "Hall.h"
#include "Cinema.h"

int main() {

    Screening sc1("film 1", 100);
    Screening sc2("film 2", 30);
    Screening sc3("film 3", 40);
    Screening sc4("film 4", 33);

    vector<Screening> screenings;
    vector<Screening> otherScreenings;

    screenings.push_back(sc1);
    screenings.push_back(sc2);
    otherScreenings.push_back(sc3);
    otherScreenings.push_back(sc4);

    Hall h1("Hall 8", 80, screenings);
    Hall h2("Hall 9", 90, screenings);
   
    Hall h3("Hall 10", 100, otherScreenings);
    
    Screening sc5("Nemo 2", 55);
    h3.addScreening(sc5);
    

    vector<Hall> halls;
    halls.push_back(h1);
    halls.push_back(h2);
    halls.push_back(h3);

    Cinema cinema("Arena", "Sofia", halls);
    cinema.print();

    string movieName;
    cout << "Enter movie name:";
    getline(cin, movieName);
    cinema.findMovie(movieName, halls);

    return 0;
}