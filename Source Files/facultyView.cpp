#include "Header Files\stdafx.h"

int userloc = 0;

facultyView::facultyView(QWidget *parent)
	: QWidget(parent)
{
	
	ui.setupUi(this);
	ui.backButton->hide();
	ui.stackedWidget->setCurrentIndex(0);

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
	ui.backButton->hide();
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
	vector<users>allUsers = populateUsers();
	vector<Student>allStudents = populateStudents();
	vector<classes>allClasses = populateClasses();
	vector<records>allRecords = populateRecords();
	vector<faculty>allFaculty = populateFaculty();

	ui.stackedWidget->setCurrentIndex(2);
	ui.welcomeLabel->setText("Enter Class Grades");
	ui.viewCurrentClassesButton->setEnabled(false);
	ui.editGradeButton->setEnabled(false);
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

}

void facultyView::on_viewStudentsButton_clicked()
{
	vector<users>allUsers = populateUsers();
	vector<Student>allStudents = populateStudents();
	vector<classes>allClasses = populateClasses();
	vector<records>allRecords = populateRecords();
	vector<faculty>allFaculty = populateFaculty();

	//disable view students button
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

	for (int i = 0; i < allRecords.size(); i++)
	{
		if (allRecords[i].Crn == CRN.toInt())
		{
					for (int j = 0; j < allStudents.size(); j++)
					{
						if (allRecords[i].Username == allStudents[j].userName)
						{
							items.append(new QStandardItem(QString::fromStdString(allStudents[j].firstName) + " " + QString::fromStdString(allStudents[j].lastName)));
						}
					}

					for (int k = 0; k < allClasses.size(); k++)
					{
						if (allRecords[i].Crn == allClasses[k].CRN)
						{
							items.append(new QStandardItem(QString::fromStdString(allClasses[k].Name)));
							items.append(new QStandardItem(QString::fromStdString(allClasses[k].Semester)));
						}
					}

					items.append(new QStandardItem(QString::number(allRecords[i].Grade)));

					model->appendRow(items);
					items.clear();
				}
		else
		{

		}
		
		}
		
		ui.manageClassesView->setSelectionMode(QAbstractItemView::SingleSelection);
		ui.manageClassesView->setSelectionBehavior(QAbstractItemView::SelectRows);
		ui.manageClassesView->setEditTriggers(QAbstractItemView::NoEditTriggers);
		ui.manageClassesView->setModel(model);
	}

void facultyView::on_editGradeButton_clicked()
{
	QModelIndexList selection = ui.manageClassesView->selectionModel()->selectedRows();
	int row;
	QString gradeEntered;
	int grade = 0;

	QDialog *gradeDialog = new QDialog();
	QLabel *gradeLabel = new QLabel();
	QLineEdit *gradeInput = new QLineEdit();
	QPushButton *saveButton = new QPushButton();
	
	gradeEntered = gradeInput->text();
	grade = gradeEntered.toInt();
	saveButton->setText("Save");
	gradeLabel->setText("Enter Grade: ");
	gradeDialog->setGeometry(geometry().x(), geometry().y(), 100, 100);
	gradeDialog->setWindowTitle("Grade Center");
	QVBoxLayout *verticalLayout = new QVBoxLayout();

	connect(saveButton, SIGNAL(clicked()), this, SLOT(on_saveButton_clicked(int grade)));

	verticalLayout->addWidget(gradeLabel);
	verticalLayout->addWidget(gradeInput);
	verticalLayout->addWidget(saveButton);
	gradeDialog->setLayout(verticalLayout);
	gradeDialog->setGeometry(QStyle::alignedRect(
		Qt::LeftToRight,
		Qt::AlignCenter,
		gradeDialog->size(),
		qApp->desktop()->availableGeometry()
	));
	gradeDialog->show();

}

void facultyView::on_saveButton_clicked(int grade)
{



}

void facultyView::on_viewClassesButton_clicked()
{
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
	model->setColumnCount(allClasses.size() - 1);
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
		int crn = searchClass.toInt();

		//populate table
		for (int i = 0; i < allClasses.size() - 1; i++)
		{
			if (crn == allClasses[i].CRN) {
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
			if (subject == searchSubject) {
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
		int courseID = searchClass.toInt();

		//populate table
		for (int i = 0; i < allClasses.size() - 1; i++)
		{
			if (courseID == allClasses[i].courseID) {
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
		QString searchClass = ui.searchClassesInput->text();
		string name = searchClass.toStdString();

		//populate table
		for (int i = 0; i < allClasses.size() - 1; i++)
		{
			if (name == allClasses[i].Name) {
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
		QString searchClass = ui.searchClassesInput->text();
		string semester = searchClass.toStdString();

		//populate table
		for (int i = 0; i < allClasses.size() - 1; i++)
		{
			if (semester == allClasses[i].Semester) {
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
		QString searchClass = ui.searchClassesInput->text();
		string days = searchClass.toStdString();

		//populate table
		for (int i = 0; i < allClasses.size() - 1; i++)
		{
			if (days == allClasses[i].classDays) {
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
		QString searchClass = ui.searchClassesInput->text();
		string instructor = searchClass.toStdString();

		//populate table
		for (int i = 0; i < allClasses.size() - 1; i++)
		{
			if (instructor == allClasses[i].Instructor) {
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
		QString searchClass = ui.searchClassesInput->text();
		string room = searchClass.toStdString();

		//populate table
		for (int i = 0; i < allClasses.size() - 1; i++)
		{
			if (room == allClasses[i].Room) {
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
	QString currentPasswordTyped = ui.currentPasswordField->text();
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
	if (currentPasswordTyped == "")
	{
		ui.passwordChangeStatusLabel->setStyleSheet("QLabel { background-color : red; color : white; }");
		ui.passwordChangeStatusLabel->setText("Current password can not be blank!");
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
}
