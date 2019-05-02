#pragma once

class SecondsToDate
{

public:



	//YearTimeFinder function

		//Precondition: Uses a time in seconds- prefferably time Null 


		//Postcondition: gives the current date in the format, Month, Day, Year. To call month, day, or year, use this array:	double Today[3] = { YearMonthCheck, DayOfMonth, ThisYearInt };
	
	int ThisYearInt;
	double CurrentSemester;
	int Timepar;
	string CurrentMonth;
	int DayOfMonth;
	int DaysSinceNewYears;
	double ThreeDPrintOne;
	int LeapYear;
	void YearTimeFinder(int(Timepar))
	{








		double SecondsSince1970 = time(NULL); //Uses time NULL to get the current date. 
		double DaysSince1970 = ((SecondsSince1970 / 60) / 60) / 24;//number of days
		double YearsSince1970 = DaysSince1970 / 365.25;//number of years
		double ThisYeardouble = 1970 + YearsSince1970;
		ThisYearInt = static_cast<int>(ThisYeardouble);
		int FebruaryDays = 0;

		//Find number of seconds since new years
		float SecondsSinceNewYears = SecondsSince1970 - (static_cast<float>(ThisYearInt) - 1970) * 60 * 60 * 24 * 365.25;
		DaysSinceNewYears = static_cast<int>(SecondsSinceNewYears / (60 * 60 * 24)) + 1;

		//Month Name

		//Check for leap year

		int LeapYearCheck = ThisYearInt - 1972; // First leap year since 1970: 1972

		if (LeapYearCheck % 4 == 0)
		{
			LeapYear = 0;
		}
		else
		{
			LeapYear = 29;
		}
		//Identify Month
		string CurrentMonthName[13] = { "SecretLevelMonth", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
		int CurrentMonthDaysSum[13] = { 9, 31, FebruaryDays, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

		int MonthDays[13][33] =


		{
			/*SecretLevelMonth*/{ 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0, 0, 0, 0,0, 0, 0, 0},
			/*January:*/{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19,20, 21, 23, 24, 25, 26, 27, 28, 29, 30, 31, 0, 100},
			/*February*/{0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,23,24,25,26,27,28, LeapYear,0, 0, 100},
			/*March*/ {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19,20, 21, 23, 24, 25, 26, 27, 28, 29, 30, 31, 0, 100},
			/*April*/{0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19,20, 21, 23, 24, 25, 26, 27, 28, 29, 30, 0, 0, 100 },
			/*May*/ {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19,20, 21, 23, 24, 25, 26, 27, 28, 29, 30, 31, 0, 100 },
			/*June*/{0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19,20, 21, 23, 24, 25, 26, 27, 28, 29, 30, 0, 0, 100 },
			/*July*/{0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19,20, 21, 23, 24, 25, 26, 27, 28, 29, 30, 31, 0, 100 },
			/*August*/{0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19,20, 21, 23, 24, 25, 26, 27, 28, 29, 30, 31, 0, 100 },
			/*September*/{0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19,20, 21, 23, 24, 25, 26, 27, 28, 29, 30, 0, 0, 100 },
			/*October*/ {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19,20, 21, 23, 24, 25, 26, 27, 28, 29, 30, 31, 0, 100 },
			/*November*/ {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19,20, 21, 23, 24, 25, 26, 27, 28, 29, 30, 0, 0, 100 },
			/*December*/ {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19,20, 21, 23, 24, 25, 26, 27, 28, 29, 30, 31, 0, 100 }
		};

		int SumofMonthDays[14] = { 0, 31, 31 + FebruaryDays, 62 + FebruaryDays, 92 + FebruaryDays, 123 + FebruaryDays, 153 + FebruaryDays, 184 + FebruaryDays, 215 + FebruaryDays, 245 + FebruaryDays, 276 + FebruaryDays, 306 + FebruaryDays,337 + FebruaryDays };



		int PriorMonthsDays = 0;
		DayOfMonth = 1;
		int YearMonthCheck = 1;
		while (PriorMonthsDays < DaysSinceNewYears)
		{

			/*if (MonthDays[YearMonthCheck][DayOfMonth] == 0)
			{
				DayOfMonth++;
			}
			*/

			if (MonthDays[YearMonthCheck][DayOfMonth] == 0)

			{
				YearMonthCheck++;
				DayOfMonth = 0;

			}

			DayOfMonth++;
			PriorMonthsDays++;
		}
		DayOfMonth--;

		CurrentMonth = CurrentMonthName[YearMonthCheck];

		double Today[3] = { YearMonthCheck, DayOfMonth, ThisYearInt };



		int SecondsSinceMidnight = SecondsSinceNewYears - PriorMonthsDays * 24 * 60 * 60;
		int HoursSinceMidnight = SecondsSinceNewYears - PriorMonthsDays * 24 * 60 * 60;






		//Identify Semester
		CurrentSemester = static_cast<double>(ThisYearInt);
		return;
	}


	//listPrinter Function
	void listPrinter(string NamesArray[], int NumberOfNames)
	{
		//Dump all trainings and students 
		for (int i = 0; i < NumberOfNames;i++)
		{
			cout << "\t " << NamesArray[i] << "\n";
		}
		return;
	}


};
