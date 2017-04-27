#pragma once
#include <qwidget.h>
#include <qobject.h>
#include <ui_facultyView.h>


class facultyView : public QWidget
{
	Q_OBJECT

public:
	facultyView(QWidget *parent = Q_NULLPTR);
public slots:
void on_viewScheduleButton_clicked();
void on_manageScheduleButton_clicked();
void on_viewClassesButton_clicked();
void on_changePasswordButton_clicked();
void on_logoutButton_clicked();


private:
	Ui::facultyView ui;
};
