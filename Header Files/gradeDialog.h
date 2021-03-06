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

#include <qdialog.h>
#include <qobject.h>
#include <qwidget.h>
#include <ui_gradeDialog.h>


class gradeDialog : public QDialog
{
	Q_OBJECT

public:
	gradeDialog(QWidget *parent = Q_NULLPTR);
	gradeDialog(int row,QString facultyUserName, QString student);

	public slots:
	void on_okButton_clicked();
	void on_cancelButton_clicked();

	private slots:


private:
	Ui::gradeDialog ui;

};
