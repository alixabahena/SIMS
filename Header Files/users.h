#pragma once

#include "stdafx.h"

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

