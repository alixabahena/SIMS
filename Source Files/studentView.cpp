#include "Header Files\stdafx.h"

vector<Student>allStudents = populateStudents();
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

	ui.studentInfoBrowser->setText("Name: " + fullName + "\n\nUsername: "+ user +"\nStudent ID: "+ id +"\nDate of Birth: "+ dob +"\nSemester Enrolled: "+ semester +"\n\nSemester GPA: ");

	ui.usernameLabel->setText(fullName);
	ui.stackedWidget->setCurrentIndex(0);
	ui.backButton->hide();
}

void studentView::on_viewScheduleButton_clicked()
{
	ui.stackedWidget->setCurrentIndex(1);
	QString classes;

	//change header text
	ui.welcomeLabel->setText("View Schedule");
	

	classes = QString::fromStdString("Class schedule will show here");
	ui.semesterScheduleView->setText(classes);
	//enable back button
	ui.backButton->show();
	ui.backButton->setEnabled(true);

	//display schedule
	

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