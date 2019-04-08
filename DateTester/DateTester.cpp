// Filename: DateTester.cpp
// Author: JJ Giesey
//Email: jjgiesey@milligan.edu
//Project: Quiz 13
//Description: Program to develop class for Dates
//Last Modified: 04/07/19

#include "stdafx.h"
#include "dateClass.h"


using namespace std;


int monthVal, dayVal, yearVal;
char a;


int main()
{
	dateClass todayDate( 0 );
	dateClass oldDate(4, 3, 2019);
	dateClass enterDate;
	enterDate.inputDates();
	cin >> a;
}

