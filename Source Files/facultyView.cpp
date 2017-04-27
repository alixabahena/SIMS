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
	//enable back button
	ui.backButton->show();
	ui.backButton->setEnabled(true);
}
void facultyView::on_manageScheduleButton_clicked()
{
	ui.stackedWidget->setCurrentIndex(2);
	//enable back button
	ui.backButton->show();
	ui.backButton->setEnabled(true);
}
void facultyView::on_viewClassesButton_clicked()
{
	ui.stackedWidget->setCurrentIndex(3);
	//enable back button
	ui.backButton->show();
	ui.backButton->setEnabled(true);

}
void facultyView::on_changePasswordButton_clicked()
{
	ui.stackedWidget->setCurrentIndex(4);
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
