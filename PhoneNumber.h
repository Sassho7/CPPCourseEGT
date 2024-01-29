#pragma once
#include <iostream>
#include <string>
#include <iomanip>


using namespace std;

class PhoneNumber
{
      friend ostream &operator<<(ostream &, const PhoneNumber &);
      friend istream &operator>>(istream &, PhoneNumber &);
   private:
      string areaCode; 
      string exchange; 
      string line; 
};