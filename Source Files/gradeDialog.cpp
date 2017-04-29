#include "Header Files\stdafx.h"

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

	this->hide();

}

void gradeDialog::on_cancelButton_clicked()
{
	this->hide();
}