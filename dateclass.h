#include <iostream>
#include <cstring>
using namespace std;

class Date {

public:
	Date();
	Date( int, int, int );
	void readDate( int, int, int );
	void setDate( int, int, int );
	void plusoneDate( Date );
	int getYear();
	int getDay();
	int getMonth();
	void writeDate();
	void isValid();

private:
	int day, mon, yr;

};
