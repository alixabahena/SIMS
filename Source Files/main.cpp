#include "Header Files\loginView.h"
#include <QtWidgets/QApplication>
#include "Header Files\sqlite3.h"
#include "Header Files\sqlite3ext.h"
#include "Header Files\users.h"
#include "Header Files\databaseManager.h"
#include <QPushButton>
#include <qobject.h>
#include "Header Files\studentView.h"



int main(int argc, char *argv[])
{

	QApplication a(argc, argv);
	loginView w;
	
	w.show();
	return a.exec();
}
 