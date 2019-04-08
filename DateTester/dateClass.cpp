#include "stdafx.h"
#include "dateClass.h"


dateClass::dateClass()
{
	
}

dateClass::dateClass(int val1, int val2, int val3)
{
	monthVal = val1;
	dayVal = val2;
	yearVal = val3;
}

dateClass::dateClass(int val1)
{
	if (val1 == 0)
	{
		secVal = static_cast<double>(time(0));
	}
	else {
		cout << "Use another constructor" << endl;
	}
}


dateClass::~dateClass()
{
}


//Accessor Functions
int dateClass::getmonthVal()
{
	return(monthVal);
}
int dateClass::getdayVal()
{
	return(dayVal);
}

int dateClass::getyearVal()
{
	return(yearVal);
}
double dateClass::getsecVal()
{
	return(secVal);
}


//Mutator Functions
int dateClass::setmonthVal(int value)
{
	monthVal = value;
	return(value);
}

int dateClass::setdayVal(int value)
{
	dayVal = value;
	return(value);
}

int dateClass::setyearVal(int value)
{
	yearVal = value;
	return(value);
}

double dateClass::setsecVal(double value)
{
	secVal = value;
	return(value);
}



double dateClass::dateToSeconds()
{

	double timeFormat;
	timeFormat = (yearVal - 1970) * 365;
	timeFormat += (yearVal - 1969) / 4;
	for (int i = 0; i < monthVal - 1; i++)
	{
		if (((yearVal % 4 == 0) && (yearVal % 100 != 0)) || (yearVal % 400 == 0))
		{
			int daysOfMonth[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
			timeFormat += daysOfMonth[i];
		}
		else
		{
			int daysOfMonth[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
			timeFormat += daysOfMonth[i];
		}
	}
	timeFormat += dayVal - 1;
	timeFormat = timeFormat * 24 * 60 * 60;

	cout << timeFormat;
	return(timeFormat);
}



void dateClass::inputDates()
{
	cout << "enter workout month, day and year.\n";
	cin >> monthVal;

	if (cin.fail())
	{
		cin.clear();
		cin.ignore(numeric_limits <streamsize>::max(), '\n');
	}

	if ((monthVal < 1) || (monthVal > 12))
	{
		cout << "month input must be from 1 to 12.\n";
		cin >> monthVal;
	}
	cin >> dayVal;

	if (cin.fail())
	{
		cin.clear();
		cin.ignore(numeric_limits <streamsize>::max(), '\n');
	}

	if ((dayVal < 1) || (dayVal > 31))
	{
		cout << "day input must be from 1 to 31.\n";
		cin >> dayVal;
	}

	cin >> yearVal;

	if (cin.fail())
	{
		cin.clear();
		cin.ignore(numeric_limits <streamsize>::max(), '\n');
	}

	if ((yearVal < 1970) || (monthVal > 2099))
	{
		cout << "year input must be from 1970 to 2099.\n";
		cin >> yearVal;
	}

	cout << "you have selected " << monthVal << ", " << dayVal << ", " << yearVal << "\n";
}