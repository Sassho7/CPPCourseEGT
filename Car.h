#include <iostream>
#include <string>

using namespace std;

class Car
{
    public:
        Car();
        Car(string, string, int, string, double);
        string GetMake();
        string GetModel();
        int GetYear();
        string GetLicencePlate();
        double GetFuelConsumption();

    private:
        string make;
        string model;
        int year;
        string licencePlate;
        double fuelConsumption;
};