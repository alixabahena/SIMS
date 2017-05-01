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
class Student
{
public:
	//member variables
	string lastName, firstName, userName, semesterEnrolled, DOB, studentID,homeAddress,emailAddress,phoneNumber, Major;
	vector <string> classes, classGrades;
	float gpa;
	Student();
	Student(const string& FirstName, const string& LastName, string username,string id, string dob, string enrolledsemester, string homeaddress, string emailaddress, string phonenumber, string major, string className, string grade, string instructor);

	void SetLastName(string LastName);
	void SetFirstName(string FirstName);
	void SetUserName(string UserName);
	void SetSemesterEnrolled(string SemesterEnrolled);
	void SetStudentID(string StudentID);
	void AddClass(string Class);
	void AddClassGrade(string ClassGrade);
	void SetGPA(float GPA);
	void setDOB(string dob);
	void sethomeAddress(string homeaddress);
	void setemailAddress(string emailaddress);
	void setphoneNumber(string phonenumber);
	void setMajor(string major);

	string GetLastName();
	string GetFirstName();
	string GetUserName();
	string GetDOB();
	string GetSemesterEnrolled();
	string GetStudentID();
	string GethomeAddress();
	string GetemailAddress();
	string GetphoneNumber();
	string GetMajor();
	vector <string> GetClasses();
	vector <string> GetClassGrades();
	float GetGPA();
};