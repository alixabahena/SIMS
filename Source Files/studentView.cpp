#include "Header Files\stdafx.h"


studentView::studentView(QWidget *parent)
	: QWidget(parent)
{
	
	ui.setupUi(this);
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

	
}

void studentView::on_backButton_clicked()
{
	//change header text
	ui.welcomeLabel->setText("Welcome Student");
	ui.backButton->hide();
	ui.stackedWidget->setCurrentIndex(0);
}