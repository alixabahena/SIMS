#pragma once

#include "stdafx.h"

using namespace std;

class records
{
public:
	string Username;
	int Crn;
	int Grade;
	int Row;
	records();
	records(const string username, const int crn, const int grade, const int row);
};

