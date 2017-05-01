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

loginView::loginView(QWidget *parent)
	: QMainWindow(parent)
{
	
	ui.setupUi(this);
	setFixedSize(500,350);
	ifstream openUsername("usernameFile.txt");
	if (openUsername)
	{
		string saveUsername;
		getline(openUsername, saveUsername);
		ui.usernameField->setText(QString::fromStdString(saveUsername));
	}
	openUsername.close();

}


void loginView::on_okButton_clicked()
{
	vector<users>allusers = populateUsers();
	vector<classes>allclasses = populateClasses();
	
	string username = ui.usernameField->text().toStdString();
	string password = WaffleStringHash(ui.passwordFIeld->text().toStdString());
	QString user = QString::fromStdString(username);

	int userlocation = 0;
	bool TryUser = 0;

	//setting up the animation to fade out the login status label
	QGraphicsOpacityEffect *effect = new QGraphicsOpacityEffect();
	ui.loginStatus->setGraphicsEffect(effect);
	QPropertyAnimation *fadeOut = new QPropertyAnimation(effect, "opacity");
	fadeOut->setDuration(4000);
	fadeOut->setStartValue(1.0);
	fadeOut->setEndValue(0.0);
	fadeOut->setEasingCurve(QEasingCurve::InOutQuart);
	connect(fadeOut, &QPropertyAnimation::finished, [=]()
	{
		ui.loginStatus->setText("");
	});

	//making sure the label clears every time
	ui.loginStatus->setText("");

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
		// Update database with hashed password
		if (allusers[userlocation].password.size() < 40)
		{
			changePassword(allusers[userlocation].username, allusers[userlocation].password);
			ui.loginStatus->setText("Password has been hashed, please retry.");
			fadeOut->start(QAbstractAnimation::DeleteWhenStopped);
			ui.loginStatus->setStyleSheet("QLabel { background-color : green; color : white; }");
		}
		else if (allusers[userlocation].password == password)
		{
			ui.loginStatus->setStyleSheet("QLabel { background-color : green; color : white; }");
			ui.loginStatus->setText("Authentication Successful!");
			fadeOut->start(QAbstractAnimation::DeleteWhenStopped);

			//pull access type and go to main ui from here
			if (allusers[userlocation].access_type == "admin")
			{
				this->hide();
				adminView *adminview = new adminView(user);
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
			fadeOut->start(QAbstractAnimation::DeleteWhenStopped);
			ui.loginStatus->setStyleSheet("QLabel { background-color : red; color : white; }");
		}
	}
	else 
	{
		ui.loginStatus->setText("Incorrect Username or Password.");
		fadeOut->start(QAbstractAnimation::DeleteWhenStopped);
		ui.loginStatus->setStyleSheet("QLabel { background-color : red; color : white; }");
	}

	if (ui.rememberusername->isChecked())
	{
		ofstream usernameFile;
		usernameFile.open("usernameFile.txt",ios::trunc);
		usernameFile << username;
		usernameFile.close();
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
