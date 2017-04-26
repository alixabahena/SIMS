#include "Header Files\stdafx.h"

using namespace std;


vector<Student> populateStudents()
{
	sqlite3 *db;
	char *zErrMsg = 0;
	int rc;
	char *sql;
	const char* data = "";
	const char* dbName = "Students.db";
	vector<Student> Students;
	sqlite3_stmt *stmt;
	/* Open database */
	rc = sqlite3_open(dbName, &db);

	rc = sqlite3_prepare_v2(db, "SELECT a.First_Name , a.Last_Name,a.username,a.ID,a.DOB,a.enrolledSemester,a.homeAddress,a.emailAddress,a.phoneNum,a.Major,group_concat(c.Name || \" \" || c.CRN) AS 'Class Name',group_concat(ca.Grade) AS 'Class Grade', group_concat(c.Instructor) AS Instructor FROM  Students AS a LEFT OUTER JOIN Records AS ca ON ca.username = a.username LEFT OUTER JOIN  Classes AS c ON ca.CRN = c.CRN GROUP  BY a.Last_Name, a.First_Name, a.username"
		,
		-1, &stmt, NULL);
	if (rc != SQLITE_OK) {
		cerr << "SELECT failed: " << sqlite3_errmsg(db) << endl;

	}
	while ((rc = sqlite3_step(stmt)) == SQLITE_ROW) {
		const char* firstName = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 0));
		const char* lastName = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 1));
		const char* username = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 2));
		const char* id = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 3));
		const char* dob = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 4));
		const char* enrolledSemester = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 5));
		const char* homeaddress = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 6));
		const char* emailaddress = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 7));
		const char* phonenumber = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 8));
		const char* major = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 9));
		const char* classname = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 10));
		const char* grade = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 11));
		const char* instructor = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 12));
		// let's assume some fields can be NULL:
		Students.push_back(Student(firstName, lastName, username, id ,dob , enrolledSemester,homeaddress,emailaddress,phonenumber,major,classname ? classname : "-", grade ? grade : "-", instructor ? instructor : "-"));
		
	}
	if (rc != SQLITE_DONE) {
		cerr << "SELECT failed: " << sqlite3_errmsg(db) << endl;
		// if you return/throw here, don't forget the finalize
	}
	sqlite3_finalize(stmt);

	return Students;
}

vector<faculty> populateFaculty()
{
	sqlite3 *db;
	char *zErrMsg = 0;
	int rc;
	char *sql;
	const char* data = "";
	const char* dbName = "Students.db";
	vector<faculty> Faculty;
	sqlite3_stmt *stmt;
	/* Open database */
	rc = sqlite3_open(dbName, &db);
		;
		rc = sqlite3_prepare_v2(db, "select [First Name], [Last Name], username from Faculty"
		,
		-1, &stmt, NULL);
	if (rc != SQLITE_OK) {
		cerr << "SELECT failed: " << sqlite3_errmsg(db) << endl;

	}
	while ((rc = sqlite3_step(stmt)) == SQLITE_ROW) {
		const char* firstName = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 0));
		const char* lastName = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 1));
		const char* username = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 2));
		// let's assume some fields can be NULL:
		Faculty.push_back(faculty(firstName, lastName, username));

	}
	if (rc != SQLITE_DONE) {
		cerr << "SELECT failed: " << sqlite3_errmsg(db) << endl;
		// if you return/throw here, don't forget the finalize
	}
	sqlite3_finalize(stmt);

	return Faculty;
}

vector<classes> populateClasses()
{
	sqlite3 *db;
	char *zErrMsg = 0;
	int rc;
	char *sql;
	const char* data = "";
	const char* dbName = "Students.db";
	vector<classes> Classes;
	sqlite3_stmt *stmt;
	/* Open database */
	rc = sqlite3_open(dbName, &db);
	;
	rc = sqlite3_prepare_v2(db, "SELECT CRN,Subject,[Course ID],Name,Semester,classDays,classTime,Instructor,Room FROM Classes"
		,
		-1, &stmt, NULL);
	if (rc != SQLITE_OK) {
		cerr << "SELECT failed: " << sqlite3_errmsg(db) << endl;

	}
	while ((rc = sqlite3_step(stmt)) == SQLITE_ROW) {
		const int* crn = reinterpret_cast<const int*>(sqlite3_column_int(stmt, 0));
		int CRN = (int)crn;
		const char* subject = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 1));
		const int* courseid = reinterpret_cast<const int*>(sqlite3_column_int(stmt, 2));
		int courseID = (int)courseid;
		const char* name = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 3));
		const char* semester = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 4));
		const char* classdays = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 5));
		const char* classtime = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 6));
		const char* instructor = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 7));
		const char* room = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 8));
		// let's assume some fields can be NULL:
		Classes.push_back(classes(CRN,subject,courseID,name,semester,classdays,classtime,instructor,room));

	}
	if (rc != SQLITE_DONE) {
		cerr << "SELECT failed: " << sqlite3_errmsg(db) << endl;
		// if you return/throw here, don't forget the finalize
	}
	sqlite3_finalize(stmt);

	return Classes;
}

vector<users> populateUsers()
{
	sqlite3 *db;
	char *zErrMsg = 0;
	int rc;
	char *sql;
	const char* data = "";
	const char* dbName = "Students.db";
	vector<users> allusers;
	sqlite3_stmt *stmt;
	/* Open database */
	rc = sqlite3_open(dbName, &db);
	rc = sqlite3_prepare_v2(db, "Select username, password, access_type from Users"
		,
		-1, &stmt, NULL);
	if (rc != SQLITE_OK) {
		cerr << "SELECT failed: " << sqlite3_errmsg(db) << endl;
		
	}
	while ((rc = sqlite3_step(stmt)) == SQLITE_ROW) {
		const char* username = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 0));
		const char* password = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 1));
		const char* accesstype = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 2));
		// let's assume some fields can be NULL:
		allusers.push_back(users(username, password, accesstype));
	
	}
	if (rc != SQLITE_DONE) {
		cerr << "SELECT failed: " << sqlite3_errmsg(db) << endl;
		// if you return/throw here, don't forget the finalize
	}
	sqlite3_finalize(stmt);

	return allusers;
}

vector<records> populateRecords()
{
	sqlite3 *db;
	char *zErrMsg = 0;
	int rc;
	char *sql;
	const char* data = "";
	const char* dbName = "Students.db";
	vector<records> allrecords;
	sqlite3_stmt *stmt;
	/* Open database */
	rc = sqlite3_open(dbName, &db);
	rc = sqlite3_prepare_v2(db, "Select username, CRN, Grade,row from Records"
		,
		-1, &stmt, NULL);
	if (rc != SQLITE_OK) {
		cerr << "SELECT failed: " << sqlite3_errmsg(db) << endl;

	}
	while ((rc = sqlite3_step(stmt)) == SQLITE_ROW) {
		const char* username = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 0));
		const char* crn = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 1));
		int CRN = (int)crn;
		const char* grade = reinterpret_cast<const char*>(sqlite3_column_int(stmt, 2));
		int Grade = (int)grade;
		const char* row = reinterpret_cast<const char*>(sqlite3_column_int(stmt, 3));
		int Row = (int)row;
		// let's assume some fields can be NULL:
		allrecords.push_back(records(username, CRN, Grade, Row));

	}
	if (rc != SQLITE_DONE) {
		cerr << "SELECT failed: " << sqlite3_errmsg(db) << endl;
		// if you return/throw here, don't forget the finalize
	}
	sqlite3_finalize(stmt);

	return allrecords;
}

