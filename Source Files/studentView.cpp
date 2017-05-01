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

int userlocation = 0;

studentView::studentView(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	ui.usernameLabel->setText("");
	ui.stackedWidget->setCurrentIndex(0);
	ui.backButton->hide();
	
}

studentView::studentView(QString userName)
{
	vector<users>allUsers = populateUsers();
	vector<Student>allStudents = populateStudents();
	vector<classes>allClasses = populateClasses();
	vector<records>allRecords = populateRecords();
	vector<faculty>allFaculty = populateFaculty();
	//QStrings
	QString user = userName;
	QString fullName;
	QString dob;
	QString id;
	QString semester;
	QString gpa;
	QString homeAddress;
	QString emaiAddress;
	QString phoneNumber;
	QString Major;

	//strings
	string username = user.toStdString();
	string name;
	
	
	for (int i = 0; i < allStudents.size(); i++)
	{
		if (allStudents[i].userName == username)
		{
			userlocation = i;
			break;
		}

	}
	name = allStudents[userlocation].firstName + " " + allStudents[userlocation].lastName;

	fullName = QString::fromStdString(name);
	dob = QString::fromStdString(allStudents[userlocation].DOB);
	id = QString::fromStdString(allStudents[userlocation].studentID);
	semester = QString::fromStdString(allStudents[userlocation].semesterEnrolled);
	homeAddress = QString::fromStdString(allStudents[userlocation].homeAddress);
	emaiAddress = QString::fromStdString(allStudents[userlocation].emailAddress);
	phoneNumber = QString::fromStdString(allStudents[userlocation].phoneNumber);
	Major = QString::fromStdString(allStudents[userlocation].Major);

	ui.setupUi(this);

	int class_count = 0;
	double grade = 0;
	for (int i = 0; i < allRecords.size(); i++)
	{
		if (allStudents[userlocation].userName == allRecords[i].Username)
		{
			for (int k = 0; k < allClasses.size(); k++)
			{
				if (allClasses[k].CRN == allRecords[i].Crn)
				{
					grade += allRecords[i].Grade;
					class_count++;
				}
			}

		}
	}
	grade = (grade / class_count) / 25;
	QString GPA = QString::number(grade);

	ui.studentInfoBrowser->setText("Name: " + fullName + "\nUsername: "+ user +"\nStudent ID: "+ id +"\n\nDate of Birth: "+ dob +"\nHome Address: "+homeAddress+"\nPhone Number: "+phoneNumber+"\nEmail: "+emaiAddress+"\n\nMajor: "+Major+"\nSemester Enrolled: "+ semester +"\nSemester GPA: " + GPA);

	ui.usernameLabel->setText(fullName);
	ui.searchButton->hide();
	ui.stackedWidget->setCurrentIndex(0);
	//combobox implement
	ui.classesSearchBox->addItem("CRN");
	ui.classesSearchBox->addItem("Subject");
	ui.classesSearchBox->addItem("Course ID");
	ui.classesSearchBox->addItem("Name");
	ui.classesSearchBox->addItem("Semester");
	ui.classesSearchBox->addItem("Days");
	ui.classesSearchBox->addItem("Instructor");
	ui.classesSearchBox->addItem("Room");
	ui.backButton->hide();
}

void studentView::on_viewScheduleButton_clicked()
{
	vector<users>allUsers = populateUsers();
	vector<Student>allStudents = populateStudents();
	vector<classes>allClasses = populateClasses();
	vector<records>allRecords = populateRecords();
	vector<faculty>allFaculty = populateFaculty();
	ui.stackedWidget->setCurrentIndex(1);
	QString classes;
	ui.label->hide();
	//display schedule
	for (int i = 0; i < allRecords.size(); i++)
	{
		if (allStudents[userlocation].userName == allRecords[i].Username)
		{
			classes += QString::fromStdString(to_string(allRecords[i].Crn)) + " - ";

			for (int k = 0; k < allClasses.size(); k++)
			{
				if (allClasses[k].CRN == allRecords[i].Crn)
				{
					classes += QString::fromStdString(allClasses[k].Subject) + " "
						+ QString::fromStdString(to_string(allClasses[k].courseID)) + " "
						+ QString::fromStdString(allClasses[k].Name) + "\n"
						+ QString::fromStdString(allClasses[k].Semester) + " - "
						+ QString::fromStdString(allClasses[k].classDays) + " "
						+ QString::fromStdString(allClasses[k].classTime) + "\n";

					for (int j = 0; j < allFaculty.size(); j++)
					{
						if (allClasses[k].Instructor == allFaculty[j].userName)
						{
							classes += "Instructor: " + QString::fromStdString(allFaculty[j].firstName) + " " + QString::fromStdString(allFaculty[j].lastName) + "\n";
						}
					}

					classes += "Room: " + QString::fromStdString(allClasses[k].Room) + "\n";
					classes += "Grade: " + QString::number(allRecords[i].Grade) + "\n\n";

				}
			}
			
		}
	}
	ui.semesterScheduleView->setText(classes);

	//change header text
	ui.welcomeLabel->setText("View Current Schedule and Grades");

	//enable back button
	ui.backButton->show();
	ui.backButton->setEnabled(true);

	
}

void studentView::on_manageScheduleButton_clicked()
{
	vector<users>allUsers = populateUsers();
	vector<Student>allStudents = populateStudents();
	vector<classes>allClasses = populateClasses();
	vector<records>allRecords = populateRecords();
	vector<faculty>allFaculty = populateFaculty();

	QString studUsername;
	studUsername = QString::fromStdString(allStudents[userlocation].userName);
	QString sqlUsername = "'" + studUsername + "'";
	ui.label->hide();
	ui.stackedWidget->setCurrentIndex(2);

	//change header text
	ui.welcomeLabel->setText("Add / Remove Classes");

	
	//Open DB
	QSqlDatabase records = QSqlDatabase::addDatabase("QSQLITE");
	records.setDatabaseName("Students.db");
	records.open();

	//create model
	QSqlQueryModel *classesModel = new QSqlQueryModel();
	classesModel->setQuery("SELECT r.CRN,c.Subject,c.Name,c.'Course ID',c.Semester,c.classDays AS Days,c.classTime AS Time,(f.'First Name' || \" \" || f.'Last Name') AS Instructor,c.Room FROM Records AS r LEFT OUTER JOIN Students AS s ON r.username= s.username LEFT OUTER JOIN Classes as c ON r.CRN = c.CRN LEFT OUTER JOIN Faculty AS f ON c.Instructor = f.username WHERE r.username=" + sqlUsername);
	ui.manageClassesView->setModel(classesModel);
	//enable back button
	ui.backButton->show();
	ui.backButton->setEnabled(true);
}

void studentView::on_addClassButton_clicked()
{

	//populate all vectors
	vector<users>allUsers = populateUsers();
	vector<Student>allStudents = populateStudents();
	vector<classes>allClasses = populateClasses();
	vector<records>allRecords = populateRecords();
	vector<faculty>allFaculty = populateFaculty();
	//variables
	string username = allStudents[userlocation].userName;
	QString studUsername;
	studUsername = QString::fromStdString(allStudents[userlocation].userName);
	QString sqlUsername = "'" + studUsername + "'";
	//get entered CRN
	int crnEntered = ui.crnAddRemoveLine->text().toInt();;
	bool realClass = false;
	bool validClass = false;

	//setup fading out of status label
	QGraphicsOpacityEffect *effect1 = new QGraphicsOpacityEffect();
	ui.addRemoveClassLabel->setGraphicsEffect(effect1);
	QPropertyAnimation *fadeOut = new QPropertyAnimation(effect1, "opacity");
	fadeOut->setDuration(4000);
	fadeOut->setStartValue(1.0);
	fadeOut->setEndValue(0.0);
	fadeOut->setEasingCurve(QEasingCurve::InOutQuart);
	connect(fadeOut, &QPropertyAnimation::finished, [=]()
	{
		ui.addRemoveClassLabel->setText("");
	});

	ui.addRemoveClassLabel->setText("");

	//make sure the class label status banner starts off blank every time


	for (int i = 0; i < allClasses.size(); i++)
	{	
		//if the crn they entered = the index of the class currently loaded by index
		if (crnEntered == allClasses[i].CRN)
		{
			//set realclass to true, now we will analyze this class to make sure its not in the student's schedule already
			//checking to make sure it is a real class is the first step
			realClass = true;

			//below is case to handle class already being in the student's schedule
			//class already in student schedule 
			for (int j = 0; j < allRecords.size(); j++)
			{
				if (crnEntered == allRecords[j].Crn && username == allRecords[j].Username)
				{
					ui.addRemoveClassLabel->setStyleSheet("QLabel { background-color : red; color : white; }");
					ui.addRemoveClassLabel->setText("Class already in schedule!");
					fadeOut->start(QAbstractAnimation::DeleteWhenStopped);
					validClass = false;
					break;
				}
				//Add class since it is not in student schedule
				else
				{
					validClass = true;
				}
				
			}
		}
		else if (crnEntered != allClasses[i].CRN && i == allClasses.size())
		{
			realClass = false;
		}


	}
	
	//on the otherhand, if the class is not real at all
	if (!realClass)
	{
		ui.addRemoveClassLabel->setStyleSheet("QLabel { background-color : red; color : white; }");
		ui.addRemoveClassLabel->setText("Class does not exist.");
		fadeOut->start(QAbstractAnimation::DeleteWhenStopped);
	}
	
	if (validClass)
	{
		addClass(username, crnEntered);
		ui.addRemoveClassLabel->setStyleSheet("QLabel { background-color : green; color : white; }");
		ui.addRemoveClassLabel->setText("Class Added!");
		fadeOut->start(QAbstractAnimation::DeleteWhenStopped);
		//Open DB
		QSqlDatabase records = QSqlDatabase::addDatabase("QSQLITE");
		records.setDatabaseName("Students.db");
		records.open();

		//create model
		QSqlQueryModel *classesModel = new QSqlQueryModel();
		classesModel->setQuery("SELECT r.CRN,c.Subject,c.Name,c.'Course ID',c.Semester,c.classDays AS Days,c.classTime AS Time,(f.'First Name' || \" \" || f.'Last Name') AS Instructor,c.Room FROM Records AS r LEFT OUTER JOIN Students AS s ON r.username= s.username LEFT OUTER JOIN Classes as c ON r.CRN = c.CRN LEFT OUTER JOIN Faculty AS f ON c.Instructor = f.username WHERE r.username=" + sqlUsername);
		ui.manageClassesView->setModel(classesModel);
	}

}

void studentView::on_removeClassButton_clicked()
{
	//populate all vectors
	vector<users>allUsers = populateUsers();
	vector<Student>allStudents = populateStudents();
	vector<classes>allClasses = populateClasses();
	vector<records>allRecords = populateRecords();
	vector<faculty>allFaculty = populateFaculty();

	//variables
	string username = allStudents[userlocation].userName;
	QString studUsername;
	studUsername = QString::fromStdString(allStudents[userlocation].userName);
	QString sqlUsername = "'" + studUsername + "'";
	//get entered CRN
	int crnEntered = ui.crnAddRemoveLine->text().toInt();;
	bool realClass = false;
	bool validClass = false;

	//setup fading out of status label
	QGraphicsOpacityEffect *effect1 = new QGraphicsOpacityEffect();
	ui.addRemoveClassLabel->setGraphicsEffect(effect1);
	QPropertyAnimation *fadeOut = new QPropertyAnimation(effect1, "opacity");
	fadeOut->setDuration(4000);
	fadeOut->setStartValue(1.0);
	fadeOut->setEndValue(0.0);
	fadeOut->setEasingCurve(QEasingCurve::InOutQuart);
	connect(fadeOut, &QPropertyAnimation::finished, [=]()
	{
		ui.addRemoveClassLabel->setText("");
	});

	ui.addRemoveClassLabel->setText("");

	//make sure the class label status banner starts off blank every time


	for (int i = 0; i < allClasses.size(); i++)
	{
		//if the crn they entered = the index of the class currently loaded by index
		if (crnEntered == allClasses[i].CRN)
		{
			//set realclass to true, now we will analyze this class to make sure its not in the student's schedule already
			//checking to make sure it is a real class is the first step
			realClass = true;

			//below is case to handle class already being in the student's schedule
			//class already in student schedule 
			for (int j = 0; j < allRecords.size(); j++)
			{
				if (crnEntered == allRecords[j].Crn && username == allRecords[j].Username)
				{
					ui.addRemoveClassLabel->setStyleSheet("QLabel { background-color : green; color : white; }");
					ui.addRemoveClassLabel->setText("Class Removed!");
					fadeOut->start(QAbstractAnimation::DeleteWhenStopped);
					validClass = true;
					break;
				}
				//Add class since it is not in student schedule
				else
				{
					ui.addRemoveClassLabel->setStyleSheet("QLabel { background-color : red; color : white; }");
					ui.addRemoveClassLabel->setText("Class not in schedule!");
					fadeOut->start(QAbstractAnimation::DeleteWhenStopped);
					validClass = false;
				}

			}
		}
		else if (crnEntered != allClasses[i].CRN && i == allClasses.size())
		{
			realClass = false;
		}


	}

	//on the otherhand, if the class is not real at all
	if (!realClass)
	{
		ui.addRemoveClassLabel->setStyleSheet("QLabel { background-color : red; color : white; }");
		ui.addRemoveClassLabel->setText("Class does not exist.");
		fadeOut->start(QAbstractAnimation::DeleteWhenStopped);
	}

	if (validClass)
	{
		removeClass(username, crnEntered);
		//Open DB
		QSqlDatabase records = QSqlDatabase::addDatabase("QSQLITE");
		records.setDatabaseName("Students.db");
		records.open();

		//create model
		QSqlQueryModel *classesModel = new QSqlQueryModel();
		classesModel->setQuery("SELECT r.CRN,c.Subject,c.Name,c.'Course ID',c.Semester,c.classDays AS Days,c.classTime AS Time,(f.'First Name' || \" \" || f.'Last Name') AS Instructor,c.Room FROM Records AS r LEFT OUTER JOIN Students AS s ON r.username= s.username LEFT OUTER JOIN Classes as c ON r.CRN = c.CRN LEFT OUTER JOIN Faculty AS f ON c.Instructor = f.username WHERE r.username=" + sqlUsername);
		ui.manageClassesView->setModel(classesModel);
	}
}

void studentView::on_viewClassesButton_clicked()
{
	ui.label->hide();
	vector<users>allUsers = populateUsers();
	vector<Student>allStudents = populateStudents();
	vector<classes>allClasses = populateClasses();
	vector<records>allRecords = populateRecords();
	vector<faculty>allFaculty = populateFaculty();

	ui.stackedWidget->setCurrentIndex(3);
	//change header text
	ui.welcomeLabel->setText("View Classes");

	//create QT items
	QStandardItemModel *model = new QStandardItemModel(this);
	QList<QStandardItem *> items;
	//set headers name and size
	QStringList headers;
	headers << "CRN" << "Subject"<<"Course ID"<<"Name"<<"Semester"<<"Day"<<"Time"<<"Instructor"<<"Room";
	model->setHorizontalHeaderLabels(headers);
	//populate table
	for (int i = 0; i < allClasses.size()-1; i++)
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
	ui.classesView->setSelectionBehavior(QAbstractItemView::SelectRows);
	ui.classesView->setEditTriggers(QAbstractItemView::NoEditTriggers);
	ui.classesView->setModel(model);
	//enable back button
	ui.backButton->show();
	ui.backButton->setEnabled(true);
}

void studentView::on_searchButton_clicked()
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

void studentView::on_changePasswordButton_clicked()
{
	ui.label->hide();
	ui.stackedWidget->setCurrentIndex(4);

	//change header text
	ui.welcomeLabel->setText("Change Password");
	

	//enable back button
	ui.backButton->show();
	ui.backButton->setEnabled(true);
}

void studentView::on_submitButton_clicked()
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
	string username = allStudents[userlocation].userName;
	string newVerifyPassword;
	//getting user password
	for (int i = 0; i < allUsers.size(); i++)
	{
		if (allStudents[userlocation].userName == allUsers[i].username)
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
	else if (currentPasswordTyped !=currentPassword )
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

void studentView::on_backButton_clicked()
{
	//change header text
	ui.welcomeLabel->setText("Student Portal");
	ui.label->show();
	ui.backButton->hide();
	ui.stackedWidget->setCurrentIndex(0);
}

void studentView::on_logoutButton_clicked()
{
	this->hide();
	loginView *login = new loginView();
	login->show();
}