#include "Header Files\stdafx.h"

vector<Student>allStudents = populateStudents();

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
	//QStrings
	QString user = userName;
	QString fullName;
	QString dob;
	QString id;
	QString semester;
	QString gpa;

	//strings
	string username = user.toStdString();
	string name;
	
	int userlocation = 0;
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
	

	ui.setupUi(this);

	ui.studentInfoBrowser->setText("Student Name: " + fullName + "\nStudent Username: "+ user +"\nStudent ID: "+ id +"\nStudent DOB: "+ dob +"\nSemester Enrolled: "+ semester +"\nGPA: ");

	ui.usernameLabel->setText(fullName);
	ui.stackedWidget->setCurrentIndex(0);
	ui.backButton->hide();
}

void studentView::on_viewScheduleButton_clicked()
{
	ui.stackedWidget->setCurrentIndex(1);

	//change header text
	ui.welcomeLabel->setText("View Schedule");

	//enable back button
	ui.backButton->show();
	ui.backButton->setEnabled(true);

	//display schedule
	ui.scheduleTableWidget->setColumnCount(3);
	ui.scheduleTableWidget->setRowCount(2);
//	ui.scheduleTableWidget->setHorizontalHeaderLabels("Class Name<<Instructor<<Grades");

}


void studentView::on_backButton_clicked()
{
	//change header text
	ui.welcomeLabel->setText("Welcome Student");
	ui.backButton->hide();
	ui.stackedWidget->setCurrentIndex(0);
}

void studentView::on_logoutButton_clicked()
{
	this->hide();
	loginView *login = new loginView();
	login->show();
}