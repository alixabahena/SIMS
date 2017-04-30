#pragma once
#include "Student.h"
#include "users.h"
#include "faculty.h"
#include "classes.h"
#include "records.h"

vector<users> populateUsers();
vector<Student> populateStudents();
vector<faculty> populateFaculty();
vector<classes> populateClasses();
vector<records> populateRecords();
void changePassword(string username,string password);
void changeGrade(string username, int grade);
void addClass(string username, int CRN);
void removeClass(string username, int CRN);