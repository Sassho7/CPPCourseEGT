#pragma once
#include <iostream>

using namespace std;

class Date
{
   friend ostream &operator<<( ostream &, const Date & );
   friend istream &operator>>(istream &input, Date &d);
public:
   Date( int m = 1, int d = 1, int y = 1900 ); // default constructor
   void setDate( int, int, int ); // set month, day, year
   Date &operator++(); // prefix increment operator (++i) (has empty parameter list)
   Date operator++( int ); // postfix increment operator (i++) (has dummy parameter)
   // new overloaded operators
   Date &operator--(); // prefix decrement operator (--i) (has empty parameter list)
   Date operator--( int ); // postfix decrement operator (i--) (has dummy parameter)

   const Date &operator+=( int ); // add days, modify object
   bool leapYear( int ) const; // is date in a leap year?
   bool endOfMonth( int ) const; // is date at the end of month?
private:
   int month;
   int day;
   int year;

   static const int days[]; // array of days per month
   void helpIncrement(); // utility function for incrementing date
   // new helper function
   void helpDecrement(); // utility function for decrementing date
};