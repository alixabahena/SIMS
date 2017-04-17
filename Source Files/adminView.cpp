
#include "Header Files\loginView.h"
#include <qsqldatabase.h>
#include <qdir.h>
#include <qsqlquery.h>
#include <string>
#include "Header Files\sqlite3.h"
#include <vector>
#include "Header Files\users.h"
#include "Header Files\databaseManager.h"
#include "Header Files\studentView.h"
#include "Header Files\adminView.h"



adminView::adminView(QWidget *parent)
	: QMainWindow(parent)
{

	ui.setupUi(this);
}
