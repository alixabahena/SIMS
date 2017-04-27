#include "Header Files\stdafx.h"

using namespace std;


faculty::faculty()
{
	firstName = "Bob";
	lastName = "Dole";
	userName = "faculty";
}

faculty::faculty(string firstname, string lastname, string username, string department)
{
	firstName = firstname;
	lastName = lastname;
	userName = username;
	Department = department;
}
