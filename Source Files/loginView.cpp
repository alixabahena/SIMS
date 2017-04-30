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
