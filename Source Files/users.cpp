
#include <iostream>
#include <string>
#include "Header Files\sqlite3.h"
#include <vector>
#include "Header Files\loginView.h"
#include "Header Files\users.h"
#include "Header Files\databaseManager.h"

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