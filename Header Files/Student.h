#pragma once
#include "stdafx.h"
using namespace std;
class Student
{
public:
	//member variables
	string lastName, firstName, userName, semesterEnrolled;
	unsigned long studentID;
	vector <string> classes, classGrades;
	float gpa;
	Student();
	Student(const string& FirstName, const string& LastName, string username, string className, string grade, string instructor);

	void SetLastName(string LastName);
	void SetFirstName(string FirstName);
	void SetUserName(string UserName);
	void SetSemesterEnrolled(string SemesterEnrolled);
	void SetStudentID(unsigned long StudentID);
	void AddClass(string Class);
	void AddClassGrade(string ClassGrade);
	void SetGPA(float GPA);

	string GetLastName();
	string GetFirstName();
	string GetUserName();
	string GetSemesterEnrolled();
	unsigned long GetStudentID();
	vector <string> GetClasses();
	vector <string> GetClassGrades();
	float GetGPA();

};