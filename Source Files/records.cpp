#include "Header Files\stdafx.h"

records::records()
{
	Username = "bobdole";
	Crn = "12345";
	Grade = 99;
	Row = 0;
}

records::records(const string username, const string crn, const int grade, const int row)
{
	Username = username;
	Crn = crn;
	Grade = grade;
	Row = row;
}
