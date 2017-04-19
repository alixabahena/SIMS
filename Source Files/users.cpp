#include "Header Files\stdafx.h"

using namespace std;

users::users()
{
	username = "administrator";
	password = "password";
	access_type = "admin";
}

users::users(const string & Username, const string & Password, const string & Access_Type)
{
	username = Username;
	password = Password;
	access_type = Access_Type;

}