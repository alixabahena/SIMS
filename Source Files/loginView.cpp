#include "Header Files\stdafx.h"



loginView::loginView(QWidget *parent)
	: QMainWindow(parent)
{
	
	ui.setupUi(this);
}


void loginView::on_okButton_clicked()
{
	vector<users>allusers = populateUsers();
	vector<classes>allclasses = populateClasses();
	
	string username = ui.usernameField->text().toStdString();
	string password = ui.passwordFIeld->text().toStdString();
	QString user = QString::fromStdString(username);

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
				this->hide();
				facultyView *facultyview = new facultyView(user);
				facultyview->show();
			}
			else if (allusers[userlocation].access_type == "student")
			{
				this->hide();
				studentView *studentview = new studentView(user);
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

bool loginView::eventFilter(QObject * obj, QEvent * event)
{
	if (event->type() == QEvent::KeyPress) {
		QKeyEvent* key = static_cast<QKeyEvent*>(event);
		if ((key->key() == Qt::Key_Enter) || (key->key() == Qt::Key_Return)) {
			//Enter or return was pressed
		}
		else {
			return QObject::eventFilter(obj, event);
		}
		return true;
	}
	else {
		return QObject::eventFilter(obj, event);
	}
	return false;
}
