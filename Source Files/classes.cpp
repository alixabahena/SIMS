#include "Header Files\stdafx.h"

using namespace std;

classes::classes(int crn, string subject, int courseid, string name, string semester, string classdays, string classtime, string instructor, string room)
{
	CRN = crn;
	Subject = subject;
	courseID = courseid;
	Name = name;
	Semester = semester;
	classDays = classdays;
	classTime = classtime;
	Instructor = instructor;
	Room = room;
}

string classes::getSubject()
{
	return Subject;
}
