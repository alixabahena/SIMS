#include <iostream>
#include <string>
#include "sqlite3.h"
#include "users.h"
#include "loginView.h"
#include <vector>
#include "databaseManager.h"

using namespace std;


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


