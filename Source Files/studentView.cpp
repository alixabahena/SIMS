#include "Header Files\stdafx.h"

vector<Student>allStudents = populateStudents();
vector<classes>allClasses = populateClasses();
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

	ui.studentInfoBrowser->setText("Name: " + fullName + "\nUsername: "+ user +"\nStudent ID: "+ id +"\n\nDate of Birth: "+ dob +"\nHome Address: "+homeAddress+"\nPhone Number: "+phoneNumber+"\nEmail: "+emaiAddress+"\n\nMajor: "+Major+"\nSemester Enrolled: "+ semester +"\nSemester GPA: ");

	ui.usernameLabel->setText(fullName);
	ui.stackedWidget->setCurrentIndex(0);
	ui.backButton->hide();
}

void studentView::on_viewScheduleButton_clicked()
{

	ui.stackedWidget->setCurrentIndex(1);
	QString classes;
	vector<string> studentClasses = allStudents[userlocation].GetClasses();

	//change header text
	ui.welcomeLabel->setText("View Schedule");
	
	for (int i = 0; i < studentClasses.size(); i++) {
		classes += QString::fromStdString(studentClasses[i]);
	}

	ui.semesterScheduleView->setText(classes);
	//enable back button
	ui.backButton->show();
	ui.backButton->setEnabled(true);

	//display schedule
	
}

void studentView::on_changePasswordButton_clicked()
{

	ui.stackedWidget->setCurrentIndex(3);
	
	//change header text
	ui.welcomeLabel->setText("Change Password");

	//enable back button
	ui.backButton->show();
	ui.backButton->setEnabled(true);

	//display schedule

}


void studentView::on_viewClassesButton_clicked()
{
	ui.stackedWidget->setCurrentIndex(2);
	//change header text
	ui.welcomeLabel->setText("View Classes");
	//combobox implement
	ui.classesSearchBox->addItem("CRN");
	ui.classesSearchBox->addItem("Subject");
	ui.classesSearchBox->addItem("Course ID");
	ui.classesSearchBox->addItem("Name");
	ui.classesSearchBox->addItem("Semester");
	ui.classesSearchBox->addItem("Days");
	ui.classesSearchBox->addItem("Instructor");
	ui.classesSearchBox->addItem("Room");
	//view classes
	QStandardItemModel *model = new QStandardItemModel(this);
	QList<QStandardItem *> items;
	for (int i = 0; i < allClasses.size()-1; i++)
	{
		QString name = QString::fromStdString(allClasses[i].Name);
		items.append(new QStandardItem(name));

	}
	model->setColumnCount(allClasses.size());
	model->appendRow(items);
	ui.classesView->setModel(model);
	//enable back button
	ui.backButton->show();
	ui.backButton->setEnabled(true);
}


void studentView::on_backButton_clicked()
{
	//change header text
	ui.welcomeLabel->setText("Student Portal");
	ui.backButton->hide();
	ui.stackedWidget->setCurrentIndex(0);
}

void studentView::on_logoutButton_clicked()
{
	this->hide();
	loginView *login = new loginView();
	login->show();
}