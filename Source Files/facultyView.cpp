#include "Header Files\stdafx.h"


facultyView::facultyView(QWidget *parent)
	: QWidget(parent)
{
	
	ui.setupUi(this);
	ui.backButton->hide();
	ui.stackedWidget->setCurrentIndex(0);

}

void facultyView::on_viewScheduleButton_clicked()
{

}
void facultyView::on_manageScheduleButton_clicked()
{

}
void facultyView::on_viewClassesButton_clicked()
{

}
void facultyView::on_changePasswordButton_clicked()
{

}
void facultyView::on_logoutButton_clicked()
{

}