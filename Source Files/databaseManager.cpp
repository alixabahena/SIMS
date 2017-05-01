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
		rc = sqlite3_prepare_v2(db, "select [First Name], [Last Name], username, Department from Faculty"
		,
		-1, &stmt, NULL);
	if (rc != SQLITE_OK) {
		cerr << "SELECT failed: " << sqlite3_errmsg(db) << endl;

	}
	while ((rc = sqlite3_step(stmt)) == SQLITE_ROW) {
		const char* firstName = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 0));
		const char* lastName = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 1));
		const char* username = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 2));
		const char* department = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 3));
		// let's assume some fields can be NULL:
		Faculty.push_back(faculty(firstName, lastName, username,department));

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
	rc = sqlite3_prepare_v2(db, "SELECT CRN,Subject,[Course ID],Name,Semester,classDays,classTime,Instructor,Room FROM Classes"
		,
		-1, &stmt, NULL);
	if (rc != SQLITE_OK) {
		cerr << "SELECT failed: " << sqlite3_errmsg(db) << endl;

	}
	while ((rc = sqlite3_step(stmt)) == SQLITE_ROW) {

		//there's probably a better way to cast this, but this works in c++ for now
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
		const char* crn = reinterpret_cast<const char*>(sqlite3_column_int(stmt, 1));
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

void changePassword(string username, string password)
{
	sqlite3 *db;
	char *zErrMsg = 0;
	int rc;
	char *sql;
	const char* data = "";
	const char* dbName = "Students.db";
	sqlite3_stmt *stmt;
	char *q;
	const char *userName = username.c_str();
	string hash = WaffleStringHash(password);
	const char *passWord = hash.c_str();
	rc = sqlite3_open(dbName, &db);
	q = "UPDATE Users SET [password]=?1 WHERE [username]=?2";
	if ( rc = sqlite3_prepare_v2(db, q, strlen(q), &stmt, 0) == SQLITE_OK) {
		sqlite3_reset(stmt);
		sqlite3_bind_text(stmt, 1, passWord,strlen(passWord), 0);
		sqlite3_bind_text(stmt, 2, userName, strlen(userName), 0); // file path
		sqlite3_step(stmt);   // prepare statemnt Ready
		sqlite3_finalize(stmt);
	}
	
	int ecode = sqlite3_errcode(db);
}

void changeGrade(string username, int grade)
{
	sqlite3 *db;
	char *zErrMsg = 0;
	int rc;
	char *sql;
	const char* data = "";
	const char* dbName = "Students.db";
	sqlite3_stmt *stmt;
	char *q;
	const char *userName = username.c_str();
	int Grade = grade;
	rc = sqlite3_open(dbName, &db);
	q = "UPDATE Records SET [Grade]=?1 WHERE [username]=?2";
	if (rc = sqlite3_prepare_v2(db, q, strlen(q), &stmt, 0) == SQLITE_OK) {
		sqlite3_reset(stmt);
		sqlite3_bind_int(stmt, 1,Grade);
		sqlite3_bind_text(stmt, 2, userName, strlen(userName), 0); // file path
		sqlite3_step(stmt);   // prepare statemnt Ready
		sqlite3_finalize(stmt);
	}

	int ecode = sqlite3_errcode(db);
}

void addClass(string username, int CRN)
{
	sqlite3 *db;
	char *zErrMsg = 0;
	int rc;
	char *sql;
	const char* data = "";
	const char* dbName = "Students.db";
	sqlite3_stmt *stmt;
	char *q;
	const char *userName = username.c_str();
	int crn = CRN;
	rc = sqlite3_open(dbName, &db);
	q = "INSERT INTO Records (CRN,username) VALUES (?1,?2)";
	if (rc = sqlite3_prepare_v2(db, q, strlen(q), &stmt, 0) == SQLITE_OK) {
		sqlite3_reset(stmt);
		sqlite3_bind_int(stmt, 1, CRN);
		sqlite3_bind_text(stmt, 2, userName, strlen(userName), 0); // file path
		sqlite3_step(stmt);   // prepare statemnt Ready
		sqlite3_finalize(stmt);
	}

	int ecode = sqlite3_errcode(db);
}

void removeClass(string username, int CRN)
{
	sqlite3 *db;
	char *zErrMsg = 0;
	int rc;
	char *sql;
	const char* data = "";
	const char* dbName = "Students.db";
	sqlite3_stmt *stmt;
	char *q;
	const char *userName = username.c_str();
	int crn = CRN;
	rc = sqlite3_open(dbName, &db);
	q = "DELETE FROM Records WHERE CRN=?1 AND username=?2";
	if (rc = sqlite3_prepare_v2(db, q, strlen(q), &stmt, 0) == SQLITE_OK) {
		sqlite3_reset(stmt);
		sqlite3_bind_int(stmt, 1, CRN);
		sqlite3_bind_text(stmt, 2, userName, strlen(userName), 0); // file path
		sqlite3_step(stmt);   // prepare statemnt Ready
		sqlite3_finalize(stmt);
	}

	int ecode = sqlite3_errcode(db);
}