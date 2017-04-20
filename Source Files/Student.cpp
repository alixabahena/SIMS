#include "Header Files\stdafx.h"


Student::Student()
{
	firstName = "Administrator";
	lastName = "Test";
	userName = "administrator";

}

Student::Student(const string & FirstName, const string& LastName, string username, string className, string grade, string instructor)
{
	lastName = LastName;
	firstName = FirstName;
	userName = username;
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

void Student::SetStudentID(unsigned long StudentID)
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

string Student::GetSemesterEnrolled()
{
	return semesterEnrolled;
}

unsigned long Student::GetStudentID()
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