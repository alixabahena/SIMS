#pragma once
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