#include <cstring>
#include "dateclass.h"
using namespace std;


//default constructor
Date::Date() {
}

//constructor that takes 3 data members
Date::Date( int m, int d, int y ) {
  day=d;
  mon=m;
  yr=y;
}

//method to read date
void Date::readDate( int m, int d, int y) {
  day=d;
  mon=m;
  yr=y;
}

//method to set date
void Date::setDate( int month, int dy, int year ) {
  dy=day;
  mon=month;
  yr=year;
}

//method to add one day to a date
void Date::plusoneDate( Date ) {
  day = day+1;
  cout << mon << "/" << day << "/" << yr << endl;
}

//method to get the year
int Date::getYear() {
  return( yr );
}

//method to get the day
int Date::getDay() {
  return( day );
}

//method to get the month
int Date::getMonth() {
  return( mon );
}

//method to put the date
void Date::writeDate() {
  cout << mon << "/" << day << "/" << yr << endl;

}

//method to determine if a date is valid
void Date::isValid() {
  if(( mon < 0 ) || ( mon > 12 ))
    cout << "Month value is invalid!" << endl;
  if(( day < 1) || ( day > 31 ))
    cout << "Day value is invalid!" << endl;
  if(( yr < 1900 ) || ( yr > 2100 ))
    cout << "Year value is invalid!" << endl;
}

