#pragma once
#include <qwidget.h>
#include <qobject.h>
#include <ui_studentView.h>


class studentView : public QWidget
{
	Q_OBJECT

public:
	studentView(QWidget *parent = Q_NULLPTR);
	studentView(QString userName);
public slots:
	void on_viewScheduleButton_clicked();
	void on_backButton_clicked();
	void on_logoutButton_clicked();
	void on_viewClassesButton_clicked();
	void on_changePasswordButton_clicked();
	void on_manageScheduleButton_clicked();
	void on_searchButton_clicked();
	void on_submitButton_clicked();
	
private:
	Ui::studentView ui;
};
