#pragma once

class dateClass
{
public:
	dateClass(); //Initializes blank date
	dateClass(int val1, int val2, int val3); //intializes to month (val1), day (val2) and year (val3)
	dateClass(int val1); // if val1=0 initializes to todays date
	~dateClass();

	void inputDates();
	//Precondition: None
	//Postcondition: montVal, dayVal, and yearVal are filled with user input (with validation).

	double dateToSeconds();
	// Precondition: User inputs dates in format mm dd yyyy
	// Postcondition: Returns how many seconds from jan 1 1970 to 12:00AM on the date inputed

	//Accessor Functions
	int getmonthVal();
	//Preconditions: None
	//Postconditions: monthVal is returned by function

	int getdayVal();
	int getyearVal();
	double getsecVal();

	//Mutator Functions
	int setmonthVal(int value);
		//Preconditions: Value to set monthVall to is given in value
		//Postcondition: monthVal is set to value, value is also returned
	int setdayVal(int value);
	int setyearVal(int value);
	double setsecVal(double value);



private:

	int monthVal, dayVal, yearVal;
	double secVal;


};

