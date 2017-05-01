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

#include <qmainwindow.h>
#include <qobject.h>
#include <qwidget.h>
#include <ui_adminView.h>


class adminView : public QMainWindow
{
	Q_OBJECT

public:
	adminView(QWidget *parent = Q_NULLPTR);
	adminView(QString userName);

	public slots:
	
	void on_editUsersButton_clicked();
	void on_editFacultyButton_clicked();
	void on_editStudentsButton_clicked();
	void on_editRecordsButton_clicked();
	void on_editClassesButton_clicked();

	void on_changePasswordButton_clicked();
	void on_submitButton_clicked();

	void on_logoutButton_clicked();
	void on_backButton_clicked();

	void on_addItemButton_clicked();
	void on_removeItemButton_clicked();
	void on_saveButton_clicked();

	private slots:
private:
	Ui::adminView ui;

};
