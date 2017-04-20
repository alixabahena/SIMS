#include "Header Files\stdafx.h"

using namespace std;


faculty::faculty()
{
	username = "faculty";
	firstName = "Bob";
	lastName = "Dole";
}

faculty::faculty(const string & Username, const string & FirstName, const string & LastName)
{
	username = Username;
	firstName = FirstName;
	lastName = LastName;

}