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

int studentRow = 0;
string facultyName = "";
string studentname = "";
string studentUsername = "";
int crn = 0;
gradeDialog::gradeDialog(QWidget *parent)
	: QDialog(parent)
{

	ui.setupUi(this);
}

gradeDialog::gradeDialog(int row, QString facultyUserName, QString studentName)
{
	ui.setupUi(this);
	vector<users>allUsers = populateUsers();
	vector<Student>allStudents = populateStudents();
	vector<classes>allClasses = populateClasses();
	vector<records>allRecords = populateRecords();
	vector<faculty>allFaculty = populateFaculty();

	studentRow = row;
	facultyName = facultyUserName.toStdString();
	studentname = studentName.toStdString();

		for (int j = 0; j < allClasses.size(); j++)
			{
				if (facultyName == allClasses[j].Instructor)
				{
					for (int k = 0; k < allRecords.size(); k++)
					{
						if (allClasses[j].CRN == allRecords[k].Crn)
						{
							crn = allRecords[k].Crn;
							for (int l = 0; l < allStudents.size(); l++)
							{
								if (studentname == allStudents[l].firstName + " " + allStudents[l].lastName)
								{
									studentUsername = allStudents[l].userName;
									if (allRecords[k].Username == studentUsername && allRecords[k].Crn == crn)
									{
										ui.lineEdit->setText(QString::number(allRecords[k].Grade));
									}
								}
							}
							
						}
					}
				}
			}


	this->setSizeGripEnabled(false);
}

void gradeDialog::on_okButton_clicked()
{

	int grade;
	grade = ui.lineEdit->text().toInt();
	changeGrade(studentUsername, grade);

	this->destroy();

}

void gradeDialog::on_cancelButton_clicked()
{
	this->hide();
}