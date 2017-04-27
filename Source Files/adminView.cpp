#include "Header Files\stdafx.h"

adminView::adminView(QWidget *parent)
	: QMainWindow(parent)
{

	ui.setupUi(this);
	ui.stackedWidget->setCurrentIndex(0);
}

void adminView::on_changePasswordButton_clicked()
{

	ui.stackedWidget->setCurrentIndex(4);

	//change header text
	ui.welcomeLabel->setText("Change Password");

	//enable back button
	ui.backButton->show();
	ui.backButton->setEnabled(true);

	//display schedule

}