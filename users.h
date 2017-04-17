#pragma once

#include <iostream>
#include <string>
#include "sqlite3.h"
#include <vector>
#include "loginView.h"

using namespace std;


class users
{
public:
	string username;
	string password;
	string access_type;
	users();
	users(const string & Username, const string & Password, const string & Access_Type);
};

