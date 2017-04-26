#pragma once

#include "stdafx.h"

using namespace std;

class classes
{
public:
	int CRN, courseID;
	string Subject, Name, Semester, classDays, classTime, Instructor, Room;
	classes(int crn, string subject,int courseid, string name, string semester, string classdays, string classtime, string instructor, string room);
	string getSubject();

};
