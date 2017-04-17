#include "Header Files\loginView.h"
#include <qsqldatabase.h>
#include <qdir.h>
#include <qsqlquery.h>
#include <string>
#include "Header Files\sqlite3.h"
#include <vector>
#include "Header Files\users.h"
#include "Header Files\databaseManager.h"
#include "Header Files\studentView.h"
#include "Header Files\adminView.h"



vector<users>allusers = populateUsers();

loginView::loginView(QWidget *parent)
	: QMainWindow(parent)
{
	
	

	ui.setupUi(this);
}


void loginView::on_okButton_clicked()
{
	
	
	string username = ui.usernameField->text().toStdString();
	string password = ui.passwordFIeld->text().toStdString();
	

	int userlocation = 0;
	bool TryUser = 0;

	for (int i = 0; i < allusers.size(); i++)
	{
		if (allusers[i].username == username)
		{
			TryUser = 1;
			userlocation = i;
			break;
		}

		else if (allusers[i].username != username && i == allusers.size() - 1)
			TryUser = 0;
		else
			continue;
	}

	if(TryUser != 0)
	{
		if (allusers[userlocation].password == password)
		{
			ui.loginStatus->setStyleSheet("QLabel { background-color : green; color : white; }");
			ui.loginStatus->setText("Authentication Successful!");
			//pull access type and go to main ui from here
			if (allusers[userlocation].access_type == "admin")
			{
				this->hide();
				adminView *adminview = new adminView();
				adminview->show();
			}
			else if (allusers[userlocation].access_type == "faculty")
			{

			}
			else if (allusers[userlocation].access_type == "student")
			{
				this->hide();
				studentView *studentview = new studentView();
				studentview->show();
			}
			else
			{

			}
		}
		else
		{
			ui.loginStatus->setText("Incorrect Username or Password.");
			ui.loginStatus->setStyleSheet("QLabel { background-color : red; color : white; }");
		}
	}
	else 
	{
		ui.loginStatus->setText("Incorrect Username or Password.");
		ui.loginStatus->setStyleSheet("QLabel { background-color : red; color : white; }");
	}
}