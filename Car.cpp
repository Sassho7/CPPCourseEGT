#include "Car.h"

Car::Car()
{

}

Car::Car(string carMake, string carModel, int carYear, string carLicencePlate, double carFuelConsumption)
{
    make = carMake;
    model = carModel;
    year = carYear;
    licencePlate = carLicencePlate;
    fuelConsumption = carFuelConsumption;
}

string Car::GetMake()
{
    return make;
}

string Car::GetModel()
{
    return model;
}

int Car::GetYear()
{
    return year;
}

string Car::GetLicencePlate()
{
    return licencePlate;
}

double Car::GetFuelConsumption()
{
    return fuelConsumption;
}