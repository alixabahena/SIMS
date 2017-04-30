#include "Header Files\stdafx.h"

int userlocation_admin = 0;

adminView::adminView(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	ui.stackedWidget->setCurrentIndex(0);
}

adminView::adminView(QString userName)
{
	vector<users>allUsers = populateUsers();

	for (int i = 0; i < allUsers.size(); i++)
	{
		if (allUsers[i].username == userName.toStdString())
		{
			userlocation_admin = i;
			break;
		}
	}

	ui.setupUi(this);
	ui.stackedWidget->setCurrentIndex(0);
}

void adminView::on_editUsersButton_clicked()
{
	ui.stackedWidget->setCurrentIndex(5);

	//change header text
	ui.welcomeLabel->setText("Edit User Table");

	//enable back button
	ui.backButton->setEnabled(true);

	vector<users>allData = populateUsers();

	//set headers name and size
	QStringList headers;
	headers << "User Name" << "Password" << "Access Type";

	//create QT model
	QStandardItemModel *model = new QStandardItemModel(this);
	
	model->setHorizontalHeaderLabels(headers);

	//populate schedule
	for (int i = 0; i < allData.size(); i++)
	{
		QList<QStandardItem *> items;
		items.append(new QStandardItem(QString::fromStdString(allData[i].username)));
		items.append(new QStandardItem(QString::fromStdString(allData[i].password)));
		items.append(new QStandardItem(QString::fromStdString(allData[i].access_type)));
		model->appendRow(items);
	}

	ui.DBView->setSelectionMode(QAbstractItemView::SingleSelection);
	ui.DBView->setSelectionBehavior(QAbstractItemView::SelectRows);
	ui.DBView->setEditTriggers(QAbstractItemView::CurrentChanged);
	ui.DBView->setModel(model);
}

void adminView::on_editFacultyButton_clicked()
{
	ui.stackedWidget->setCurrentIndex(5);

	//change header text
	ui.welcomeLabel->setText("Edit Faculty Table");

	//enable back button
	ui.backButton->setEnabled(true);

	vector<faculty>allData = populateFaculty();

	//set headers name and size
	QStringList headers;
	headers << "First Name" << "Last Name" << "User Name" << "Department";

	//create QT model
	QStandardItemModel *model = new QStandardItemModel(this);
	
	model->setHorizontalHeaderLabels(headers);

	//populate schedule
	for (int i = 0; i < allData.size(); i++)
	{
		QList<QStandardItem *> items;
		items.append(new QStandardItem(QString::fromStdString(allData[i].firstName)));
		items.append(new QStandardItem(QString::fromStdString(allData[i].lastName)));
		items.append(new QStandardItem(QString::fromStdString(allData[i].userName)));
		items.append(new QStandardItem(QString::fromStdString(allData[i].Department)));
		model->appendRow(items);
	}

	ui.DBView->setSelectionMode(QAbstractItemView::SingleSelection);
	ui.DBView->setSelectionBehavior(QAbstractItemView::SelectRows);
	ui.DBView->setEditTriggers(QAbstractItemView::CurrentChanged);
	ui.DBView->setModel(model);
}

void adminView::on_editStudentsButton_clicked()
{
	ui.stackedWidget->setCurrentIndex(5);

	//change header text
	ui.welcomeLabel->setText("Edit Students Table");

	//enable back button
	ui.backButton->setEnabled(true);

	vector<Student>allData = populateStudents();

	//set headers name and size
	QStringList headers;
	headers << "First Name" << "Last Name" << "User Name" << "ID" << "DOB" << "Enrolled Semester" << "Address" << "Email" << "Phone" << "Major";

	//create QT model
	QStandardItemModel *model = new QStandardItemModel(this);
	
	model->setHorizontalHeaderLabels(headers);

	//populate schedule
	for (int i = 0; i < allData.size(); i++)
	{
		QList<QStandardItem *> items;
		items.append(new QStandardItem(QString::fromStdString(allData[i].firstName)));
		items.append(new QStandardItem(QString::fromStdString(allData[i].lastName)));
		items.append(new QStandardItem(QString::fromStdString(allData[i].userName)));
		items.append(new QStandardItem(QString::fromStdString(allData[i].studentID)));
		items.append(new QStandardItem(QString::fromStdString(allData[i].DOB)));
		items.append(new QStandardItem(QString::fromStdString(allData[i].semesterEnrolled)));
		items.append(new QStandardItem(QString::fromStdString(allData[i].homeAddress)));
		items.append(new QStandardItem(QString::fromStdString(allData[i].emailAddress)));
		items.append(new QStandardItem(QString::fromStdString(allData[i].phoneNumber)));
		items.append(new QStandardItem(QString::fromStdString(allData[i].Major)));
		model->appendRow(items);
	}

	ui.DBView->setSelectionMode(QAbstractItemView::SingleSelection);
	ui.DBView->setSelectionBehavior(QAbstractItemView::SelectRows);
	ui.DBView->setEditTriggers(QAbstractItemView::CurrentChanged);
	ui.DBView->setModel(model);
}

void adminView::on_editRecordsButton_clicked()
{
	ui.stackedWidget->setCurrentIndex(5);

	//change header text
	ui.welcomeLabel->setText("Edit Records Table");

	//enable back button
	ui.backButton->setEnabled(true);

	vector<records>allData = populateRecords();

	//set headers name and size
	QStringList headers;
	headers << "User Name" << "CRN" << "Grade" << "Row";

	//create QT model
	QStandardItemModel *model = new QStandardItemModel(this);
	
	model->setHorizontalHeaderLabels(headers);

	//populate schedule
	for (int i = 0; i < allData.size(); i++)
	{
		QList<QStandardItem *> items;
		items.append(new QStandardItem(QString::fromStdString(allData[i].Username)));
		items.append(new QStandardItem(QString::fromStdString(to_string(allData[i].Crn))));
		items.append(new QStandardItem(QString::fromStdString(to_string(allData[i].Grade))));
		items.append(new QStandardItem(QString::fromStdString(to_string(allData[i].Row))));
		model->appendRow(items);
	}

	ui.DBView->setSelectionMode(QAbstractItemView::SingleSelection);
	ui.DBView->setSelectionBehavior(QAbstractItemView::SelectRows);
	ui.DBView->setEditTriggers(QAbstractItemView::CurrentChanged);
	ui.DBView->setModel(model);
}

void adminView::on_editClassesButton_clicked()
{
	ui.stackedWidget->setCurrentIndex(5);

	//change header text
	ui.welcomeLabel->setText("Edit Class Table");

	//enable back button
	ui.backButton->setEnabled(true);

	vector<classes>allData = populateClasses();

	//set headers name and size
	QStringList headers;
	headers << "CRN" << "Subject" << "Course ID" << "Name" << "Semester" << "Class Day" << "Class Time" << "Instructor" << "Room";

	//create QT model
	QStandardItemModel *model = new QStandardItemModel(this);
	
	model->setHorizontalHeaderLabels(headers);

	//populate schedule
	for (int i = 0; i < allData.size(); i++)
	{
		QList<QStandardItem *> items;
		items.append(new QStandardItem(QString::fromStdString(to_string(allData[i].CRN))));
		items.append(new QStandardItem(QString::fromStdString(allData[i].Subject)));
		items.append(new QStandardItem(QString::fromStdString(to_string(allData[i].courseID))));
		items.append(new QStandardItem(QString::fromStdString(allData[i].Name)));
		items.append(new QStandardItem(QString::fromStdString(allData[i].Semester)));
		items.append(new QStandardItem(QString::fromStdString(allData[i].classDays)));
		items.append(new QStandardItem(QString::fromStdString(allData[i].classTime)));
		items.append(new QStandardItem(QString::fromStdString(allData[i].Instructor)));
		items.append(new QStandardItem(QString::fromStdString(allData[i].Room)));
		model->appendRow(items);
	}

	ui.DBView->setSelectionMode(QAbstractItemView::SingleSelection);
	ui.DBView->setSelectionBehavior(QAbstractItemView::SelectRows);
	ui.DBView->setEditTriggers(QAbstractItemView::CurrentChanged);
	ui.DBView->setModel(model);
}

void adminView::on_changePasswordButton_clicked()
{
	ui.stackedWidget->setCurrentIndex(4);

	//change header text
	ui.welcomeLabel->setText("Change Password");

	//enable back button
	ui.backButton->setEnabled(true);
}

void adminView::on_submitButton_clicked()
{
	vector<users>allData = populateUsers();
	vector<Student>allStudents = populateStudents();
	vector<classes>allClasses = populateClasses();
	vector<records>allRecords = populateRecords();
	vector<faculty>allFaculty = populateFaculty();

	QString newPassword;
	QString currentPasswordTyped = ui.currentPasswordField->text();
	QString currentPassword;
	string username = allData[userlocation_admin].username;
	string newVerifyPassword;
	//getting user password
	for (int i = 0; i < allData.size(); i++)
	{
		if (allStudents[userlocation_admin].userName == allData[i].username)
		{
			currentPassword = QString::fromStdString(allData[i].password);
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

void adminView::on_logoutButton_clicked()
{
	this->hide();
	loginView *login = new loginView();
	login->show();
}

void adminView::on_backButton_clicked()
{
	//change header text
	ui.welcomeLabel->setText("Admin Portal");
	ui.backButton->setEnabled(false);
	ui.stackedWidget->setCurrentIndex(0);
}

void adminView::on_addItemButton_clicked()
{
	QList<QStandardItem *> items;
	((QStandardItemModel*)ui.DBView->model())->appendRow(items);
}

void adminView::on_removeItemButton_clicked()
{
	QItemSelectionModel *select = ui.DBView->selectionModel();
	if (select->hasSelection())
	{
		QModelIndexList rows = select->selectedRows();
		for (int i = 0; i < rows.size(); i++)
		{
			ui.DBView->model()->removeRow(rows[i].row());
		}
	}
}