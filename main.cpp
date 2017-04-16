#include "QtGuiApplication1.h"
#include <QtWidgets/QApplication>
#include "sqlite3.h"
#include "sqlite3ext.h"
#include "users.h"
#include "databaseManager.h"
#include <QPushButton>
#include <qobject.h>
#include "studentView.h"



int main(int argc, char *argv[])
{

	QApplication a(argc, argv);
	QtGuiApplication1 w;
	
	w.show();
	return a.exec();
}
 