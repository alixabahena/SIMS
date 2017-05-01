#pragma once

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

//header files
#include "loginView.h"
#include "users.h"
#include "databaseManager.h"
#include "studentView.h"
#include "adminView.h"
#include "Student.h"
#include "facultyView.h"
#include "faculty.h"
#include "classes.h"
#include "records.h"
#include "gradeDialog.h"
#include "qgraphicseffect.h"
#include "qpropertyanimation.h"

#include <Windows.h>

//QT
#include <qsqldatabase.h>
#include <qdir.h>
#include <qsqlquery.h>
#include <QWidget>
#include <QtWidgets/QMainWindow>
#include "qmessagebox.h"
#include <qobject.h>
#include <QtWidgets/QApplication>
#include <QPushButton>
#include <qmainwindow.h>
#include <qwidget.h>
#include <qboxlayout.h>
#include <qkeyeventtransition.h>
#include <qevent.h>
#include <qstandarditemmodel.h>
#include <qlayout.h>
#include "qapplication.h"
#include <QStyle>
#include <QDesktopWidget>
#include <qdialog.h>
#include <string.h>
#include <qsqlquerymodel.h>
#include <qsqlquery.h>
#include <qsqltablemodel.h>

//normal libraries
#include <string>
#include <vector>
#include <iostream>
#include <fstream>


//Sqlite
#include "Header Files\sqlite3.h"

//ui files
#include "ui_studentView.h"
#include "ui_adminView.h"
#include "ui_loginView.h"
#include "ui_facultyView.h"
#include <ui_gradeDialog.h>

#include "Header Files\hash.h"
