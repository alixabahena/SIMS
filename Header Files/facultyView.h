#pragma once
#include <qwidget.h>
#include <qobject.h>
#include <ui_facultyView.h>


class facultyView : public QWidget
{
	Q_OBJECT

public:
	facultyView(QWidget *parent = Q_NULLPTR);
	facultyView(QString userName);
public slots:
void on_viewScheduleButton_clicked();
void on_manageScheduleButton_clicked();
void on_viewClassesButton_clicked();
void on_changePasswordButton_clicked();
void on_logoutButton_clicked();
void on_backButton_clicked();
void on_submitButton_clicked();
void on_searchButton_clicked();
void on_viewStudentsButton_clicked();
void on_editGradeButton_clicked();
void on_viewCurrentClassesButton_clicked();
void on_saveButton_clicked(int grade);
private:
	Ui::facultyView ui;
};
