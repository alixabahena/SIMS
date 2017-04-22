#include "Header Files\stdafx.h"


Student::Student()
{
	firstName = "Administrator";
	lastName = "Test";
	userName = "administrator";

}

Student::Student(const string & FirstName, const string& LastName, string username,string id, string dob, string enrolledsemester, string className, string grade, string instructor)
{
	lastName = LastName;
	firstName = FirstName;
	userName = username;
	studentID = id;
	DOB = dob;
	semesterEnrolled = enrolledsemester;
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

string Student::GetLastName()
{
	return lastName;
}

string Student::GetFirstName()
{
	return firstName;
}

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