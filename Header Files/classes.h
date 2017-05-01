#pragma once

/*This file is part of SIMS (Student Information Management System).

SIMS is free software : you can redistribute it and / or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

SIMS is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with SIMS.If not, see <http://www.gnu.org/licenses/>.
*/

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
