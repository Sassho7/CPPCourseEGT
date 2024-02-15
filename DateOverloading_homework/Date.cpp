#include <iostream>
#include <string>
#include "Date.h"

const int Date::days[] = 
   { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

Date::Date( int m, int d, int y ) 
{ 
   setDate( m, d, y ); 
} 

void Date::setDate( int mm, int dd, int yy )
{
   month = ( mm >= 1 && mm <= 12 ) ? mm : 1;
   year = ( yy >= 1900 && yy <= 2100 ) ? yy : 1900;


   if ( month == 2 && leapYear( year ) )
      day = ( dd >= 1 && dd <= 29 ) ? dd : 1;
   else
      day = ( dd >= 1 && dd <= days[ month ] ) ? dd : 1;
}


Date &Date::operator++()
{
   helpIncrement(); 
   return *this; 
} 

Date Date::operator++( int )
{
   Date temp = *this;
   helpIncrement(); 


   return temp; 
} 

Date &Date::operator--()
{
   helpDecrement(); 
   return *this; 
} 


Date Date::operator--( int )
{
   Date temp = *this;
   helpDecrement(); 


   return temp; 
} 


const Date &Date::operator+=( int additionalDays )
{
   for ( int i = 0; i < additionalDays; i++ )
      helpIncrement();

   return *this; 
}


bool Date::leapYear( int testYear ) const
{
   if ( testYear % 400 == 0 || 
      ( testYear % 100 != 0 && testYear % 4 == 0 ) )
      return true;
   else
      return false;
} 


bool Date::endOfMonth( int testDay ) const
{
   if ( month == 2 && leapYear( year ) )
      return testDay == 29;
   else
      return testDay == days[ month ];
} 


void Date::helpIncrement()
{

   if ( !endOfMonth( day ) )
      day++; 
   else 
      if ( month < 12 )
      {
         month++; 
         day = 1; 
      } 
      else 
      {
         year++; 
         month = 1;
         day = 1; 
      } 
} 

void Date::helpDecrement()
{

   if ( day != 1 )
      day--; 
   else 
      if ( month > 1 && month != 3) 
      {
         month--; 
         day = days[ month ]; 
      } 
      else if(month == 3 && leapYear( year )){
         month--; 
         day = 29;
      }
      else if(month == 3 && !leapYear( year )){
         month--; 
         day = 28;
      }      
      else 
      {
         year--; 
         month = 12; 
         day = 31;
      } 
} 


ostream &operator<<( ostream &output, const Date &d )
{
   static char *monthName[ 13 ] = { "", "01", "02",
      "03", "04", "05", "06", "07", "08",
      "09", "10", "11", "12" };
   output << ((d.day<10)? "0":"")<< d.day << '-'<< monthName[ d.month ]  << "-" << d.year;
   return output; 
} 


istream &operator>>(istream &input, Date &d){
   input >> d.day >> d.month >> d.year;
   return input;
}