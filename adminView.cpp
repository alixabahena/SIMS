
#include "loginView.h"
#include <qsqldatabase.h>
#include <qdir.h>
#include <qsqlquery.h>
#include <string>
#include "sqlite3.h"
#include <vector>
#include "users.h"
#include "databaseManager.h"
#include "studentView.h"
#include "adminView.h"



adminView::adminView(QWidget *parent)
	: QMainWindow(parent)
{

	ui.setupUi(this);
}
