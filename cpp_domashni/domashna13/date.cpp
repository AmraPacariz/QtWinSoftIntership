#include <iostream>

using namespace std;
#include "date.h"


Date::Date( int mn, int dy, int yr )
{
   if ( mn > 0 && mn <= 12 )      
      month = mn;
   else {
      month = 1;
      cout << "Mesec " << mn << " ne postoi. Postavi go month na 1.\n";
   } 

   year = yr;                      
   day = checkDay( dy );           

   // cout << "Konstruktor za objekt od klasa Date ";
   // print();         
   // cout << endl;
} 


void Date::print() const
   { cout << month << '/' << day << '/' << year; }


Date::~Date()
{ 
   // cout << "Destruktor na klasata Date ";
   // print();
   // cout << endl;
} 

int Date::checkDay( int testDay )
{
   static const int daysPerMonth[ 13 ] = 
      {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

   if ( testDay > 0 && testDay <= daysPerMonth[ month ] )
      return testDay;

   if ( month == 2 &&      
        testDay == 29 &&
        ( year % 400 == 0 ||                      
         ( year % 4 == 0 && year % 100 != 0 ) ) )
      return testDay;

   cout << "Denot " << testDay << " e greshen. Postavi vrednost za day na 1.\n";

   return 1;  
}

