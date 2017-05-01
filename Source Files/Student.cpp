#include "Header Files\stdafx.h"

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

Student::Student()
{
	firstName = "Administrator";
	lastName = "Test";
	userName = "administrator";

}

Student::Student(const string & FirstName, const string& LastName, string username,string id, string dob, string enrolledsemester,string homeaddress, string emailaddress, string phonenumber, string major, string className, string grade, string instructor)
{
	lastName = LastName;
	firstName = FirstName;
	userName = username;
	studentID = id;
	DOB = dob;
	semesterEnrolled = enrolledsemester;
	homeAddress = homeaddress;
	emailAddress = emailaddress;
	phoneNumber = phonenumber;
	Major = major;
	classes.push_back(className);
	classGrades.push_back(grade);


}


void Student::SetLastName(string LastName)
{
	lastName = LastName;
}

void Student::SetFirstName(string FirstName)
{
	firstName = FirstName;
}

void Student::SetUserName(string UserName)
{
	userName = UserName;
}

void Student::SetSemesterEnrolled(string SemesterEnrolled)
{
	semesterEnrolled = SemesterEnrolled;
}

void Student::SetStudentID(string StudentID)
{
	studentID = StudentID;
}

void Student::AddClass(string Class)
{
	classes.push_back(Class);
}

void Student::AddClassGrade(string ClassGrade)
{
	classGrades.push_back(ClassGrade);
}

void Student::SetGPA(float GPA)
{
	gpa = GPA;
}

void Student::setDOB(string dob)
{
	DOB = dob;
}

void Student::sethomeAddress(string homeaddress)
{
	homeAddress = homeaddress;
}

void Student::setemailAddress(string emailaddress)
{
	emailAddress = emailaddress;
}

void Student::setphoneNumber(string phonenumber)
{
	phoneNumber = phonenumber;
}

void Student::setMajor(string major)
{
	Major = major;
}

string Student::GetLastName()
{
	return lastName;
}

string Student::GetFirstName()
{
	return firstName;
}

#undef GetUserName
string Student::GetUserName()
{
	return userName;
}

string Student::GetDOB()
{
	return DOB;
}

string Student::GetSemesterEnrolled()
{
	return semesterEnrolled;
}

string Student::GetStudentID()
{
	return studentID;
}

vector<string> Student::GetClasses()
{
	return classes;
}

vector<string> Student::GetClassGrades()
{
	return classGrades;
}

float Student::GetGPA()
{
	return gpa;
}

string Student::GethomeAddress()
{
	return homeAddress;
}

string Student::GetemailAddress()
{
	return emailAddress;
}

string Student::GetphoneNumber()
{
	return phoneNumber;
}

string Student::GetMajor()
{
	return Major;
}

