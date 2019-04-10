// Filename: DateTester.cpp
// Author: JJ Giesey
//Email: jjgiesey@milligan.edu
//Project: Quiz 13
//Description: Program to develop class for Dates
//Last Modified: 04/07/19

#include "stdafx.h"
#include "dateClass.h"


using namespace std;

bool sameDate(dateClass date1, dateClass date2);

int monthVal, dayVal, yearVal;
char a;


int main()
{
	dateClass todayDate( 0 );
	dateClass oldDate(4, 3, 2019);
	dateClass enterDate;
	enterDate.inputDates();
	cout << sameDate(enterDate, todayDate) << endl;
	cout << sameDateFriend(enterDate, oldDate) << endl;
	cin >> a;
}

bool sameDate(dateClass date1, dateClass date2)
{
	if ((date1.getyearVal() == date2.getyearVal()) && (date1.getdayVal() == date2.getdayVal()) && (date1.getmonthVal() == date2.getmonthVal()))
	{
		return(true);
	 }
	else
	{
		return(false);
	}
}

bool sameDateFriend(dateClass date1, dateClass date2)
{
	if ((date1.yearVal == date2.yearVal) && (date1.dayVal == date2.dayVal) && (date1.monthVal == date2.monthVal))
	{
		return(true);
	}
	else
	{
		return(false);
	}
}