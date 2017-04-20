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

	rc = sqlite3_prepare_v2(db, "SELECT a.First_Name , a.Last_Name,a.username, group_concat(c.Name || \" \" || c.CRN) AS 'Class Name',group_concat(ca.Grade) AS 'Class Grade', group_concat(c.Instructor) AS Instructor FROM  Students AS a LEFT OUTER JOIN Records AS ca ON ca.username = a.username LEFT OUTER JOIN  Classes AS c ON ca.CRN = c.CRN GROUP  BY a.Last_Name, a.First_Name, a.username"
		,
		-1, &stmt, NULL);
	if (rc != SQLITE_OK) {
		cerr << "SELECT failed: " << sqlite3_errmsg(db) << endl;

	}
	while ((rc = sqlite3_step(stmt)) == SQLITE_ROW) {
		const char* firstName = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 0));
		const char* lastName = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 1));
		const char* username = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 2));
		//const char* crn = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 3));
		const char* classname = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 3));
		const char* grade = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 4));
		const char* instructor = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 5));
		// let's assume some fields can be NULL:
		Students.push_back(Student(firstName, lastName, username, classname ? classname : "-", grade ? grade : "-", instructor ? instructor : "-"));
		
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
		rc = sqlite3_prepare_v2(db, "select First Name, Last Name, username from Faculty"
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

