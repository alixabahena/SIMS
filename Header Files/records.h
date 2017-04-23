#pragma once

#include "stdafx.h"

using namespace std;

class records
{
public:
	string Username;
	string Crn;
	int Grade;
	int Row;
	records();
	records(const string username, const string crn, const int grade, const int row);
};

