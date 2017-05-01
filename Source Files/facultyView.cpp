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

int userloc = 0;
QSqlQueryModel *sqlitemodel = new QSqlQueryModel();

facultyView::facultyView(QWidget *parent)
	: QWidget(parent)
{
	
	ui.setupUi(this);
	ui.backButton->hide();
	ui.stackedWidget->setCurrentIndex(0);
	ui.viewStudentsButton->show();
	ui.returnViewClassesButton->hide();

}

facultyView::facultyView(QString userName)
{
	vector<users>allUsers = populateUsers();
	vector<Student>allStudents = populateStudents();
	vector<classes>allClasses = populateClasses();
	vector<records>allRecords = populateRecords();
	vector<faculty>allFaculty = populateFaculty();

	//QStrings
	QString user = userName;
	QString fullName;
	QString Department;

	//strings
	string username = user.toStdString();
	string name;
	string department;


	for (int i = 0; i < allFaculty.size(); i++)
	{
		if (allFaculty[i].userName == username)
		{
			userloc = i;
			break;
		}

	}
	ui.setupUi(this);

	name = allFaculty[userloc].firstName + " " + allFaculty[userloc].lastName;
	department = allFaculty[userloc].Department;

	fullName = QString::fromStdString(name);
	Department = QString::fromStdString(department);
	
	ui.studentInfoBrowser->setText("Name: " + fullName + "\nUsername: " + user + "\nDepartment: " + Department);

	ui.usernameLabel->setText(fullName);
	ui.stackedWidget->setCurrentIndex(0);
	ui.searchButton->hide();
	ui.backButton->hide();
	ui.returnViewClassesButton->hide();
	//combobox implement
	ui.classesSearchBox->addItem("CRN");
	ui.classesSearchBox->addItem("Subject");
	ui.classesSearchBox->addItem("Course ID");
	ui.classesSearchBox->addItem("Name");
	ui.classesSearchBox->addItem("Semester");
	ui.classesSearchBox->addItem("Days");
	ui.classesSearchBox->addItem("Instructor");
	ui.classesSearchBox->addItem("Room");
}

void facultyView::on_viewScheduleButton_clicked()
{
	ui.label->hide();
	ui.stackedWidget->setCurrentIndex(1);

	vector<users>allUsers = populateUsers();
	vector<Student>allStudents = populateStudents();
	vector<classes>allClasses = populateClasses();
	vector<records>allRecords = populateRecords();
	vector<faculty>allFaculty = populateFaculty();
	ui.stackedWidget->setCurrentIndex(1);
	QString classes;

	//display schedule
	for (int i = 0; i < allClasses.size(); i++)
	{
		if (allFaculty[userloc].userName == allClasses[i].Instructor)
		{
			classes += QString::fromStdString(to_string(allClasses[i].CRN)) + " "
				+ QString::fromStdString(allClasses[i].Subject) + " "
				+ QString::fromStdString(to_string(allClasses[i].courseID)) + " "
				+ QString::fromStdString(allClasses[i].Name) + " "
				+ QString::fromStdString(allClasses[i].Semester) + " "
				+ QString::fromStdString(allClasses[i].classDays) + " "
				+ QString::fromStdString(allClasses[i].classTime) + " ";
			for (int j = 0; j < allFaculty.size(); j++)
			{
				if (allClasses[i].Instructor == allFaculty[j].userName)
				{
					classes += QString::fromStdString(allFaculty[j].firstName) + " " + QString::fromStdString(allFaculty[j].lastName) + " ";
				}
			}

			classes += QString::fromStdString(allClasses[i].Room) + "\n";
		}
	}
	ui.semesterScheduleView->setText(classes);

	//change header text
	ui.welcomeLabel->setText("View Current Schedule");

	//enable back button
	ui.backButton->show();
	ui.backButton->setEnabled(true);
}

void facultyView::on_manageScheduleButton_clicked()
{
	ui.label->hide();
	vector<users>allUsers = populateUsers();
	vector<Student>allStudents = populateStudents();
	vector<classes>allClasses = populateClasses();
	vector<records>allRecords = populateRecords();
	vector<faculty>allFaculty = populateFaculty();

	ui.stackedWidget->setCurrentIndex(2);
	ui.welcomeLabel->setText("Enter Class Grades");
	ui.viewCurrentClassesButton->setEnabled(false);
	ui.editGradeButton->setEnabled(false);
	ui.viewStudentsButton->setEnabled(true);
	//create QT items
	QStandardItemModel *model = new QStandardItemModel(this);
	QList<QStandardItem *> items;
	//set headers name and size
	QStringList headers;
	headers << "CRN" << "Subject" << "Course ID" << "Name" << "Semester" << "Day" << "Time" << "Instructor" << "Room";
	model->setColumnCount(allClasses.size() - 1);
	model->setHorizontalHeaderLabels(headers);
	//populate schedule
	for (int i = 0; i < allClasses.size(); i++)
	{
		if (allFaculty[userloc].userName == allClasses[i].Instructor)
		{
			items.append(new QStandardItem(QString::fromStdString(to_string(allClasses[i].CRN))));
			items.append(new QStandardItem(QString::fromStdString(allClasses[i].Subject)));
			items.append(new QStandardItem(QString::fromStdString(to_string(allClasses[i].courseID))));
			items.append(new QStandardItem(QString::fromStdString(allClasses[i].Name)));
			items.append(new QStandardItem(QString::fromStdString(allClasses[i].Semester)));
			items.append(new QStandardItem(QString::fromStdString(allClasses[i].classDays)));
			items.append(new QStandardItem(QString::fromStdString(allClasses[i].classTime)));
			for (int j = 0; j < allFaculty.size(); j++)
			{
				if (allClasses[i].Instructor == allFaculty[j].userName)
				{
					items.append(new QStandardItem(QString::fromStdString(allFaculty[j].firstName) + " " + QString::fromStdString(allFaculty[j].lastName)));
				}
			}

			items.append(new QStandardItem(QString::fromStdString(allClasses[i].Room)));
			model->appendRow(items);
			items.clear();
		}
	}
	ui.manageClassesView->setSelectionMode(QAbstractItemView::SingleSelection);
	ui.manageClassesView->setSelectionBehavior(QAbstractItemView::SelectRows);
	ui.manageClassesView->setEditTriggers(QAbstractItemView::NoEditTriggers);
	ui.manageClassesView->setModel(model);

	//enable back button
	ui.backButton->show();
	ui.backButton->setEnabled(true);
}
void facultyView::on_viewCurrentClassesButton_clicked()
{
	vector<users>allUsers = populateUsers();
	vector<Student>allStudents = populateStudents();
	vector<classes>allClasses = populateClasses();
	vector<records>allRecords = populateRecords();
	vector<faculty>allFaculty = populateFaculty();

	//disable view students button
	ui.viewCurrentClassesButton->setEnabled(false);
	ui.viewStudentsButton->setEnabled(true);
	//create QT items
	QStandardItemModel *model = new QStandardItemModel(this);
	QList<QStandardItem *> items;
	//set headers name and size
	QStringList headers;
	headers << "CRN" << "Subject" << "Course ID" << "Name" << "Semester" << "Day" << "Time" << "Instructor" << "Room";
	model->setColumnCount(allClasses.size() - 1);
	model->setHorizontalHeaderLabels(headers);
	//populate schedule
	for (int i = 0; i < allClasses.size(); i++)
	{
		if (allFaculty[userloc].userName == allClasses[i].Instructor)
		{
			items.append(new QStandardItem(QString::fromStdString(to_string(allClasses[i].CRN))));
			items.append(new QStandardItem(QString::fromStdString(allClasses[i].Subject)));
			items.append(new QStandardItem(QString::fromStdString(to_string(allClasses[i].courseID))));
			items.append(new QStandardItem(QString::fromStdString(allClasses[i].Name)));
			items.append(new QStandardItem(QString::fromStdString(allClasses[i].Semester)));
			items.append(new QStandardItem(QString::fromStdString(allClasses[i].classDays)));
			items.append(new QStandardItem(QString::fromStdString(allClasses[i].classTime)));
			for (int j = 0; j < allFaculty.size(); j++)
			{
				if (allClasses[i].Instructor == allFaculty[j].userName)
				{
					items.append(new QStandardItem(QString::fromStdString(allFaculty[j].firstName) + " " + QString::fromStdString(allFaculty[j].lastName)));
				}
			}

			items.append(new QStandardItem(QString::fromStdString(allClasses[i].Room)));
			model->appendRow(items);
			items.clear();
		}
	}
	ui.manageClassesView->setSelectionMode(QAbstractItemView::SingleSelection);
	ui.manageClassesView->setSelectionBehavior(QAbstractItemView::SelectRows);
	ui.manageClassesView->setEditTriggers(QAbstractItemView::NoEditTriggers);
	ui.manageClassesView->setModel(model);
	ui.backButton->show();
	ui.editGradeButton->setEnabled(false);
	ui.returnViewClassesButton->hide();

}

void facultyView::on_viewStudentsButton_clicked()
{
	vector<users>allUsers = populateUsers();
	vector<Student>allStudents = populateStudents();
	vector<classes>allClasses = populateClasses();
	vector<records>allRecords = populateRecords();
	vector<faculty>allFaculty = populateFaculty();

	//disable view students button
	ui.backButton->hide();
	ui.returnViewClassesButton->show();
	ui.viewStudentsButton->setEnabled(false);
	ui.viewCurrentClassesButton->setEnabled(true);
	ui.editGradeButton->setEnabled(true);
	//create QT items
	QStandardItemModel *model = new QStandardItemModel(this);
	QList<QStandardItem *> items;
	//set headers name and size
	QStringList headers;
	headers << "Student Name" << "Class Name"<<"Semester" << "Grade";
	model->setHorizontalHeaderLabels(headers);
	QModelIndexList selection = ui.manageClassesView->selectionModel()->selectedRows();
	int row;
	QString CRN;
	// Multiple rows can be selected
	for (int i = 0; i< selection.count(); i++)
	{
		QModelIndex index = selection.at(i);
		row = index.row();
		CRN = index.sibling(row, 0).data().toString();
	}


	QSqlDatabase records = QSqlDatabase::addDatabase("QSQLITE");
	records.setDatabaseName("Students.db");
	records.open();


	sqlitemodel->setQuery("SELECT (ca.First_Name || \" \" || ca.Last_Name) AS 'Student Name', c.CRN, c.Grade FROM Records AS c LEFT OUTER JOIN Students AS ca ON c.username= ca.username WHERE CRN=" + CRN);
	ui.manageClassesView->setModel(sqlitemodel);

	}

void facultyView::on_editGradeButton_clicked()
{
	vector<users>allUsers = populateUsers();
	vector<Student>allStudents = populateStudents();
	vector<classes>allClasses = populateClasses();
	vector<records>allRecords = populateRecords();
	vector<faculty>allFaculty = populateFaculty();
	QModelIndexList selection = ui.manageClassesView->selectionModel()->selectedRows();
	int row;
	QString student;
	QString className;
	for (int i = 0; i< selection.count(); i++)
	{
		QModelIndex index = selection.at(i);
		row = index.row();
		student = index.sibling(row, 0).data().toString();
		className = index.sibling(row, 1).data().toString();
	}
	int crn;
	string username = allFaculty[userloc].userName;
	string classname = className.toStdString();
	QString faculty = QString::fromStdString(username);
	gradeDialog *enterGrade = new gradeDialog(row, faculty, student);
	enterGrade->show();

	if (enterGrade->exec() == 1)
	{
		sqlitemodel->query().exec();
		ui.manageClassesView->setModel(sqlitemodel);

	}

	
}


void facultyView::on_viewClassesButton_clicked()
{
	ui.label->hide();
	ui.stackedWidget->setCurrentIndex(3);
	vector<users>allUsers = populateUsers();
	vector<Student>allStudents = populateStudents();
	vector<classes>allClasses = populateClasses();
	vector<records>allRecords = populateRecords();
	vector<faculty>allFaculty = populateFaculty();

	ui.stackedWidget->setCurrentIndex(3);
	//change header text
	ui.welcomeLabel->setText("View Available Classes");

	//create QT items
	QStandardItemModel *model = new QStandardItemModel(this);
	QList<QStandardItem *> items;
	//set headers name and size
	QStringList headers;
	headers << "CRN" << "Subject" << "Course ID" << "Name" << "Semester" << "Day" << "Time" << "Instructor" << "Room";
	model->setHorizontalHeaderLabels(headers);
	//populate table
	for (int i = 0; i < allClasses.size() - 1; i++)
	{
		model->setRowCount(i);
		items.append(new QStandardItem(QString::fromStdString(to_string(allClasses[i].CRN))));
		items.append(new QStandardItem(QString::fromStdString(allClasses[i].Subject)));
		items.append(new QStandardItem(QString::fromStdString(to_string(allClasses[i].courseID))));
		items.append(new QStandardItem(QString::fromStdString(allClasses[i].Name)));
		items.append(new QStandardItem(QString::fromStdString(allClasses[i].Semester)));
		items.append(new QStandardItem(QString::fromStdString(allClasses[i].classDays)));
		items.append(new QStandardItem(QString::fromStdString(allClasses[i].classTime)));
		items.append(new QStandardItem(QString::fromStdString(allClasses[i].Instructor)));
		items.append(new QStandardItem(QString::fromStdString(allClasses[i].Room)));
		model->appendRow(items);
		items.clear();

	}
	ui.classesView->setEditTriggers(QAbstractItemView::NoEditTriggers);
	ui.classesView->setModel(model);
	//enable back button
	ui.backButton->show();
	ui.backButton->setEnabled(true);
}

void facultyView::on_searchButton_clicked()
{
	vector<users>allUsers = populateUsers();
	vector<Student>allStudents = populateStudents();
	vector<classes>allClasses = populateClasses();
	vector<records>allRecords = populateRecords();
	vector<faculty>allFaculty = populateFaculty();

	//create QT items
	QStandardItemModel *model = new QStandardItemModel(this);
	QList<QStandardItem *> items;
	//set headers name and size
	QStringList headers;
	headers << "CRN" << "Subject" << "Course ID" << "Name" << "Semester" << "Day" << "Time" << "Instructor" << "Room";
	model->setHorizontalHeaderLabels(headers);

	if (ui.classesSearchBox->currentIndex() == 0)
	{
		QString searchClass = ui.searchClassesInput->text();
		string crn = searchClass.toStdString();

		//populate table
		for (int i = 0; i < allClasses.size() - 1; i++)
		{
			string vectorCRN = to_string(allClasses[i].CRN);
			if (vectorCRN.find(crn) != string::npos) {
				items.append(new QStandardItem(QString::fromStdString(to_string(allClasses[i].CRN))));
				items.append(new QStandardItem(QString::fromStdString(allClasses[i].Subject)));
				items.append(new QStandardItem(QString::fromStdString(to_string(allClasses[i].courseID))));
				items.append(new QStandardItem(QString::fromStdString(allClasses[i].Name)));
				items.append(new QStandardItem(QString::fromStdString(allClasses[i].Semester)));
				items.append(new QStandardItem(QString::fromStdString(allClasses[i].classDays)));
				items.append(new QStandardItem(QString::fromStdString(allClasses[i].classTime)));
				items.append(new QStandardItem(QString::fromStdString(allClasses[i].Instructor)));
				items.append(new QStandardItem(QString::fromStdString(allClasses[i].Room)));
				model->appendRow(items);
				items.clear();
			}

		}
		ui.classesView->setEditTriggers(QAbstractItemView::NoEditTriggers);
		ui.classesView->setModel(model);
	}
	else if (ui.classesSearchBox->currentIndex() == 1)
	{
		QString searchClass = ui.searchClassesInput->text().toLower();
		string subject = searchClass.toStdString();

		//populate table
		for (int i = 0; i < allClasses.size() - 1; i++)
		{
			string searchSubject = "";
			for (int j = 0; j < allClasses[i].Subject.length(); j++)
			{
				searchSubject += tolower(allClasses[i].Subject[j]);
			}
			if (searchSubject.find(subject) != string::npos) {
				items.append(new QStandardItem(QString::fromStdString(to_string(allClasses[i].CRN))));
				items.append(new QStandardItem(QString::fromStdString(allClasses[i].Subject)));
				items.append(new QStandardItem(QString::fromStdString(to_string(allClasses[i].courseID))));
				items.append(new QStandardItem(QString::fromStdString(allClasses[i].Name)));
				items.append(new QStandardItem(QString::fromStdString(allClasses[i].Semester)));
				items.append(new QStandardItem(QString::fromStdString(allClasses[i].classDays)));
				items.append(new QStandardItem(QString::fromStdString(allClasses[i].classTime)));
				items.append(new QStandardItem(QString::fromStdString(allClasses[i].Instructor)));
				items.append(new QStandardItem(QString::fromStdString(allClasses[i].Room)));
				model->appendRow(items);
				items.clear();
			}

		}
		ui.classesView->setEditTriggers(QAbstractItemView::NoEditTriggers);
		ui.classesView->setModel(model);
	}
	else if (ui.classesSearchBox->currentIndex() == 2)
	{
		QString searchClass = ui.searchClassesInput->text();
		string courseID = searchClass.toStdString();

		//populate table
		for (int i = 0; i < allClasses.size() - 1; i++)
		{
			string vectorID = to_string(allClasses[i].courseID);

			if (vectorID.find(courseID) != string::npos) {
				items.append(new QStandardItem(QString::fromStdString(to_string(allClasses[i].CRN))));
				items.append(new QStandardItem(QString::fromStdString(allClasses[i].Subject)));
				items.append(new QStandardItem(QString::fromStdString(to_string(allClasses[i].courseID))));
				items.append(new QStandardItem(QString::fromStdString(allClasses[i].Name)));
				items.append(new QStandardItem(QString::fromStdString(allClasses[i].Semester)));
				items.append(new QStandardItem(QString::fromStdString(allClasses[i].classDays)));
				items.append(new QStandardItem(QString::fromStdString(allClasses[i].classTime)));
				items.append(new QStandardItem(QString::fromStdString(allClasses[i].Instructor)));
				items.append(new QStandardItem(QString::fromStdString(allClasses[i].Room)));
				model->appendRow(items);
				items.clear();
			}

		}
		ui.classesView->setEditTriggers(QAbstractItemView::NoEditTriggers);
		ui.classesView->setModel(model);
	}
	else if (ui.classesSearchBox->currentIndex() == 3)
	{
		QString searchClass = ui.searchClassesInput->text().toLower();
		string name = searchClass.toStdString();

		//populate table
		for (int i = 0; i < allClasses.size() - 1; i++)
		{
			string vectorName = "";
			for (int j = 0; j < allClasses[i].Name.length(); j++)
			{
				vectorName += tolower(allClasses[i].Name[j]);
			}
			if (vectorName.find(name) != string::npos) {
				items.append(new QStandardItem(QString::fromStdString(to_string(allClasses[i].CRN))));
				items.append(new QStandardItem(QString::fromStdString(allClasses[i].Subject)));
				items.append(new QStandardItem(QString::fromStdString(to_string(allClasses[i].courseID))));
				items.append(new QStandardItem(QString::fromStdString(allClasses[i].Name)));
				items.append(new QStandardItem(QString::fromStdString(allClasses[i].Semester)));
				items.append(new QStandardItem(QString::fromStdString(allClasses[i].classDays)));
				items.append(new QStandardItem(QString::fromStdString(allClasses[i].classTime)));
				items.append(new QStandardItem(QString::fromStdString(allClasses[i].Instructor)));
				items.append(new QStandardItem(QString::fromStdString(allClasses[i].Room)));
				model->appendRow(items);
				items.clear();
			}

		}
		ui.classesView->setEditTriggers(QAbstractItemView::NoEditTriggers);
		ui.classesView->setModel(model);
	}
	else if (ui.classesSearchBox->currentIndex() == 4)
	{
		QString searchClass = ui.searchClassesInput->text().toLower();
		string semester = searchClass.toStdString();

		//populate table
		for (int i = 0; i < allClasses.size() - 1; i++)
		{
			string vectorSemester = "";
			for (int j = 0; j < allClasses[i].Name.length(); j++)
			{
				vectorSemester += tolower(allClasses[i].Semester[j]);
			}
			if (vectorSemester.find(semester) != string::npos) {
				items.append(new QStandardItem(QString::fromStdString(to_string(allClasses[i].CRN))));
				items.append(new QStandardItem(QString::fromStdString(allClasses[i].Subject)));
				items.append(new QStandardItem(QString::fromStdString(to_string(allClasses[i].courseID))));
				items.append(new QStandardItem(QString::fromStdString(allClasses[i].Name)));
				items.append(new QStandardItem(QString::fromStdString(allClasses[i].Semester)));
				items.append(new QStandardItem(QString::fromStdString(allClasses[i].classDays)));
				items.append(new QStandardItem(QString::fromStdString(allClasses[i].classTime)));
				items.append(new QStandardItem(QString::fromStdString(allClasses[i].Instructor)));
				items.append(new QStandardItem(QString::fromStdString(allClasses[i].Room)));
				model->appendRow(items);
				items.clear();
			}

		}
		ui.classesView->setEditTriggers(QAbstractItemView::NoEditTriggers);
		ui.classesView->setModel(model);
	}
	else if (ui.classesSearchBox->currentIndex() == 5)
	{
		QString searchClass = ui.searchClassesInput->text().toLower();
		string days = searchClass.toStdString();

		//populate table
		for (int i = 0; i < allClasses.size() - 1; i++)
		{
			string vectorDays = "";
			for (int j = 0; j < allClasses[i].Name.length(); j++)
			{
				vectorDays += tolower(allClasses[i].classDays[j]);
			}
			if (vectorDays.find(days) != string::npos) {
				items.append(new QStandardItem(QString::fromStdString(to_string(allClasses[i].CRN))));
				items.append(new QStandardItem(QString::fromStdString(allClasses[i].Subject)));
				items.append(new QStandardItem(QString::fromStdString(to_string(allClasses[i].courseID))));
				items.append(new QStandardItem(QString::fromStdString(allClasses[i].Name)));
				items.append(new QStandardItem(QString::fromStdString(allClasses[i].Semester)));
				items.append(new QStandardItem(QString::fromStdString(allClasses[i].classDays)));
				items.append(new QStandardItem(QString::fromStdString(allClasses[i].classTime)));
				items.append(new QStandardItem(QString::fromStdString(allClasses[i].Instructor)));
				items.append(new QStandardItem(QString::fromStdString(allClasses[i].Room)));
				model->appendRow(items);
				items.clear();
			}

		}
		ui.classesView->setEditTriggers(QAbstractItemView::NoEditTriggers);
		ui.classesView->setModel(model);
	}
	else if (ui.classesSearchBox->currentIndex() == 6)
	{
		QString searchClass = ui.searchClassesInput->text().toLower();
		string instructor = searchClass.toStdString();

		//populate table
		for (int i = 0; i < allClasses.size() - 1; i++)
		{
			string vectorInstructor = "";
			for (int j = 0; j < allClasses[i].Name.length(); j++)
			{
				vectorInstructor += tolower(allClasses[i].Instructor[j]);
			}
			if (vectorInstructor.find(instructor) != string::npos) {
				items.append(new QStandardItem(QString::fromStdString(to_string(allClasses[i].CRN))));
				items.append(new QStandardItem(QString::fromStdString(allClasses[i].Subject)));
				items.append(new QStandardItem(QString::fromStdString(to_string(allClasses[i].courseID))));
				items.append(new QStandardItem(QString::fromStdString(allClasses[i].Name)));
				items.append(new QStandardItem(QString::fromStdString(allClasses[i].Semester)));
				items.append(new QStandardItem(QString::fromStdString(allClasses[i].classDays)));
				items.append(new QStandardItem(QString::fromStdString(allClasses[i].classTime)));
				items.append(new QStandardItem(QString::fromStdString(allClasses[i].Instructor)));
				items.append(new QStandardItem(QString::fromStdString(allClasses[i].Room)));
				model->appendRow(items);
				items.clear();
			}

		}
		ui.classesView->setEditTriggers(QAbstractItemView::NoEditTriggers);
		ui.classesView->setModel(model);
	}
	else if (ui.classesSearchBox->currentIndex() == 7)
	{
		QString searchClass = ui.searchClassesInput->text().toLower();
		string room = searchClass.toStdString();

		//populate table
		for (int i = 0; i < allClasses.size() - 1; i++)
		{
			string vectorRoom = "";
			for (int j = 0; j < allClasses[i].Name.length(); j++)
			{
				vectorRoom += tolower(allClasses[i].Room[j]);
			}
			if (vectorRoom.find(room) != string::npos) {
				items.append(new QStandardItem(QString::fromStdString(to_string(allClasses[i].CRN))));
				items.append(new QStandardItem(QString::fromStdString(allClasses[i].Subject)));
				items.append(new QStandardItem(QString::fromStdString(to_string(allClasses[i].courseID))));
				items.append(new QStandardItem(QString::fromStdString(allClasses[i].Name)));
				items.append(new QStandardItem(QString::fromStdString(allClasses[i].Semester)));
				items.append(new QStandardItem(QString::fromStdString(allClasses[i].classDays)));
				items.append(new QStandardItem(QString::fromStdString(allClasses[i].classTime)));
				items.append(new QStandardItem(QString::fromStdString(allClasses[i].Instructor)));
				items.append(new QStandardItem(QString::fromStdString(allClasses[i].Room)));
				model->appendRow(items);
				items.clear();
			}

		}
		ui.classesView->setEditTriggers(QAbstractItemView::NoEditTriggers);
		ui.classesView->setModel(model);
	}
}

void facultyView::on_changePasswordButton_clicked()
{
	ui.label->hide();
	ui.stackedWidget->setCurrentIndex(4);
	ui.welcomeLabel->setText("Change Current Password");
	//enable back button
	ui.backButton->show();
	ui.backButton->setEnabled(true);
}

void facultyView::on_submitButton_clicked()
{
	vector<users>allUsers = populateUsers();
	vector<Student>allStudents = populateStudents();
	vector<classes>allClasses = populateClasses();
	vector<records>allRecords = populateRecords();
	vector<faculty>allFaculty = populateFaculty();

	QString newPassword;
	string strPassword = ui.currentPasswordField->text().toStdString();
	string strPasswordHash = WaffleStringHash(strPassword);
	QString currentPasswordTyped = strPasswordHash.c_str();
	QString currentPassword;
	string username = allStudents[userloc].userName;
	string newVerifyPassword;
	//getting user password
	for (int i = 0; i < allUsers.size(); i++)
	{
		if (allStudents[userloc].userName == allUsers[i].username)
		{
			currentPassword = QString::fromStdString(allUsers[i].password);
			break;
		}
	}

	//getcurrentPassword
	if (strPassword == "")
	{
		ui.passwordChangeStatusLabel->setStyleSheet("QLabel { background-color : red; color : white; }");
		ui.passwordChangeStatusLabel->setText("Current password can not be blank!");
	}
	else if (strPassword.size() > 39)
	{
		ui.passwordChangeStatusLabel->setStyleSheet("QLabel { background-color : yellow; color : white; }");
		ui.passwordChangeStatusLabel->setText("Password cannot be over 39 characters!");
	}
	else if (currentPasswordTyped != currentPassword)
	{
		ui.passwordChangeStatusLabel->setStyleSheet("QLabel { background-color : red; color : white; }");
		ui.passwordChangeStatusLabel->setText("Incorrect current password!");
	}
	else
	{
		newPassword = ui.newPasswordField->text();
		if (newPassword != ui.verifyNewPasswordField->text())
		{
			ui.passwordChangeStatusLabel->setStyleSheet("QLabel { background-color : red; color : white; }");
			ui.passwordChangeStatusLabel->setText("The new password does not match!");
		}
		else if (newPassword == "")
		{
			ui.passwordChangeStatusLabel->setStyleSheet("QLabel { background-color : red; color : white; }");
			ui.passwordChangeStatusLabel->setText("The new password can not be blank!");
		}
		else
		{
			ui.currentPasswordField->setText("");
			ui.newPasswordField->setText("");
			ui.verifyNewPasswordField->setText("");

			newVerifyPassword = newPassword.toStdString();
			changePassword(username, newVerifyPassword);

			ui.passwordChangeStatusLabel->setStyleSheet("QLabel { background-color : green; color : white; }");
			ui.passwordChangeStatusLabel->setText("Password has been changed!");
		}


	}
}

void facultyView::on_logoutButton_clicked()
{
	ui.label->hide();
	this->hide();
	loginView *login = new loginView();
	login->show();
}
void facultyView::on_backButton_clicked()
{
	//change header text
	ui.welcomeLabel->setText("Faculty Portal");
	ui.backButton->hide();
	ui.stackedWidget->setCurrentIndex(0);
	ui.label->show();
	ui.returnViewClassesButton->hide();
}
